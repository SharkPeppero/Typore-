### OccupancyGrid占据栅格地图使用

1. ### Nav_msgs/msg/OccupancyGrid数据格式

   ```xml
   std_msgs/Header header 消息头
   nav_msgs/MapMetaData info 地图元数据
     time map_load_time 地图加载时间
     float32 resolution 地图分辨率 m/cell
     uint32 width 地图宽度（栅格的个数）
     uint32 height
     geometry_msgs/Pose origin  地图原点，像素（0，0）在世界坐标系的坐标
   int8[] data 地图数据
   ```

   

