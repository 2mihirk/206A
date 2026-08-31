// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_chatter_msgs:msg/TimestampString.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_chatter_msgs/msg/detail/timestamp_string__rosidl_typesupport_introspection_c.h"
#include "my_chatter_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_chatter_msgs/msg/detail/timestamp_string__functions.h"
#include "my_chatter_msgs/msg/detail/timestamp_string__struct.h"


// Include directives for member types
// Member `user_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_chatter_msgs__msg__TimestampString__init(message_memory);
}

void my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_fini_function(void * message_memory)
{
  my_chatter_msgs__msg__TimestampString__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_message_member_array[2] = {
  {
    "user_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_chatter_msgs__msg__TimestampString, user_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_chatter_msgs__msg__TimestampString, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_message_members = {
  "my_chatter_msgs__msg",  // message namespace
  "TimestampString",  // message name
  2,  // number of fields
  sizeof(my_chatter_msgs__msg__TimestampString),
  my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_message_member_array,  // message members
  my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_init_function,  // function to initialize message memory (memory has to be allocated)
  my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_message_type_support_handle = {
  0,
  &my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_chatter_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_chatter_msgs, msg, TimestampString)() {
  if (!my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_message_type_support_handle.typesupport_identifier) {
    my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_chatter_msgs__msg__TimestampString__rosidl_typesupport_introspection_c__TimestampString_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
