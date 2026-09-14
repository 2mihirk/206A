// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from straight_line_interface:action/MoveStraight.idl
// generated code does not contain a copyright notice

#ifndef STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__BUILDER_HPP_
#define STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "straight_line_interface/action/detail/move_straight__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace straight_line_interface
{

namespace action
{

namespace builder
{

class Init_MoveStraight_Goal_max_step
{
public:
  explicit Init_MoveStraight_Goal_max_step(::straight_line_interface::action::MoveStraight_Goal & msg)
  : msg_(msg)
  {}
  ::straight_line_interface::action::MoveStraight_Goal max_step(::straight_line_interface::action::MoveStraight_Goal::_max_step_type arg)
  {
    msg_.max_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_Goal msg_;
};

class Init_MoveStraight_Goal_target
{
public:
  Init_MoveStraight_Goal_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveStraight_Goal_max_step target(::straight_line_interface::action::MoveStraight_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_MoveStraight_Goal_max_step(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::straight_line_interface::action::MoveStraight_Goal>()
{
  return straight_line_interface::action::builder::Init_MoveStraight_Goal_target();
}

}  // namespace straight_line_interface


namespace straight_line_interface
{

namespace action
{

namespace builder
{

class Init_MoveStraight_Result_message
{
public:
  explicit Init_MoveStraight_Result_message(::straight_line_interface::action::MoveStraight_Result & msg)
  : msg_(msg)
  {}
  ::straight_line_interface::action::MoveStraight_Result message(::straight_line_interface::action::MoveStraight_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_Result msg_;
};

class Init_MoveStraight_Result_dist_to_go
{
public:
  explicit Init_MoveStraight_Result_dist_to_go(::straight_line_interface::action::MoveStraight_Result & msg)
  : msg_(msg)
  {}
  Init_MoveStraight_Result_message dist_to_go(::straight_line_interface::action::MoveStraight_Result::_dist_to_go_type arg)
  {
    msg_.dist_to_go = std::move(arg);
    return Init_MoveStraight_Result_message(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_Result msg_;
};

class Init_MoveStraight_Result_planned_fraction
{
public:
  explicit Init_MoveStraight_Result_planned_fraction(::straight_line_interface::action::MoveStraight_Result & msg)
  : msg_(msg)
  {}
  Init_MoveStraight_Result_dist_to_go planned_fraction(::straight_line_interface::action::MoveStraight_Result::_planned_fraction_type arg)
  {
    msg_.planned_fraction = std::move(arg);
    return Init_MoveStraight_Result_dist_to_go(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_Result msg_;
};

class Init_MoveStraight_Result_success
{
public:
  Init_MoveStraight_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveStraight_Result_planned_fraction success(::straight_line_interface::action::MoveStraight_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveStraight_Result_planned_fraction(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::straight_line_interface::action::MoveStraight_Result>()
{
  return straight_line_interface::action::builder::Init_MoveStraight_Result_success();
}

}  // namespace straight_line_interface


namespace straight_line_interface
{

namespace action
{

namespace builder
{

class Init_MoveStraight_Feedback_state
{
public:
  explicit Init_MoveStraight_Feedback_state(::straight_line_interface::action::MoveStraight_Feedback & msg)
  : msg_(msg)
  {}
  ::straight_line_interface::action::MoveStraight_Feedback state(::straight_line_interface::action::MoveStraight_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_Feedback msg_;
};

class Init_MoveStraight_Feedback_planned_fraction
{
public:
  Init_MoveStraight_Feedback_planned_fraction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveStraight_Feedback_state planned_fraction(::straight_line_interface::action::MoveStraight_Feedback::_planned_fraction_type arg)
  {
    msg_.planned_fraction = std::move(arg);
    return Init_MoveStraight_Feedback_state(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::straight_line_interface::action::MoveStraight_Feedback>()
{
  return straight_line_interface::action::builder::Init_MoveStraight_Feedback_planned_fraction();
}

}  // namespace straight_line_interface


namespace straight_line_interface
{

namespace action
{

namespace builder
{

class Init_MoveStraight_SendGoal_Request_goal
{
public:
  explicit Init_MoveStraight_SendGoal_Request_goal(::straight_line_interface::action::MoveStraight_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::straight_line_interface::action::MoveStraight_SendGoal_Request goal(::straight_line_interface::action::MoveStraight_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_SendGoal_Request msg_;
};

class Init_MoveStraight_SendGoal_Request_goal_id
{
public:
  Init_MoveStraight_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveStraight_SendGoal_Request_goal goal_id(::straight_line_interface::action::MoveStraight_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveStraight_SendGoal_Request_goal(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::straight_line_interface::action::MoveStraight_SendGoal_Request>()
{
  return straight_line_interface::action::builder::Init_MoveStraight_SendGoal_Request_goal_id();
}

}  // namespace straight_line_interface


namespace straight_line_interface
{

namespace action
{

namespace builder
{

class Init_MoveStraight_SendGoal_Response_stamp
{
public:
  explicit Init_MoveStraight_SendGoal_Response_stamp(::straight_line_interface::action::MoveStraight_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::straight_line_interface::action::MoveStraight_SendGoal_Response stamp(::straight_line_interface::action::MoveStraight_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_SendGoal_Response msg_;
};

class Init_MoveStraight_SendGoal_Response_accepted
{
public:
  Init_MoveStraight_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveStraight_SendGoal_Response_stamp accepted(::straight_line_interface::action::MoveStraight_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveStraight_SendGoal_Response_stamp(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::straight_line_interface::action::MoveStraight_SendGoal_Response>()
{
  return straight_line_interface::action::builder::Init_MoveStraight_SendGoal_Response_accepted();
}

}  // namespace straight_line_interface


namespace straight_line_interface
{

namespace action
{

namespace builder
{

class Init_MoveStraight_GetResult_Request_goal_id
{
public:
  Init_MoveStraight_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::straight_line_interface::action::MoveStraight_GetResult_Request goal_id(::straight_line_interface::action::MoveStraight_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::straight_line_interface::action::MoveStraight_GetResult_Request>()
{
  return straight_line_interface::action::builder::Init_MoveStraight_GetResult_Request_goal_id();
}

}  // namespace straight_line_interface


namespace straight_line_interface
{

namespace action
{

namespace builder
{

class Init_MoveStraight_GetResult_Response_result
{
public:
  explicit Init_MoveStraight_GetResult_Response_result(::straight_line_interface::action::MoveStraight_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::straight_line_interface::action::MoveStraight_GetResult_Response result(::straight_line_interface::action::MoveStraight_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_GetResult_Response msg_;
};

class Init_MoveStraight_GetResult_Response_status
{
public:
  Init_MoveStraight_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveStraight_GetResult_Response_result status(::straight_line_interface::action::MoveStraight_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveStraight_GetResult_Response_result(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::straight_line_interface::action::MoveStraight_GetResult_Response>()
{
  return straight_line_interface::action::builder::Init_MoveStraight_GetResult_Response_status();
}

}  // namespace straight_line_interface


namespace straight_line_interface
{

namespace action
{

namespace builder
{

class Init_MoveStraight_FeedbackMessage_feedback
{
public:
  explicit Init_MoveStraight_FeedbackMessage_feedback(::straight_line_interface::action::MoveStraight_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::straight_line_interface::action::MoveStraight_FeedbackMessage feedback(::straight_line_interface::action::MoveStraight_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_FeedbackMessage msg_;
};

class Init_MoveStraight_FeedbackMessage_goal_id
{
public:
  Init_MoveStraight_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveStraight_FeedbackMessage_feedback goal_id(::straight_line_interface::action::MoveStraight_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveStraight_FeedbackMessage_feedback(msg_);
  }

private:
  ::straight_line_interface::action::MoveStraight_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::straight_line_interface::action::MoveStraight_FeedbackMessage>()
{
  return straight_line_interface::action::builder::Init_MoveStraight_FeedbackMessage_goal_id();
}

}  // namespace straight_line_interface

#endif  // STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__BUILDER_HPP_
