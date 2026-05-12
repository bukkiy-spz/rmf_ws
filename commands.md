# RMFデモ

## Office起動
```bash
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
ros2 launch rmf_demos_gz_classic office.launch.xml server_uri:="ws://localhost:7878"
```

## Hotel起動
```bash
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
ros2 launch rmf_demos_gz_classic hotel.launch.xml
```

## 地図サーバ確認
```bash
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
ros2 node list | grep building_map_server
ros2 topic echo --qos-durability transient_local --once /map
```

`Unknown topic '/map'` が出るときは、`ROS_DISCOVERY_SERVER` が残っていないか確認する。

# rmf-web（この workspace で使う方法）

この `rmf_ws` は Humble ベース。
`rmf-web` の `main/0.3.x` は `rmf_task_msgs.msg.Alert` を要求するため、この workspace では `api-server` が起動しない。
Humble 環境では `rmf-web 0.0.1` を別ディレクトリで使う。

## 初回セットアップ
```bash
cd ~/rmf_ws
git clone https://github.com/open-rmf/rmf-web.git rmf-web-0.0.1 --branch 0.0.1 --depth 1
source ~/.bashrc
cd ~/rmf_ws/rmf-web-0.0.1
pnpm install
./.venv/bin/pip install --ignore-installed "pydantic~=2.6.4"
```

## Dashboard起動（api-server同時起動）
```bash
deactivate 2>/dev/null || true
source /opt/ros/humble/setup.bash  # .bashrcに組み込んでいる場合は不要
unset ROS_DISCOVERY_SERVER
export PIPENV_IGNORE_VIRTUALENVS=1
source ~/rmf_ws/install/setup.bash
cd ~/rmf_ws/rmf-web-0.0.1/packages/dashboard
pnpm start
```

Dashboard は `http://localhost:3000` で開く。

`Network Error` が出るときは、`api-server` が落ちている可能性が高い。
この環境では `pydantic` の競合を避けるため、初回に上の `pip install` を一度実行しておく。

## 切り分け用: api-server単独起動
```bash
deactivate 2>/dev/null || true
source /opt/ros/humble/setup.bash  # .bashrcに組み込んでいる場合は不要
unset ROS_DISCOVERY_SERVER
export PIPENV_IGNORE_VIRTUALENVS=1
source ~/rmf_ws/install/setup.bash
cd ~/rmf_ws/rmf-web-0.0.1/packages/api-server
pnpm start
```

## 切り分け用: dashboardフロント単独起動
```bash
source ~/.bashrc
cd ~/rmf_ws/rmf-web-0.0.1/packages/dashboard
pnpm run start:react
```

`pnpm start` で `No module named 'uvicorn'` が出るときは、Python の仮想環境が有効なままになっている可能性が高い。

## rmf-web連携でHotel起動(先にDashboard起動し，そのまま別ターミナルに以下を入力)
```bash
deactivate 2>/dev/null || true
unset ROS_DISCOVERY_SERVER
source ~/rmf_ws/install/setup.bash
ros2 launch rmf_demos_gz_classic hotel.launch.xml server_uri:="ws://localhost:8000/_internal"
```

## 参考: 現行rmf-web
`~/rmf_ws/rmf-web` の `main/0.3.x` は Ubuntu 24.04 + ROS 2 Jazzy 向け。
Dashboard は `packages/rmf-dashboard-framework` だが、この workspace では `api-server` が `ImportError: rmf_task_msgs.msg.Alert` で止まる。

## Gitユーザ設定
```bash
git config --global user.name bukkiy-spz
git config --global user.email ibuki.0601.stu@outlook.jp
```

# RMF Panel URL
```
https://open-rmf.github.io/rmf-panel-js/
```
## Git push

### 初回だけ: 生成ファイルを Git 管理から外す設定

```bash
cd ~/rmf_ws
printf '%s\n' \
  '.vscode/browse.vc.db*' \
  'build/' \
  'install/' \
  'log/' \
  >> .gitignore
```

すでに追跡対象に入ってしまっている場合は、最初に一度だけ外す。

```bash
cd ~/rmf_ws
git rm -r --cached build install log
git rm --cached .vscode/browse.vc.db .vscode/browse.vc.db-shm .vscode/browse.vc.db-wal
git add .gitignore
git commit -m "Ignore generated files"
```

### ふだんの push 手順

```bash
cd ~/rmf_ws
git status
git add commands.md troubleshooting.md
git commit -m "トラブルシューティング更新"
git push -u origin main
```

`git add .` でもよいが、`rmf-web/` `rmf-web-0.0.1/` のような別 Git リポジトリや、`.rmf_schedule_node.yaml` `web_server.log` のような生成ファイルを拾いやすいので注意する。

### push 前チェック

```bash
cd ~/rmf_ws
git status
git diff --cached --stat
```

`build/` `install/` `log/` `.vscode/browse.vc.db` が入っていないことを確認してから push する。

`rmf-web/` `rmf-web-0.0.1/` `web_server.log` `.rmf_schedule_node.yaml` が入っていないことも確認する。

### もし `git add .` で余計なものを stage したら

```bash
cd ~/rmf_ws
git rm --cached -r rmf-web rmf-web-0.0.1
git restore --staged .rmf_schedule_node.yaml web_server.log
git status
```

`git rm --cached` は index から外すだけなので、ローカルのフォルダ自体は消えない。

### もし大きいファイルで push が止まったら

```bash
cd ~/rmf_ws
git rm --cached .vscode/browse.vc.db
git add .gitignore
git commit --amend --no-edit
git push -u origin main
```
