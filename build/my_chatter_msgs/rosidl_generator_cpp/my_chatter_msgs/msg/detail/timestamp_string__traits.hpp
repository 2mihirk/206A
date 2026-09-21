// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_chatter_msgs:msg/TimestampString.idl
// generated code does not contain a copyright notice

#ifndef MY_CHATTER_MSGS__MSG__DETAIL__TIMESTAMP_STRING__TRAITS_HPP_
#define MY_CHATTER_MSGS__MSG__DETAIL__TIMESTAMP_STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_chatter_msgs/msg/detail/timestamp_string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_chatter_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimestampString & msg,
  std::ostream & out)
{
  out << "{";
  // member: user_message
  {
    out << "user_message: ";
    rosidl_generator_traits::value_to_yaml(msg.user_message, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimestampString & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: user_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_message: ";
    rosidl_generator_traits::value_to_yaml(msg.user_message, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimestampString & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_chatter_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_chatter_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_chatter_msgs::msg::TimestampString & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_chatter_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_chatter_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_chatter_msgs::msg::TimestampString & msg)
{
  return my_chatter_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_chatter_msgs::msg::TimestampString>()
{
  return "my_chatter_msgs::msg::TimestampString";
}

template<>
inline const char * name<my_chatter_msgs::msg::TimestampString>()
{
  return "my_chatter_msgs/msg/TimestampString";
}

template<>
struct has_fixed_size<my_chatter_msgs::msg::TimestampString>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_chatter_msgs::msg::TimestampString>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_chatter_msgs::msg::TimestampString>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_CHATTER_MSGS__MSG__DETAIL__TIMESTAMP_STRING__TRAITS_HPP_
