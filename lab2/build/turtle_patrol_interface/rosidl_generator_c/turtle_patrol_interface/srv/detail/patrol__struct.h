// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_patrol_interface:srv/Patrol.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__STRUCT_H_
#define TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtle_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Patrol in the package turtle_patrol_interface.
typedef struct turtle_patrol_interface__srv__Patrol_Request
{
  rosidl_runtime_c__String turtle_name;
  float vel;
  float omega;
  float x;
  float y;
  float theta;
} turtle_patrol_interface__srv__Patrol_Request;

// Struct for a sequence of turtle_patrol_interface__srv__Patrol_Request.
typedef struct turtle_patrol_interface__srv__Patrol_Request__Sequence
{
  turtle_patrol_interface__srv__Patrol_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_patrol_interface__srv__Patrol_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'messages'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Patrol in the package turtle_patrol_interface.
typedef struct turtle_patrol_interface__srv__Patrol_Response
{
  bool success;
  rosidl_runtime_c__String messages;
} turtle_patrol_interface__srv__Patrol_Response;

// Struct for a sequence of turtle_patrol_interface__srv__Patrol_Response.
typedef struct turtle_patrol_interface__srv__Patrol_Response__Sequence
{
  turtle_patrol_interface__srv__Patrol_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_patrol_interface__srv__Patrol_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__STRUCT_H_
