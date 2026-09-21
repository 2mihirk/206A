// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_patrol_interface:srv/Patrol.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__STRUCT_HPP_
#define TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_patrol_interface__srv__Patrol_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_patrol_interface__srv__Patrol_Request __declspec(deprecated)
#endif

namespace turtle_patrol_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Patrol_Request_
{
  using Type = Patrol_Request_<ContainerAllocator>;

  explicit Patrol_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_name = "";
      this->vel = 0.0f;
      this->omega = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  explicit Patrol_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : turtle_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_name = "";
      this->vel = 0.0f;
      this->omega = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _turtle_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _turtle_name_type turtle_name;
  using _vel_type =
    float;
  _vel_type vel;
  using _omega_type =
    float;
  _omega_type omega;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__turtle_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->turtle_name = _arg;
    return *this;
  }
  Type & set__vel(
    const float & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__omega(
    const float & _arg)
  {
    this->omega = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_patrol_interface__srv__Patrol_Request
    std::shared_ptr<turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_patrol_interface__srv__Patrol_Request
    std::shared_ptr<turtle_patrol_interface::srv::Patrol_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Patrol_Request_ & other) const
  {
    if (this->turtle_name != other.turtle_name) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->omega != other.omega) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const Patrol_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Patrol_Request_

// alias to use template instance with default allocator
using Patrol_Request =
  turtle_patrol_interface::srv::Patrol_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_patrol_interface


#ifndef _WIN32
# define DEPRECATED__turtle_patrol_interface__srv__Patrol_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_patrol_interface__srv__Patrol_Response __declspec(deprecated)
#endif

namespace turtle_patrol_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Patrol_Response_
{
  using Type = Patrol_Response_<ContainerAllocator>;

  explicit Patrol_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->messages = "";
    }
  }

  explicit Patrol_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : messages(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->messages = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _messages_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _messages_type messages;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__messages(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->messages = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_patrol_interface__srv__Patrol_Response
    std::shared_ptr<turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_patrol_interface__srv__Patrol_Response
    std::shared_ptr<turtle_patrol_interface::srv::Patrol_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Patrol_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->messages != other.messages) {
      return false;
    }
    return true;
  }
  bool operator!=(const Patrol_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Patrol_Response_

// alias to use template instance with default allocator
using Patrol_Response =
  turtle_patrol_interface::srv::Patrol_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_patrol_interface

namespace turtle_patrol_interface
{

namespace srv
{

struct Patrol
{
  using Request = turtle_patrol_interface::srv::Patrol_Request;
  using Response = turtle_patrol_interface::srv::Patrol_Response;
};

}  // namespace srv

}  // namespace turtle_patrol_interface

#endif  // TURTLE_PATROL_INTERFACE__SRV__DETAIL__PATROL__STRUCT_HPP_
