# トラブルシュートメモ

この `rmf_ws` で実際に起きた問題と、原因・確認方法・解決方法をまとめたメモ。

## 実機ロボットと PC を連動させる

### 前提条件
- TurtleBot4 実機が起動している
- 実機の Wi-Fi 側 IP が `192.168.11.22`
- 実機の USB 側 IP が `192.168.186.3`
- Create 3 の USB 側 IP が `192.168.186.2`
- PC の IP が `192.168.11.1`
- PC と実機が同じネットワークに接続している
- `source ~/turtlebot4_ws/scripts/robot2_env.bash` 後に `echo $ROS_DISCOVERY_SERVER` で現在の Discovery Server 設定を確認できる

### パターン 1: 実機のみを RViz で表示（推奨・シンプル）

実機のセンサーとロボット位置をリアルタイム表示。Gazebo は起動しません。

```bash
cd ~/turtlebot4_ws
source /opt/ros/humble/setup.bash
colcon build --packages-select tb4_square
source install/setup.bash
./scripts/robot2_rviz.sh --robot
```

または短縮形：
```bash
cd ~/turtlebot4_ws
./scripts/robot2_rviz.sh --robot
```

`robot2_rviz.sh` は現在、自動判定が既定です。  
`/robot2/odom` と `/robot2/tf` が見えれば robot モード、見えなければ sim モードへフォールバックします。  
明示したい場合だけ `--robot` / `--sim` を付けます。

現在の実機向け既定では、`wheel_tf_publisher` と `odom_tf_publisher` の補助 TF は起動しません。  
実機側の stamp と競合して `TF_OLD_DATA` を起こしやすかったためです。  
必要な環境だけ次のように明示的に有効化します。

```bash
./scripts/robot2_rviz.sh --robot enable_wheel_tf_helper:=true
./scripts/robot2_rviz.sh --robot enable_odom_tf_helper:=true
```

### パターン 2: Gazebo シミュレーション + 実機データの RViz 表示（高度）

同時に 2 つのロボット環境を見たい場合。ただしネットワーク負荷とログ量が増えます。

別々のターミナルで起動：

**ターミナル 1: Gazebo（シミュレーション）**
```bash
cd ~/turtlebot4_ws
source /opt/ros/humble/setup.bash
colcon build --packages-select tb4_square
source install/setup.bash
unset ROS_DISCOVERY_SERVER
ros2 daemon stop
ros2 launch tb4_square turtlebot4_sim.launch.py rviz:=false
```

**ターミナル 2: RViz（実機表示）**
```bash
cd ~/turtlebot4_ws
source /opt/ros/humble/setup.bash
source install/setup.bash
source scripts/robot2_env.bash
ros2 daemon stop
ros2 launch tb4_square robot2_rviz.launch.py namespace:=robot2 use_sim_time:=false
```

この場合、RViz は実機の `/robot2/scan`, `/robot2/tf`, `/robot2/odom` などを表示します。

### パターン 3: Gazebo のシミュレーション環境をカスタマイズして実機と連携

PC 側で複数ロボット / マップを Gazebo で作成した上で、実機データを別窓で表示する高度な構成。

この場合は `namespace` と `ROS_DOMAIN_ID` を工夫して、トピック名の衝突を避ける必要があります。

### 実機接続の確認

```bash
source /opt/ros/humble/setup.bash
source ~/turtlebot4_ws/install/setup.bash
source ~/turtlebot4_ws/scripts/robot2_env.bash

# トピック表示（実機が起動していれば /robot2/* が見える）
ros2 topic list | rg '/robot2'

# 現在時刻と scan の stamp を比較
date +%s
ros2 topic echo /robot2/scan --once | sed -n '1,8p'

# スキャン確認
ros2 topic echo /robot2/scan --once | sed -n '1,20p'

# ノード確認
ros2 node list | rg '/robot2'
```

もし何も見えない場合は、実機側のノードが起動していないか、ネットワーク接続を確認してください。
`/robot2/scan` の `header.stamp.sec` が `date +%s` と大きくずれている場合は、実機時計が古いままです。

### `robot2_square.sh` が `create3_repub did not appear` で止まる

症状:

