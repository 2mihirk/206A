# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target turtle_patrol_interface::turtle_patrol_interface
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${turtle_patrol_interface_TARGETS}.
if(turtle_patrol_interface_TARGETS AND NOT TARGET turtle_patrol_interface::turtle_patrol_interface)
  add_library(turtle_patrol_interface::turtle_patrol_interface INTERFACE IMPORTED)
  set_target_properties(turtle_patrol_interface::turtle_patrol_interface PROPERTIES
    INTERFACE_LINK_LIBRARIES "${turtle_patrol_interface_TARGETS}")
endif()
