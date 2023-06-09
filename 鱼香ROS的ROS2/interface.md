### ROS2接口介绍

#### 1、什么是接口

​	**不同处理平台上，统一数据格式**

#### 2、ROS2的接口介绍

​	常见的接口有：

```c++
std_msgs/msg/String//常规的字符串信息 msg.data

sensor_msgs/msg/PointCloud2//点云信息
sensor_msgs/msg/PointCloud//点云信息
sensor_msgs/msg/LaserScan//雷达信息
sensor_msgs/msg/CameraInfo//相机信息
sensor_msgs/msg/CompressedImage//压缩的图像信息
```



#### 3、ROS2自定义接口

​	ROS2提供了四种通信方式：

- 话题（Topic）

- 服务（Service）

- 动作（Action）

- 参数（Parameter）

  除了参数之外，话题、服务、动作都支持自定义接口，使用场景不同，有话题interface、Service interface、Action Interface

  

#### 4、ROS2接口常用的CLI命令



```c++
ros2 interface list //当前环境下接口的列表
ros2 interface packages //当前环境下所有的接口包 比如 std_msgs/msg/*** ;  sensor_msgs/msg
ros2 interface package std_msgs//查看某个包下的所有接口
ros2 interface show std_msgs/msg/String//查看某一个接口下，每个字段的类型
ros2 interface proto sensor_msgs/msg/Image//查看当前各个字段的属性
```





### ROS2自定义话题接口