```text
[ERROR] /robot2/cmd_vel is visible, but subscriber 'create3_repub' did not appear.
```

原因:

- 実機 bringup によっては `/robot2/cmd_vel` の subscriber が PC 側 graph へ出ない
- その一方で `/robot2/drive_distance` と `/robot2/rotate_angle` action は使える
- PC 側の `ros2 action list` は空でも、ノード内 ActionClient では接続できることがある

現在の `./scripts/robot2_square.sh` は、`/robot2/cmd_vel` が見えている限り
subscriber が 0 でもそのまま `cmd_vel` を流す。  
そのため `create3_repub` が見えないだけなら、スクリプトはそのまま続行してよい。  
このときは `best_effort` ではなく `reliable` を優先する。  
隠れている subscriber が `reliable` の場合、`best_effort` publisher では受け取れないことがあるため。  
`/robot2/cmd_vel` 自体が見えない場合だけ action モードを試す。

確認コマンド:

```bash
cd ~/turtlebot4_ws
./scripts/robot2_status.sh
ros2 action list | grep -E '/robot2/(drive_distance|rotate_angle)'
```

手動で明示したいとき:

```bash
cd ~/turtlebot4_ws
ros2 launch tb4_square square_driver.launch.py \
  control_mode:=action \
  cmd_vel_topic:=/robot2/cmd_vel \
  drive_distance_action_name:=/robot2/drive_distance \
  rotate_angle_action_name:=/robot2/rotate_angle
```

### 別ターミナルでは動かなかったが `source install/setup.bash` 後に動く

症状:

- RViz を起動したターミナルでは動く
- 別ターミナルで `./scripts/robot2_square.sh` をそのまま実行すると期待どおり動かない
- `source /opt/ros/humble/setup.bash`
- `source install/setup.bash`
- のあとだと動く

原因:

- shell の環境変数はターミナルごとに独立している
- あるターミナルで `source` しても、別ターミナルには引き継がれない
- `install/setup.bash` を読んでいないターミナルでは、修正済みの `tb4_square` ではなく古い環境を見に行くことがある

現在の対応:

- `./scripts/robot2_square.sh` は内部で
  `source /opt/ros/humble/setup.bash` と `source ~/turtlebot4_ws/install/setup.bash` を行う
- そのため、新しいターミナルでは `cd ~/turtlebot4_ws && ./scripts/robot2_square.sh` だけでよい

補足:

- `ros2 launch ...` や `ros2 run ...` を手打ちするときは、引き続きそのターミナルで `source` が必要

## 最初に確認すること

### RMFデモを動かす前
```bash
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
```

### TurtleBot4 実機の時刻を確認・同期する
```bash
timedatectl status
sudo timedatectl set-ntp true
sudo timedatectl set-timezone Asia/Tokyo
```

NTP が使えない場合は、一時的に手動で合わせる。

```bash
sudo date -s '2026-05-08 23:10:00'
sudo hwclock --systohc
```

PC と実機で `date +%s` の差が大きい場合は、epoch 秒を直接合わせる方が確実。

```bash
# PC 側で現在 epoch 秒を確認
date +%s

# 実機側で PC 側の値をそのまま設定（例）
sudo date -s '@1778221746'
date +%s
timedatectl status
```

`RTC time: n/a` の機体では `hwclock --systohc` が失敗しても問題ない。

AMCL が `Message Filter dropping message` を出して `map -> odom` が立たないときは、
まず実機側の `date` と PC 側の `date` が大きくずれていないか確認する。

実機の `date` を直したあとも、すでに起動中の sensor node が古い stamp を出し続けることがあります。  
特に `/robot2/scan` の `header.stamp.sec` が古いままなら、次を順に試します。

```bash
# 実機側
turtlebot4-source
date +%s
ros2 topic echo /robot2/scan --once | sed -n '1,8p'
turtlebot4-daemon-restart
ros2 topic echo /robot2/scan --once | sed -n '1,8p'
```

それでも `scan` の stamp が古いままなら、時刻を合わせたあとで `sudo reboot` する。  
再起動後にもう一度 `date +%s` と `/robot2/scan` の stamp を見比べる。

