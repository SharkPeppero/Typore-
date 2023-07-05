### 1、map_builder_bridge_结构梳理

```c++
public:
	//成员变量：

	struct LocalTrajectoryData//该结构体存储的是local SLAM处理后的结果。由range_data_in_local中已经估计出了在时刻time时的当前local_pose
    {
        //时间戳
        //优化匹配出来的local-pose（在submap这个局部坐标系下的位姿）
        //激光的数据
        //局部slam的数据
    }
	//成员函数:
private:
	//成员变量：
	//成员函数：
```

