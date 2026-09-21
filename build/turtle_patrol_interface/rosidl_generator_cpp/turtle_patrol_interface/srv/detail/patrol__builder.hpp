// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_patrol_interface:srv/Patrol.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__BUILDER_HPP_
#define TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_patrol_interface/srv/detail/patrol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_patrol_interface
{

namespace srv
{

namespace builder
{

class Init_Patrol_Request_theta
{
public:
  explicit Init_Patrol_Request_theta(::turtle_patrol_interface::srv::Patrol_Request & msg)
  : msg_(msg)
  {}
  ::turtle_patrol_interface::srv::Patrol_Request theta(::turtle_patrol_interface::srv::Patrol_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_patrol_interface::srv::Patrol_Request msg_;
};

class Init_Patrol_Request_y
{
public:
  explicit Init_Patrol_Request_y(::turtle_patrol_interface::srv::Patrol_Request & msg)
  : msg_(msg)
  {}
  Init_Patrol_Request_theta y(::turtle_patrol_interface::srv::Patrol_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Patrol_Request_theta(msg_);
  }

private:
  ::turtle_patrol_interface::srv::Patrol_Request msg_;
};

class Init_Patrol_Request_x
{
public:
  explicit Init_Patrol_Request_x(::turtle_patrol_interface::srv::Patrol_Request & msg)
  : msg_(msg)
  {}
  Init_Patrol_Request_y x(::turtle_patrol_interface::srv::Patrol_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Patrol_Request_y(msg_);
  }

private:
  ::turtle_patrol_interface::srv::Patrol_Request msg_;
};

class Init_Patrol_Request_omega
{
public:
  explicit Init_Patrol_Request_omega(::turtle_patrol_interface::srv::Patrol_Request & msg)
  : msg_(msg)
  {}
  Init_Patrol_Request_x omega(::turtle_patrol_interface::srv::Patrol_Request::_omega_type arg)
  {
    msg_.omega = std::move(arg);
    return Init_Patrol_Request_x(msg_);
  }

private:
  ::turtle_patrol_interface::srv::Patrol_Request msg_;
};

class Init_Patrol_Request_vel
{
public:
  explicit Init_Patrol_Request_vel(::turtle_patrol_interface::srv::Patrol_Request & msg)
  : msg_(msg)
  {}
  Init_Patrol_Request_omega vel(::turtle_patrol_interface::srv::Patrol_Request::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_Patrol_Request_omega(msg_);
  }

private:
  ::turtle_patrol_interface::srv::Patrol_Request msg_;
};

class Init_Patrol_Request_turtle_name
{
public:
  Init_Patrol_Request_turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_Request_vel turtle_name(::turtle_patrol_interface::srv::Patrol_Request::_turtle_name_type arg)
  {
    msg_.turtle_name = std::move(arg);
    return Init_Patrol_Request_vel(msg_);
  }

private:
  ::turtle_patrol_interface::srv::Patrol_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_patrol_interface::srv::Patrol_Request>()
{
  return turtle_patrol_interface::srv::builder::Init_Patrol_Request_turtle_name();
}

}  // namespace turtle_patrol_interface


namespace turtle_patrol_interface
{

namespace srv
{

namespace builder
{

class Init_Patrol_Response_messages
{
public:
  explicit Init_Patrol_Response_messages(::turtle_patrol_interface::srv::Patrol_Response & msg)
  : msg_(msg)
  {}
  ::turtle_patrol_interface::srv::Patrol_Response messages(::turtle_patrol_interface::srv::Patrol_Response::_messages_type arg)
  {
    msg_.messages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_patrol_interface::srv::Patrol_Response msg_;
};

class Init_Patrol_Response_success
{
public:
  Init_Patrol_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_Response_messages success(::turtle_patrol_interface::srv::Patrol_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Patrol_Response_messages(msg_);
  }

private:
  ::turtle_patrol_interface::srv::Patrol_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_patrol_interface::srv::Patrol_Response>()
{
  return turtle_patrol_interface::srv::builder::Init_Patrol_Response_success();
}

}  // namespace turtle_patrol_interface

#endif  // TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__BUILDER_HPP_