### rmf-web を動かす前
```bash
deactivate 2>/dev/null || true
source /opt/ros/humble/setup.bash
unset ROS_DISCOVERY_SERVER
export PIPENV_IGNORE_VIRTUALENVS=1
source ~/rmf_ws/install/setup.bash
```

### ポート確認
```bash
ss -ltnp | grep -E ':3000|:8000|:8006'
```

- `3000`: rmf-web dashboard
- `8000`: rmf-web api-server
- `8006`: RMF trajectory server

## Git push が弾かれる

### 症状
```text
remote: error: File .vscode/browse.vc.db is 1320.16 MB
remote: error: GH001: Large files detected.
```

### 原因

- VS Code が作る `.vscode/browse.vc.db` が Git に入っていた
- `build/` `install/` `log/` のような生成物も Git 管理対象になっていた

### 解決

```bash
cd ~/rmf_ws
printf '%s\n' \
  '.vscode/browse.vc.db*' \
  'build/' \
  'install/' \
  'log/' \
  >> .gitignore

git rm -r --cached build install log
git rm --cached .vscode/browse.vc.db .vscode/browse.vc.db-shm .vscode/browse.vc.db-wal
git add .gitignore
git commit -m "Ignore generated files"
git push -u origin main
```

### 補足

- `.vscode/browse.vc.db` は Git LFS に入れるより、Git に入れない方がよい

## `building_map_server` が見えない / `/map` が取れない

### 症状
```text
Unknown topic '/map'
WARNING: topic [/map] does not appear to be published yet
Could not determine the type for the passed topic
```

または

```text
Unable to determine the current level_name for robot [...]
```

### 原因

- `ROS_DISCOVERY_SERVER` が有効なままで、ROS 2 ノード探索が外部 discovery server 前提になっていた
- その server に接続できず、`building_map_server` や `/map` が見えなかった

### 確認
```bash
echo $ROS_DISCOVERY_SERVER
ros2 node list | grep building_map_server
ros2 topic echo --qos-durability transient_local --once /map
```

### 解決
```bash
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
ros2 daemon stop
ros2 daemon start
```

その後、もう一度 launch する。

### 補足

- 新しいターミナルを開くたびに再発する場合は、`.bashrc` や TurtleBot4 関連の setup が `ROS_DISCOVERY_SERVER` を再設定している可能性がある

## `localization.launch.py` で `amcl` が active にならない

### 症状
```text
Failed to change state for node: amcl
Failed to bring up all requested nodes. Aborting bringup.
```

### 原因

- 以前の `localization.launch.py` や `nav2` がまだ残っていて、`/robot2/map_server` や `/robot2/amcl` と同名ノードが重複していた
- `ros2 node list` で exact name の重複警告が出ると、lifecycle manager が別インスタンスに当たって起動に失敗することがある

### 確認
```bash
ros2 node list | sort | uniq -c | sort -nr | head -n 20
ps -ef | rg 'localization.launch.py|robot2_nav2_compat.launch.py|nav2|amcl|map_server'
```

### 解決
```bash
ros2 daemon stop
pkill -f 'localization.launch.py' || true
pkill -f 'robot2_nav2_compat.launch.py' || true
pkill -f 'nav2' || true
ros2 daemon start
```

その後、`localization.launch.py` を 1 回だけ起動して `robot2.amcl` が active になってから、Nav2 を起動する。

### 補足

- `initialpose` は `amcl` が active になる前に送っても効かない
- `map -> odom` が出るまでは、Nav2 側の `tf2_echo` は失敗する

## `/robot2/map` が出ない / TF が見えない場合

### 症状
```text
Unknown topic '/robot2/map'
WARNING: topic [/robot2/map] does not appear to be published yet
StaticLayer: "map" passed to lookupTransform argument target_frame does not exist.
```

### 短い切り分け手順
1. トピックとノードを確認する（PC 側、`turtlebot4_ws` 環境で実行）
```bash
ros2 topic list | rg '/robot2' || true
ros2 topic echo /robot2/map --once
ros2 topic info /robot2/map -v || true
ros2 node list | sort | uniq -c | sort -nr | head -n 40
ros2 node info /robot2/amcl || true
ros2 node info /robot2/map_server || true
ros2 lifecycle get /robot2/amcl || true
ros2 topic echo /robot2/amcl_pose --once || true
```

