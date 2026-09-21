# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target my_chatter_msgs::my_chatter_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${my_chatter_msgs_TARGETS}.
if(my_chatter_msgs_TARGETS AND NOT TARGET my_chatter_msgs::my_chatter_msgs)
  add_library(my_chatter_msgs::my_chatter_msgs INTERFACE IMPORTED)
  set_target_properties(my_chatter_msgs::my_chatter_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${my_chatter_msgs_TARGETS}")
endif()
