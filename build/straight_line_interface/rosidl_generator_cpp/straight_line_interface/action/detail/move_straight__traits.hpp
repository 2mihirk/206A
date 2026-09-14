// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from straight_line_interface:action/MoveStraight.idl
// generated code does not contain a copyright notice

#ifndef STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__TRAITS_HPP_
#define STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "straight_line_interface/action/detail/move_straight__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace straight_line_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveStraight_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: max_step
  {
    out << "max_step: ";
    rosidl_generator_traits::value_to_yaml(msg.max_step, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveStraight_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }

  // member: max_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_step: ";
    rosidl_generator_traits::value_to_yaml(msg.max_step, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveStraight_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace straight_line_interface

namespace rosidl_generator_traits
{

[[deprecated("use straight_line_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const straight_line_interface::action::MoveStraight_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  straight_line_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use straight_line_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const straight_line_interface::action::MoveStraight_Goal & msg)
{
  return straight_line_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_Goal>()
{
  return "straight_line_interface::action::MoveStraight_Goal";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_Goal>()
{
  return "straight_line_interface/action/MoveStraight_Goal";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<straight_line_interface::action::MoveStraight_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace straight_line_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveStraight_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: planned_fraction
  {
    out << "planned_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.planned_fraction, out);
    out << ", ";
  }

  // member: dist_to_go
  {
    out << "dist_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_go, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveStraight_Result & msg,
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

  // member: planned_fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planned_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.planned_fraction, out);
    out << "\n";
  }

  // member: dist_to_go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_go, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveStraight_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace straight_line_interface

namespace rosidl_generator_traits
{

[[deprecated("use straight_line_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const straight_line_interface::action::MoveStraight_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  straight_line_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use straight_line_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const straight_line_interface::action::MoveStraight_Result & msg)
{
  return straight_line_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_Result>()
{
  return "straight_line_interface::action::MoveStraight_Result";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_Result>()
{
  return "straight_line_interface/action/MoveStraight_Result";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<straight_line_interface::action::MoveStraight_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace straight_line_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveStraight_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: planned_fraction
  {
    out << "planned_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.planned_fraction, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveStraight_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planned_fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planned_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.planned_fraction, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveStraight_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace straight_line_interface

namespace rosidl_generator_traits
{

[[deprecated("use straight_line_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const straight_line_interface::action::MoveStraight_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  straight_line_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use straight_line_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const straight_line_interface::action::MoveStraight_Feedback & msg)
{
  return straight_line_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_Feedback>()
{
  return "straight_line_interface::action::MoveStraight_Feedback";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_Feedback>()
{
  return "straight_line_interface/action/MoveStraight_Feedback";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<straight_line_interface::action::MoveStraight_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "straight_line_interface/action/detail/move_straight__traits.hpp"

namespace straight_line_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveStraight_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveStraight_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveStraight_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace straight_line_interface

namespace rosidl_generator_traits
{

[[deprecated("use straight_line_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const straight_line_interface::action::MoveStraight_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  straight_line_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use straight_line_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const straight_line_interface::action::MoveStraight_SendGoal_Request & msg)
{
  return straight_line_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_SendGoal_Request>()
{
  return "straight_line_interface::action::MoveStraight_SendGoal_Request";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_SendGoal_Request>()
{
  return "straight_line_interface/action/MoveStraight_SendGoal_Request";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<straight_line_interface::action::MoveStraight_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<straight_line_interface::action::MoveStraight_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<straight_line_interface::action::MoveStraight_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace straight_line_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveStraight_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveStraight_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveStraight_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace straight_line_interface

namespace rosidl_generator_traits
{

[[deprecated("use straight_line_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const straight_line_interface::action::MoveStraight_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  straight_line_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use straight_line_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const straight_line_interface::action::MoveStraight_SendGoal_Response & msg)
{
  return straight_line_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_SendGoal_Response>()
{
  return "straight_line_interface::action::MoveStraight_SendGoal_Response";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_SendGoal_Response>()
{
  return "straight_line_interface/action/MoveStraight_SendGoal_Response";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<straight_line_interface::action::MoveStraight_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_SendGoal>()
{
  return "straight_line_interface::action::MoveStraight_SendGoal";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_SendGoal>()
{
  return "straight_line_interface/action/MoveStraight_SendGoal";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<straight_line_interface::action::MoveStraight_SendGoal_Request>::value &&
    has_fixed_size<straight_line_interface::action::MoveStraight_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<straight_line_interface::action::MoveStraight_SendGoal_Request>::value &&
    has_bounded_size<straight_line_interface::action::MoveStraight_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<straight_line_interface::action::MoveStraight_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<straight_line_interface::action::MoveStraight_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<straight_line_interface::action::MoveStraight_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace straight_line_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveStraight_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveStraight_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveStraight_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace straight_line_interface

namespace rosidl_generator_traits
{

[[deprecated("use straight_line_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const straight_line_interface::action::MoveStraight_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  straight_line_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use straight_line_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const straight_line_interface::action::MoveStraight_GetResult_Request & msg)
{
  return straight_line_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_GetResult_Request>()
{
  return "straight_line_interface::action::MoveStraight_GetResult_Request";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_GetResult_Request>()
{
  return "straight_line_interface/action/MoveStraight_GetResult_Request";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<straight_line_interface::action::MoveStraight_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "straight_line_interface/action/detail/move_straight__traits.hpp"

namespace straight_line_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveStraight_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveStraight_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveStraight_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace straight_line_interface

namespace rosidl_generator_traits
{

[[deprecated("use straight_line_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const straight_line_interface::action::MoveStraight_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  straight_line_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use straight_line_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const straight_line_interface::action::MoveStraight_GetResult_Response & msg)
{
  return straight_line_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_GetResult_Response>()
{
  return "straight_line_interface::action::MoveStraight_GetResult_Response";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_GetResult_Response>()
{
  return "straight_line_interface/action/MoveStraight_GetResult_Response";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<straight_line_interface::action::MoveStraight_Result>::value> {};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<straight_line_interface::action::MoveStraight_Result>::value> {};

template<>
struct is_message<straight_line_interface::action::MoveStraight_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_GetResult>()
{
  return "straight_line_interface::action::MoveStraight_GetResult";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_GetResult>()
{
  return "straight_line_interface/action/MoveStraight_GetResult";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<straight_line_interface::action::MoveStraight_GetResult_Request>::value &&
    has_fixed_size<straight_line_interface::action::MoveStraight_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<straight_line_interface::action::MoveStraight_GetResult_Request>::value &&
    has_bounded_size<straight_line_interface::action::MoveStraight_GetResult_Response>::value
  >
{
};

template<>
struct is_service<straight_line_interface::action::MoveStraight_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<straight_line_interface::action::MoveStraight_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<straight_line_interface::action::MoveStraight_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "straight_line_interface/action/detail/move_straight__traits.hpp"

namespace straight_line_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveStraight_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveStraight_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveStraight_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace straight_line_interface

namespace rosidl_generator_traits
{

[[deprecated("use straight_line_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const straight_line_interface::action::MoveStraight_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  straight_line_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use straight_line_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const straight_line_interface::action::MoveStraight_FeedbackMessage & msg)
{
  return straight_line_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<straight_line_interface::action::MoveStraight_FeedbackMessage>()
{
  return "straight_line_interface::action::MoveStraight_FeedbackMessage";
}

template<>
inline const char * name<straight_line_interface::action::MoveStraight_FeedbackMessage>()
{
  return "straight_line_interface/action/MoveStraight_FeedbackMessage";
}

template<>
struct has_fixed_size<straight_line_interface::action::MoveStraight_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<straight_line_interface::action::MoveStraight_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<straight_line_interface::action::MoveStraight_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<straight_line_interface::action::MoveStraight_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<straight_line_interface::action::MoveStraight_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<straight_line_interface::action::MoveStraight>
  : std::true_type
{
};

template<>
struct is_action_goal<straight_line_interface::action::MoveStraight_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<straight_line_interface::action::MoveStraight_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<straight_line_interface::action::MoveStraight_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__TRAITS_HPP_