2. TF を確認する（map->odom が出ているか）
```bash
# tf2_echo は既定で /tf, /tf_static を購読するため、robot2 名前空間では remap が必要
ros2 run tf2_ros tf2_echo map odom --ros-args -r /tf:=/robot2/tf -r /tf_static:=/robot2/tf_static
```

3. 見つからない場合のクリーン再起動
```bash
ros2 daemon stop
pkill -f 'localization.launch.py' || true
pkill -f 'robot2_nav2_compat.launch.py' || true
pkill -f 'nav2' || true
ros2 daemon start
```

4. ローカライゼーションを先に起動して `amcl` を `activate` する
```bash
source scripts/robot2_env.bash
ros2 launch turtlebot4_navigation localization.launch.py namespace:=robot2 use_sim_time:=false map:=/opt/ros/humble/share/turtlebot4_navigation/maps/depot.yaml
# 別ターミナルで
ros2 lifecycle set /robot2/amcl configure
ros2 lifecycle set /robot2/amcl activate

# 初期姿勢は topic pub より service call の方が入力ミスを防ぎやすい
ros2 service call /robot2/set_initial_pose nav2_msgs/srv/SetInitialPose \
"{pose: {header: {frame_id: map}, pose: {pose: {position: {x: 0.0, y: 0.0, z: 0.0}, orientation: {x: 0.0, y: 0.0, z: 0.0, w: 1.0}}, covariance: [0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06853891945200942]}}}}"
```

5. `/robot2/map` と map->odom TF が出たら Nav2 を起動する。

### 補足
- 時刻ずれが原因で scan の timestamp が古くなり TF キャッシュと合わないことが非常に多い（ロボット側の `date` を確認）。
- 名前空間の remap ミスやトピック名の差分がないか launch ファイルを再確認すること。
- `amcl` が active でも `/robot2/scan` の Publisher count が 0 だと自己位置更新できず、`map -> odom` は出ない。
- `ros2 topic info /robot2/tf_static -v` で Publisher count が 0 の場合、`base_link -> lidar_frame` 等の静的TFが欠けており AMCL が成立しない。
- 目安コマンド:
  - `ros2 topic info /robot2/scan -v`
  - `ros2 topic info /robot2/tf_static -v`

## RViz でロボットが表示されない / `Frame [odom] does not exist` になる

### 症状
- RViz は起動しているが、ロボットモデルが映らない（グリッドだけ）
- または `No tf data. Actual error: Frame [odom] does not exist`

### 原因の切り分け

`robot2_rviz.sh` はビジュアライザーのみで、ロボット実体のシミュレーション環境は含まれていません。起動ログで以下が出ている場合、ロボットデータが流れていません：

```text
[WARN] No JointState received yet; publishing fallback wheel TFs with zero angles.
[WARN] No odometry received yet; publishing identity odom TF for RViz stability.
```

現在の `robot2_rviz.launch.py` では、上の補助ノードは既定で起動しません。  
ログにこれらが出るのは、`enable_wheel_tf_helper:=true` や `enable_odom_tf_helper:=true` を明示した場合だけです。

### 解決方法

#### 1. シミュレーション + RViz を完全に起動（推奨）
```bash
cd ~/turtlebot4_ws
source /opt/ros/humble/setup.bash
colcon build --packages-select tb4_square
source install/setup.bash
unset ROS_DISCOVERY_SERVER
ros2 daemon stop
ros2 launch tb4_square turtlebot4_sim.launch.py rviz:=true
```

このコマンド 1 つで Gazebo シミュレーション + ロボットスポーン + RViz が起動します。

#### 2. シミュレーション環境が別で起動している場合
別ターミナルで RViz のみ起動：
```bash
cd ~/turtlebot4_ws
unset ROS_DISCOVERY_SERVER
./scripts/robot2_rviz.sh
```

このときは必ず Gazebo 側で `/robot2/odom` と `/robot2/joint_states` が流れていることを確認してください：
```bash
ros2 topic list | rg '/robot2/(odom|joint_states|tf)'
```

