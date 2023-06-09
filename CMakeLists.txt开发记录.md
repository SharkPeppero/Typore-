### ROS2中CMakeLists.txt书写

```cmake
cmake_minimum_required(VERSION 3.5)
project(Project_name)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
if(${OpenCV_FOUND})
	message(STATUS "OpenCV's Version is:${OpenCV_VERSION}")
endif()

#==========设置文件生成的路径===============
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)#指定静态库输出的路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)#指定动态库的输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)#指定可执行文件的输出路径

file(GLOB_RECURSE PARSER_PATH src/*.cpp)#生成目录列表，添加的指定文件到某个变量中， parser_path(解析路径)
										#其中GLOB_RECURSE为当前目录以及子目录下的指定文件
										#GLOB为指定当前目录下的指定文件

add_subdirectory()#向当前工程添加存放源文件的子目录


```



1. **CMakeLists.txt**中**Message**的用法：

```cmake
#1、if判断
if()
	xxx(要缩进)
endif()

#2、if-else判断
if()
	xxx(要缩进)
else()
	xxx(要缩进)
endif()
```



关键字

```cmake
${PROJECT_SOURCE_DIR} #功能包目录
${CMAKE_CURRENT_SOURCE_DIR}#
${PROJECT_NAME}#项目名称
```



add_library(利用源码编译出动态库、静态库以便于让其他程序进行使用)

**命令用于使用指定的源文件向项目(project)中添加库**

```cmake
add_library(<name> [STATIC | SHARED | MODULE] [EXCLUDE_FROM_ALL] [source1] [source2] [...])
#<name>:为库文件的名称
#[STATIC | SHARED | MODULE]：选择生成库的类型——静态库、动态库、模块库
#[EXCLUDE_FROM_ALL]:
#[sourceX]:指定生成库的源文件
```



1. add_library(<name> [STATIC | SHARED | MODULE]
2. ​            [EXCLUDE_FROM_ALL]
3. ​            [<source>...]) *# Normal Libraries*



