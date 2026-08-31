// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_chatter_msgs:msg/TimestampString.idl
// generated code does not contain a copyright notice

#ifndef MY_CHATTER_MSGS__MSG__DETAIL__TIMESTAMP_STRING__STRUCT_H_
#define MY_CHATTER_MSGS__MSG__DETAIL__TIMESTAMP_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'user_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TimestampString in the package my_chatter_msgs.
typedef struct my_chatter_msgs__msg__TimestampString
{
  rosidl_runtime_c__String user_message;
  double timestamp;
} my_chatter_msgs__msg__TimestampString;

// Struct for a sequence of my_chatter_msgs__msg__TimestampString.
typedef struct my_chatter_msgs__msg__TimestampString__Sequence
{
  my_chatter_msgs__msg__TimestampString * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_chatter_msgs__msg__TimestampString__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CHATTER_MSGS__MSG__DETAIL__TIMESTAMP_STRING__STRUCT_H_