#### 3. ロボット実機を表示する場合
```bash
cd ~/turtlebot4_ws
./scripts/robot2_rviz.sh --robot
```

### 確認コマンド
```bash
cd ~/turtlebot4_ws
source /opt/ros/humble/setup.bash
source install/setup.bash

# ロボットデータの確認
ros2 topic list | rg '/robot2/(tf|odom|joint_states|scan|robot_description)'
date +%s
ros2 topic echo /robot2/odom --once
ros2 topic echo /robot2/joint_states --once
ros2 topic echo /robot2/scan --once | sed -n '1,8p'
```

### 補足
- `./scripts/robot2_rviz.sh` はまず実機 topic を探し、見つからないときだけ sim モードへ切り替えます。
- 常に実機を使いたいときは `./scripts/robot2_rviz.sh --robot` と明示できます。
- 常にシミュレーション側だけを見たいときは `./scripts/robot2_rviz.sh --sim` を使います。
- 現在の RViz 既定 `Fixed Frame` は `base_link`。実機時計がずれていて `scan` の stamp が古いとき、`odom` 固定より表示が崩れにくいためです。

## RViz で LaserScan が出ない / `rplidar_link` の Message Filter dropping が続く

### 症状
- RViz の RobotModel や TF は見えるが LaserScan だけ出ない
- `Message Filter dropping message: frame 'rplidar_link' ...`
- `the timestamp on the message is earlier than all the data in the transform cache`
- または `discarding message because the queue is full`

### 原因
- 実機の `/robot2/scan` の `header.stamp` が現在時刻より大きく古い
- 実機時計がずれているか、時計修正前から動いている LiDAR node が古い stamp を出し続けている
- 補助 TF を混ぜると stamp 競合が悪化しやすい

### 確認方法

PC側:

```bash
cd ~/turtlebot4_ws
source scripts/robot2_env.bash
date +%s
ros2 topic echo /robot2/scan --once | sed -n '1,8p'
```

実機側:

```bash
turtlebot4-source
date +%s
ros2 topic echo /robot2/scan --once | sed -n '1,8p'
```

`date +%s` と `header.stamp.sec` が大きくずれていたら、LaserScan の timestamp が古い。

### 対応

1. 実機時計を合わせる。

```bash
sudo timedatectl set-ntp true
sudo timedatectl set-timezone Asia/Tokyo
date +%s
```

2. NTP で合わない場合は PC 側の epoch 秒を実機へ直接入れる。

```bash
# PC側
date +%s

# 実機側
sudo date -s '@1778232650'
date +%s
```

3. 時刻修正後、実機側の sensor node を更新する。

```bash
turtlebot4-daemon-restart
ros2 topic echo /robot2/scan --once | sed -n '1,8p'
```

4. それでも `scan` の stamp が古いままなら、時刻を直したあとで実機を再起動する。

```bash
sudo reboot
```

5. PC 側では `./scripts/robot2_rviz.sh --robot` から起動し、`enable_wheel_tf_helper` と `enable_odom_tf_helper` は必要なときだけ使う。

### 補足
- `inotify_add_watch(... No space left on device)` は今回の LaserScan 非表示の主因ではない。
- 根本的には実機時計を直すのが本命。`Fixed Frame: base_link` は表示を安定させるための回避策。

## `dispatch_clean -cs clean_lobby` なのにうまく動かない

### 原因

- `clean_lobby` は `hotel` デモ用
- `office.launch.xml` と組み合わせると世界と task が噛み合わない

### 正しい組み合わせ
```bash
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
ros2 launch rmf_demos_gz_classic hotel.launch.xml
```

別ターミナルで:

```bash
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
ros2 run rmf_demos_tasks dispatch_clean -cs clean_lobby --use_sim_time
```

## `hotel` で delivery ロボットにタスクを与えられない

### 症状

- `clean` は動くのに `deliveryBot_1` が動かない
- `hotel` を起動しているのに delivery タスクの想定どおりに配送ロボットが選ばれない

### 原因

- `deliveryBot_1` は `delivery` と `loop` は受けられるが、`clean` は受けられない
- `cleanerBotA` は `clean` 専用
- `hotel` のサンプルタスクには `Clean` と `Loop` しかなく、`Delivery` は入っていない
- `hotel` マップには `pickup_dispenser` / `dropoff_ingestor` が無く、`office` のような配送設備前提の delivery デモには向いていない

