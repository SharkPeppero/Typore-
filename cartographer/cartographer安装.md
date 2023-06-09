### 创建工作空间：

```
mkdir -p carto_ws/src && cd carto_ws/src
```

### 克隆源代码到src目录

```
git clone https://ghproxy.com/https://github.com/ros2/cartographer.git -b ros2
git clone https://ghproxy.com/https://github.com/ros2/cartographer_ros.git -b ros2
```

### 安装依赖

```
wget http://fishros.com/install -O fishros && . fishros //配置rosdepc一键安装依赖

sudo rosdepc init
sudo rospdec update

//在ws工作目录下安装依赖
cd ~/carto_ws
rosdepc install -r --from-paths src --ignore-src --rosdistro $ROS_DISTRO -y

//进行编译
colcon build --packages-up-to cartographer_ros
```



PS：安装cartographer，找不到 "absl" 解决方法

```
在下载回来的cartographer上有安装absl的脚本

sudo apt-get install stow
sudo chmod +x ~/carto_ws/src/cartographer/scripts/install_abseil.sh
cd ~/carto_ws/src/cartographer/scripts
./install_abseil.sh
```

