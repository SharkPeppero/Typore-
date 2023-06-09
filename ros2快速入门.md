查看现存的节点列表

```
ros2 node list
```

查看节点的信息

```
ros2 node info 
```



查看系统内部的话题

```c++
ros2 topic list
ros2 topic echo 
ros2 topic info //话题的相关信息——话题的消息类型；发布计数；订阅计数
ros2 topic type	//话题的消息类型——自定义消息，自带的消息类型
    
ros2 topic pub --rate 1 /turtle/cmd_vel gepmetry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}"
```



发送服务

```xml
ros2 service call /spawn turtlesim/srv/Spawn "{x: 2, y: 2, theta: 0.2, name: ''}"
```