### 解決

- `hotel` では `clean` は cleaner fleet、移動確認は `Loop` タスクで試す
- 本物の delivery タスクを試したいときは `office.launch.xml` を使う

### 補足

- `hotel` では `tinyBot_1` も `loop` と `delivery` を受けられるため、`Loop` を投げても常に `deliveryBot_1` が選ばれるとは限らない

## `pnpm` が見つからない

### 症状
```text
Command 'pnpm' not found
```

### 原因

- `pnpm` インストール後に `.bashrc` をまだ読み込んでいない

### 解決
```bash
source ~/.bashrc
hash -r
pnpm --version
```

## `rmf-web` で `packages/dashboard` が無い

### 症状
```text
cd: ~/rmf_ws/rmf-web/packages/dashboard: No such file or directory
```

### 原因

- 参考記事は古い `rmf-web` 構成を前提にしている
- 現行の `rmf-web main/0.3.x` は `packages/rmf-dashboard-framework` 構成

### この workspace での結論

- この `rmf_ws` は `humble` ベース
- 現行 `rmf-web main/0.3.x` は `jazzy` 系前提で、そのままでは合わない
- Humble 環境では `rmf-web 0.0.1` を別ディレクトリで使う

### 初回セットアップ
```bash
cd ~/rmf_ws
git clone https://github.com/open-rmf/rmf-web.git rmf-web-0.0.1 --branch 0.0.1 --depth 1
source ~/.bashrc
cd ~/rmf_ws/rmf-web-0.0.1
pnpm install
./.venv/bin/pip install --ignore-installed "pydantic~=2.6.4"
```

## `rmf-web main/0.3.x` の `api-server` が `ImportError` で止まる

### 症状
```text
ImportError: cannot import name 'Alert' from 'rmf_task_msgs.msg'
```

### 原因

- 現行 `rmf-web` が新しい `rmf_task_msgs` を要求している
- 今の `humble` workspace の `rmf_task_msgs` には `Alert` message が無い

### 解決

- `~/rmf_ws/rmf-web` は現行版確認用として残す
- 実際に使うのは `~/rmf_ws/rmf-web-0.0.1`

## rmf-web の画面は出るのに `Network Error` が出る

### 症状
```text
Uncaught runtime errors:
ERROR
Network Error
```

### 原因

- フロント (`3000`) だけ起動している
- 裏の `api-server` (`8000`) または trajectory server (`8006`) が起動していない

### 確認
```bash
ss -ltnp | grep -E ':3000|:8000|:8006'
curl -I http://localhost:8000
curl -I http://localhost:8006
```

### 解決

1. `api-server` を起動
2. RMFデモを `server_uri` 付きで起動
3. dashboard を起動

#### 1. api-server
```bash
deactivate 2>/dev/null || true
source /opt/ros/humble/setup.bash
unset ROS_DISCOVERY_SERVER
export PIPENV_IGNORE_VIRTUALENVS=1
source ~/rmf_ws/install/setup.bash
cd ~/rmf_ws/rmf-web-0.0.1/packages/api-server
pnpm start
```

#### 2. RMFデモ
```bash
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
ros2 launch rmf_demos_gz_classic hotel.launch.xml server_uri:="ws://localhost:8000/_internal"
```

#### 3. dashboard
```bash
source ~/.bashrc
cd ~/rmf_ws/rmf-web-0.0.1/packages/dashboard
pnpm run start:react
```

### 補足

- `dashboard/.env` では `REACT_APP_RMF_SERVER=http://localhost:8000`
- `REACT_APP_TRAJECTORY_SERVER=ws://localhost:8006`
- この 2 つに届かないと `Network Error` が出る

## `pnpm start` で `uvicorn` が無いと言われる

### 症状
```text
ModuleNotFoundError: No module named 'uvicorn'
```

### 原因

- `(.venv)` など、別の Python 仮想環境を有効化したまま `pnpm start` した
- `pipenv` がその仮想環境を使ってしまい、`api-server` 用の依存が見えなかった

