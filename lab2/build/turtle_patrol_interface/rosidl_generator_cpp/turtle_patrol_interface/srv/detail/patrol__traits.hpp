// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_patrol_interface:srv/Patrol.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__TRAITS_HPP_
#define TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_patrol_interface/srv/detail/patrol__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_patrol_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Patrol_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_name
  {
    out << "turtle_name: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_name, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << ", ";
  }

  // member: omega
  {
    out << "omega: ";
    rosidl_generator_traits::value_to_yaml(msg.omega, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Patrol_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_name: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_name, out);
    out << "\n";
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }

  // member: omega
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega: ";
    rosidl_generator_traits::value_to_yaml(msg.omega, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Patrol_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_patrol_interface

namespace rosidl_generator_traits
{

[[deprecated("use turtle_patrol_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_patrol_interface::srv::Patrol_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_patrol_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_patrol_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_patrol_interface::srv::Patrol_Request & msg)
{
  return turtle_patrol_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_patrol_interface::srv::Patrol_Request>()
{
  return "turtle_patrol_interface::srv::Patrol_Request";
}

template<>
inline const char * name<turtle_patrol_interface::srv::Patrol_Request>()
{
  return "turtle_patrol_interface/srv/Patrol_Request";
}

template<>
struct has_fixed_size<turtle_patrol_interface::srv::Patrol_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_patrol_interface::srv::Patrol_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_patrol_interface::srv::Patrol_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_patrol_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Patrol_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: messages
  {
    out << "messages: ";
    rosidl_generator_traits::value_to_yaml(msg.messages, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Patrol_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "messages: ";
    rosidl_generator_traits::value_to_yaml(msg.messages, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Patrol_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_patrol_interface

namespace rosidl_generator_traits
{

[[deprecated("use turtle_patrol_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_patrol_interface::srv::Patrol_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_patrol_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_patrol_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_patrol_interface::srv::Patrol_Response & msg)
{
  return turtle_patrol_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_patrol_interface::srv::Patrol_Response>()
{
  return "turtle_patrol_interface::srv::Patrol_Response";
}

template<>
inline const char * name<turtle_patrol_interface::srv::Patrol_Response>()
{
  return "turtle_patrol_interface/srv/Patrol_Response";
}

template<>
struct has_fixed_size<turtle_patrol_interface::srv::Patrol_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_patrol_interface::srv::Patrol_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_patrol_interface::srv::Patrol_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_patrol_interface::srv::Patrol>()
{
  return "turtle_patrol_interface::srv::Patrol";
}

template<>
inline const char * name<turtle_patrol_interface::srv::Patrol>()
{
  return "turtle_patrol_interface/srv/Patrol";
}

template<>
struct has_fixed_size<turtle_patrol_interface::srv::Patrol>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_patrol_interface::srv::Patrol_Request>::value &&
    has_fixed_size<turtle_patrol_interface::srv::Patrol_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_patrol_interface::srv::Patrol>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_patrol_interface::srv::Patrol_Request>::value &&
    has_bounded_size<turtle_patrol_interface::srv::Patrol_Response>::value
  >
{
};

template<>
struct is_service<turtle_patrol_interface::srv::Patrol>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_patrol_interface::srv::Patrol_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_patrol_interface::srv::Patrol_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__TRAITS_HPP_
