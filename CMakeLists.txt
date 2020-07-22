cmake_minimum_required(VERSION 3.2)
project(ground_seg)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
pcl_ros
roscpp
sensor_msgs
)

find_package(PCL 1.7 REQUIRED)

catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS roscpp sensor_msgs pcl_ros
)

include_directories(
 include
 ${catkin_INCLUDE_DIRS}
)
link_directories(${PCL_LIBRARY_DIRS})

add_executable(${PROJECT_NAME} src/ground_seg_node.cpp src/ground_seg_core.cpp)


target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
  ${PCL_LIBRARIES}
)