### 解決
```bash
deactivate 2>/dev/null || true
export PIPENV_IGNORE_VIRTUALENVS=1
```

その後で `pnpm start` する。

## `pydantic` 関連のエラーで `api-server` が落ちる

### 症状 1
```text
SystemError: The installed pydantic-core version ... is incompatible ...
```

### 症状 2
```text
ModuleNotFoundError: No module named 'pydantic'
```

### 原因

- `~/.local/lib/python3.10/site-packages` と `rmf-web-0.0.1/.venv` の Python 依存が混ざった
- `api-server` の想定は `pydantic~=2.6.4`

### 解決
```bash
cd ~/rmf_ws/rmf-web-0.0.1
./.venv/bin/pip install --ignore-installed "pydantic~=2.6.4"
```

## 切り分けで便利だったコマンド

### ROSノード確認
```bash
ros2 node list
ros2 topic list
ros2 topic info /map -v
```

### ポート確認
```bash
ss -ltnp | grep -E ':3000|:8000|:8006'
```

### `api-server` 疎通確認
```bash
curl -I http://localhost:8000
```

### 現在の discovery 設定確認
```bash
echo $ROS_DISCOVERY_SERVER
echo $ROS_DOMAIN_ID
echo $RMW_IMPLEMENTATION
```

## 運用メモ

- RMFデモ系のターミナルでは、まず `unset ROS_DISCOVERY_SERVER`
- rmf-web 系のターミナルでは、まず `deactivate 2>/dev/null || true`
- `rmf-web main` と `rmf-web-0.0.1` を混ぜない
- `rmf-web-0.0.1` は Humble 用として使う

# PCからcreate3のWebUIを開く方法
ssh -L 8186:192.168.186.2:80 ubuntu@192.168.11.22
http://localhost:8186

# 手動時刻設定
sudo timedatectl set-ntp false
sudo timedatectl set-time '2026-05-12 18:22:00'
sudo systemctl restart chrony
sudo chronyc makestep
chronyc tracking
date

## 2026-05-12 実機 Nav2 立ち上げの確定手順

今回最終的に安定したのは、次の構成です。

- PC: `192.168.11.1`
- `turtlebot4-2` Wi-Fi: `192.168.11.22`
- `turtlebot4-2` USB: `192.168.186.3`
- Create 3: `192.168.186.2`
- `localization` と `Nav2` は PC 側ではなく `turtlebot4-2` 側で起動する

### 1. 時刻同期の正しい流れ

時刻は次の順で流す。

```text
PC(192.168.11.1) -> turtlebot4-2(192.168.11.22)
turtlebot4-2(192.168.186.3) -> Create3(192.168.186.2)
```

PC 側 `chrony.conf` は、他ロボットへ配りたくないなら単体許可でよい。

```conf
allow 192.168.11.22
local stratum 8
```

反映:

```bash
sudo systemctl restart chrony
chronyc tracking
date
```

`turtlebot4-2` 側 `chrony.conf` の最小例:

```conf
server 192.168.11.1 iburst prefer minpoll 4 maxpoll 6
allow 192.168.186.2
local stratum 10
makestep 1.0 3
```

反映:

```bash
sudo systemctl disable --now systemd-timesyncd
sudo systemctl enable --now chrony
sudo systemctl restart chrony
chronyc sources -v
chronyc tracking
date
```

`chronyd` が落ちていると次のように出る。

```text
506 Cannot talk to daemon
```

その場合は、まず `chrony` を起動してから確認し直す。

### 2. Create 3 の NTP 設定

PC から Web UI を開く:

```bash
ssh -L 8186:192.168.186.2:80 ubuntu@192.168.11.22
```

ブラウザ:

```text
http://localhost:8186
```

`Edit ntp.conf` に次が入っていればよい。

```conf
server 192.168.186.3 prefer iburst minpoll 4 maxpoll 6
```

そのあと:

1. `Restart ntpd`
2. 必要なら `Set Date and Time`
3. 必要なら Create 3 本体を再起動

確認:

```bash
curl -I http://192.168.186.2
```

`Date:` が現在時刻付近なら成功。

### 3. 時刻同期後は ROS ノードを再起動する

