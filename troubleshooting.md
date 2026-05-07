# トラブルシュートメモ

この `rmf_ws` で実際に起きた問題と、原因・確認方法・解決方法をまとめたメモ。

## 最初に確認すること

### RMFデモを動かす前
```bash
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
```

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
