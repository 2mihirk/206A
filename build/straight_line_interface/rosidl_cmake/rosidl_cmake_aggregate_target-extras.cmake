# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target straight_line_interface::straight_line_interface
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${straight_line_interface_TARGETS}.
if(straight_line_interface_TARGETS AND NOT TARGET straight_line_interface::straight_line_interface)
  add_library(straight_line_interface::straight_line_interface INTERFACE IMPORTED)
  set_target_properties(straight_line_interface::straight_line_interface PROPERTIES
    INTERFACE_LINK_LIBRARIES "${straight_line_interface_TARGETS}")
endif()