時刻を直しても、すでに動いているノードは古い stamp を出し続けることがある。  
特に `scan` や `tf` が古いままだと `TF_OLD_DATA` と `Message Filter dropping message` が出続ける。

実機側:

```bash
turtlebot4-source
turtlebot4-daemon-restart
sleep 10
timeout 5 ros2 topic echo /robot2/scan --once
timeout 5 ros2 topic echo /robot2/tf --once
timeout 5 ros2 topic echo /robot2/odom --once
```

`header.stamp.sec` が `date +%s` 付近まで来ていることを確認する。

### 4. Localization は実機側で起動する

PC 側で互換 launch を無理に通すより、`turtlebot4-2` 側で標準 `localization.launch.py` を起動した方が安定した。

実機側:

```bash
source /opt/ros/humble/setup.bash
turtlebot4-source
ros2 daemon stop
ros2 daemon start
ros2 launch turtlebot4_navigation localization.launch.py \
  namespace:=robot2 \
  use_sim_time:=false \
  map:=/opt/ros/humble/share/turtlebot4_navigation/maps/depot.yaml
```

### 5. Initial Pose は必要なら実機側から直接入れる

`amcl` が active でも、PC 側からの `initialpose` がうまく届かないことがあった。  
その場合は実機側ターミナルから入れる方が確実。

確認:

```bash
ros2 lifecycle get /robot2/amcl
ros2 topic info -v /robot2/initialpose
```

`amcl` が `active [3]` で、`/robot2/initialpose` の subscriber が 1 つ見えていれば宛先は合っている。

投入:

```bash
ros2 topic pub -1 --qos-reliability best_effort /robot2/initialpose geometry_msgs/msg/PoseWithCovarianceStamped \
"{header: {frame_id: map}, pose: {pose: {position: {x: 0.0, y: -0.1, z: 0.0}, orientation: {w: 1.0}}, covariance: [0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.068]}}"
```

確認:

```bash
timeout 5 ros2 topic echo /robot2/amcl_pose --once
timeout 5 ros2 run tf2_ros tf2_echo map odom --ros-args -r /tf:=/robot2/tf -r /tf_static:=/robot2/tf_static
```

成功時は `amcl_pose` が出て、`map -> odom` も見える。

### 6. Nav2 も実機側で起動する

Localization が通ったあと、`turtlebot4-2` 側で `Nav2` を立てる。

```bash
source /opt/ros/humble/setup.bash
turtlebot4-source
ros2 launch turtlebot4_navigation nav2.launch.py \
  namespace:=robot2 \
  use_sim_time:=false
```

PC 側で確認:

```bash
cd ~/turtlebot4_ws
source /opt/ros/humble/setup.bash
source scripts/robot2_env.bash
source install/setup.bash
ros2 action list | grep navigate_to_pose
ros2 node list | grep -E '/robot2/(controller_server|planner_server|bt_navigator|waypoint_follower|velocity_smoother|behavior_server|smoother_server)'
```

`/robot2/navigate_to_pose` が見えれば成功。

### 7. 今回の実害が大きかった失敗パターン

- `TF_OLD_DATA ignoring data from the past`
  `scan` / `tf` / `odom` の stamp が古い
- `Message Filter dropping message: frame 'rplidar_link' ... earlier than all the data in the transform cache`
  `scan` が古い
- `AMCL cannot publish a pose or update the transform. Please set the initial pose...`
  `initialpose` が未投入、または届いていない
- `Invalid frame ID "map" passed to canTransform`
  `map -> odom` がまだ立っていない
- `506 Cannot talk to daemon`
  `chronyd` が動いていない

### 8. 次回の最短チェックリスト

1. PC 側 `date` と `chronyc tracking`
2. `turtlebot4-2` 側 `date` と `chronyc tracking`
3. `curl -I http://192.168.186.2` の `Date`
4. 実機側で `turtlebot4-daemon-restart`
5. `/robot2/scan`, `/robot2/tf`, `/robot2/odom` の stamp 確認
6. 実機側で `localization.launch.py`
7. 実機側で `initialpose`
8. `amcl_pose` と `map -> odom`
9. 実機側で `nav2.launch.py`
10. PC 側で `/robot2/navigate_to_pose` 確認
