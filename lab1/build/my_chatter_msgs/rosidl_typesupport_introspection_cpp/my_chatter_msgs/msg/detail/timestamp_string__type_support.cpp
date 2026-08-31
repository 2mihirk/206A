// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_chatter_msgs:msg/TimestampString.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_chatter_msgs/msg/detail/timestamp_string__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_chatter_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TimestampString_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_chatter_msgs::msg::TimestampString(_init);
}

void TimestampString_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_chatter_msgs::msg::TimestampString *>(message_memory);
  typed_message->~TimestampString();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TimestampString_message_member_array[2] = {
  {
    "user_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_chatter_msgs::msg::TimestampString, user_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_chatter_msgs::msg::TimestampString, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TimestampString_message_members = {
  "my_chatter_msgs::msg",  // message namespace
  "TimestampString",  // message name
  2,  // number of fields
  sizeof(my_chatter_msgs::msg::TimestampString),
  TimestampString_message_member_array,  // message members
  TimestampString_init_function,  // function to initialize message memory (memory has to be allocated)
  TimestampString_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TimestampString_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TimestampString_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_chatter_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_chatter_msgs::msg::TimestampString>()
{
  return &::my_chatter_msgs::msg::rosidl_typesupport_introspection_cpp::TimestampString_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_chatter_msgs, msg, TimestampString)() {
  return &::my_chatter_msgs::msg::rosidl_typesupport_introspection_cpp::TimestampString_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
