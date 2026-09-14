// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from straight_line_interface:action/MoveStraight.idl
// generated code does not contain a copyright notice

#ifndef STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__STRUCT_HPP_
#define STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__straight_line_interface__action__MoveStraight_Goal __attribute__((deprecated))
#else
# define DEPRECATED__straight_line_interface__action__MoveStraight_Goal __declspec(deprecated)
#endif

namespace straight_line_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveStraight_Goal_
{
  using Type = MoveStraight_Goal_<ContainerAllocator>;

  explicit MoveStraight_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_step = 0.0;
    }
  }

  explicit MoveStraight_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_step = 0.0;
    }
  }

  // field types and members
  using _target_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _target_type target;
  using _max_step_type =
    double;
  _max_step_type max_step;

  // setters for named parameter idiom
  Type & set__target(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__max_step(
    const double & _arg)
  {
    this->max_step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_Goal
    std::shared_ptr<straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_Goal
    std::shared_ptr<straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveStraight_Goal_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    if (this->max_step != other.max_step) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveStraight_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveStraight_Goal_

// alias to use template instance with default allocator
using MoveStraight_Goal =
  straight_line_interface::action::MoveStraight_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace straight_line_interface


#ifndef _WIN32
# define DEPRECATED__straight_line_interface__action__MoveStraight_Result __attribute__((deprecated))
#else
# define DEPRECATED__straight_line_interface__action__MoveStraight_Result __declspec(deprecated)
#endif

namespace straight_line_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveStraight_Result_
{
  using Type = MoveStraight_Result_<ContainerAllocator>;

  explicit MoveStraight_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->planned_fraction = 0.0;
      this->dist_to_go = 0.0;
      this->message = "";
    }
  }

  explicit MoveStraight_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->planned_fraction = 0.0;
      this->dist_to_go = 0.0;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _planned_fraction_type =
    double;
  _planned_fraction_type planned_fraction;
  using _dist_to_go_type =
    double;
  _dist_to_go_type dist_to_go;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__planned_fraction(
    const double & _arg)
  {
    this->planned_fraction = _arg;
    return *this;
  }
  Type & set__dist_to_go(
    const double & _arg)
  {
    this->dist_to_go = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    straight_line_interface::action::MoveStraight_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const straight_line_interface::action::MoveStraight_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_Result
    std::shared_ptr<straight_line_interface::action::MoveStraight_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_Result
    std::shared_ptr<straight_line_interface::action::MoveStraight_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveStraight_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->planned_fraction != other.planned_fraction) {
      return false;
    }
    if (this->dist_to_go != other.dist_to_go) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveStraight_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveStraight_Result_

// alias to use template instance with default allocator
using MoveStraight_Result =
  straight_line_interface::action::MoveStraight_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace straight_line_interface


#ifndef _WIN32
# define DEPRECATED__straight_line_interface__action__MoveStraight_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__straight_line_interface__action__MoveStraight_Feedback __declspec(deprecated)
#endif

namespace straight_line_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveStraight_Feedback_
{
  using Type = MoveStraight_Feedback_<ContainerAllocator>;

  explicit MoveStraight_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planned_fraction = 0.0;
      this->state = "";
    }
  }

  explicit MoveStraight_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planned_fraction = 0.0;
      this->state = "";
    }
  }

  // field types and members
  using _planned_fraction_type =
    double;
  _planned_fraction_type planned_fraction;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__planned_fraction(
    const double & _arg)
  {
    this->planned_fraction = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_Feedback
    std::shared_ptr<straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_Feedback
    std::shared_ptr<straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveStraight_Feedback_ & other) const
  {
    if (this->planned_fraction != other.planned_fraction) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveStraight_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveStraight_Feedback_

// alias to use template instance with default allocator
using MoveStraight_Feedback =
  straight_line_interface::action::MoveStraight_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace straight_line_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "straight_line_interface/action/detail/move_straight__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__straight_line_interface__action__MoveStraight_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__straight_line_interface__action__MoveStraight_SendGoal_Request __declspec(deprecated)
#endif

namespace straight_line_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveStraight_SendGoal_Request_
{
  using Type = MoveStraight_SendGoal_Request_<ContainerAllocator>;

  explicit MoveStraight_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveStraight_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const straight_line_interface::action::MoveStraight_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_SendGoal_Request
    std::shared_ptr<straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_SendGoal_Request
    std::shared_ptr<straight_line_interface::action::MoveStraight_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveStraight_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveStraight_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveStraight_SendGoal_Request_

// alias to use template instance with default allocator
using MoveStraight_SendGoal_Request =
  straight_line_interface::action::MoveStraight_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace straight_line_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__straight_line_interface__action__MoveStraight_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__straight_line_interface__action__MoveStraight_SendGoal_Response __declspec(deprecated)
#endif

namespace straight_line_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveStraight_SendGoal_Response_
{
  using Type = MoveStraight_SendGoal_Response_<ContainerAllocator>;

  explicit MoveStraight_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveStraight_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_SendGoal_Response
    std::shared_ptr<straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_SendGoal_Response
    std::shared_ptr<straight_line_interface::action::MoveStraight_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveStraight_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveStraight_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveStraight_SendGoal_Response_

// alias to use template instance with default allocator
using MoveStraight_SendGoal_Response =
  straight_line_interface::action::MoveStraight_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace straight_line_interface

namespace straight_line_interface
{

namespace action
{

struct MoveStraight_SendGoal
{
  using Request = straight_line_interface::action::MoveStraight_SendGoal_Request;
  using Response = straight_line_interface::action::MoveStraight_SendGoal_Response;
};

}  // namespace action

}  // namespace straight_line_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__straight_line_interface__action__MoveStraight_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__straight_line_interface__action__MoveStraight_GetResult_Request __declspec(deprecated)
#endif

namespace straight_line_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveStraight_GetResult_Request_
{
  using Type = MoveStraight_GetResult_Request_<ContainerAllocator>;

  explicit MoveStraight_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveStraight_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_GetResult_Request
    std::shared_ptr<straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_GetResult_Request
    std::shared_ptr<straight_line_interface::action::MoveStraight_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveStraight_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveStraight_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveStraight_GetResult_Request_

// alias to use template instance with default allocator
using MoveStraight_GetResult_Request =
  straight_line_interface::action::MoveStraight_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace straight_line_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "straight_line_interface/action/detail/move_straight__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__straight_line_interface__action__MoveStraight_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__straight_line_interface__action__MoveStraight_GetResult_Response __declspec(deprecated)
#endif

namespace straight_line_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveStraight_GetResult_Response_
{
  using Type = MoveStraight_GetResult_Response_<ContainerAllocator>;

  explicit MoveStraight_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveStraight_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    straight_line_interface::action::MoveStraight_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const straight_line_interface::action::MoveStraight_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_GetResult_Response
    std::shared_ptr<straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_GetResult_Response
    std::shared_ptr<straight_line_interface::action::MoveStraight_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveStraight_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveStraight_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveStraight_GetResult_Response_

// alias to use template instance with default allocator
using MoveStraight_GetResult_Response =
  straight_line_interface::action::MoveStraight_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace straight_line_interface

namespace straight_line_interface
{

namespace action
{

struct MoveStraight_GetResult
{
  using Request = straight_line_interface::action::MoveStraight_GetResult_Request;
  using Response = straight_line_interface::action::MoveStraight_GetResult_Response;
};

}  // namespace action

}  // namespace straight_line_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "straight_line_interface/action/detail/move_straight__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__straight_line_interface__action__MoveStraight_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__straight_line_interface__action__MoveStraight_FeedbackMessage __declspec(deprecated)
#endif

namespace straight_line_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveStraight_FeedbackMessage_
{
  using Type = MoveStraight_FeedbackMessage_<ContainerAllocator>;

  explicit MoveStraight_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveStraight_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const straight_line_interface::action::MoveStraight_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_FeedbackMessage
    std::shared_ptr<straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__straight_line_interface__action__MoveStraight_FeedbackMessage
    std::shared_ptr<straight_line_interface::action::MoveStraight_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveStraight_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveStraight_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveStraight_FeedbackMessage_

// alias to use template instance with default allocator
using MoveStraight_FeedbackMessage =
  straight_line_interface::action::MoveStraight_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace straight_line_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace straight_line_interface
{

namespace action
{

struct MoveStraight
{
  /// The goal message defined in the action definition.
  using Goal = straight_line_interface::action::MoveStraight_Goal;
  /// The result message defined in the action definition.
  using Result = straight_line_interface::action::MoveStraight_Result;
  /// The feedback message defined in the action definition.
  using Feedback = straight_line_interface::action::MoveStraight_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = straight_line_interface::action::MoveStraight_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = straight_line_interface::action::MoveStraight_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = straight_line_interface::action::MoveStraight_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveStraight MoveStraight;

}  // namespace action

}  // namespace straight_line_interface

#endif  // STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__STRUCT_HPP_
