// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from straight_line_interface:action/MoveStraight.idl
// generated code does not contain a copyright notice

#ifndef STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__STRUCT_H_
#define STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/MoveStraight in the package straight_line_interface.
typedef struct straight_line_interface__action__MoveStraight_Goal
{
  geometry_msgs__msg__Pose target;
  double max_step;
} straight_line_interface__action__MoveStraight_Goal;

// Struct for a sequence of straight_line_interface__action__MoveStraight_Goal.
typedef struct straight_line_interface__action__MoveStraight_Goal__Sequence
{
  straight_line_interface__action__MoveStraight_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} straight_line_interface__action__MoveStraight_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveStraight in the package straight_line_interface.
typedef struct straight_line_interface__action__MoveStraight_Result
{
  bool success;
  double planned_fraction;
  double dist_to_go;
  rosidl_runtime_c__String message;
} straight_line_interface__action__MoveStraight_Result;

// Struct for a sequence of straight_line_interface__action__MoveStraight_Result.
typedef struct straight_line_interface__action__MoveStraight_Result__Sequence
{
  straight_line_interface__action__MoveStraight_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} straight_line_interface__action__MoveStraight_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveStraight in the package straight_line_interface.
typedef struct straight_line_interface__action__MoveStraight_Feedback
{
  double planned_fraction;
  rosidl_runtime_c__String state;
} straight_line_interface__action__MoveStraight_Feedback;

// Struct for a sequence of straight_line_interface__action__MoveStraight_Feedback.
typedef struct straight_line_interface__action__MoveStraight_Feedback__Sequence
{
  straight_line_interface__action__MoveStraight_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} straight_line_interface__action__MoveStraight_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "straight_line_interface/action/detail/move_straight__struct.h"

/// Struct defined in action/MoveStraight in the package straight_line_interface.
typedef struct straight_line_interface__action__MoveStraight_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  straight_line_interface__action__MoveStraight_Goal goal;
} straight_line_interface__action__MoveStraight_SendGoal_Request;

// Struct for a sequence of straight_line_interface__action__MoveStraight_SendGoal_Request.
typedef struct straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence
{
  straight_line_interface__action__MoveStraight_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveStraight in the package straight_line_interface.
typedef struct straight_line_interface__action__MoveStraight_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} straight_line_interface__action__MoveStraight_SendGoal_Response;

// Struct for a sequence of straight_line_interface__action__MoveStraight_SendGoal_Response.
typedef struct straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence
{
  straight_line_interface__action__MoveStraight_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveStraight in the package straight_line_interface.
typedef struct straight_line_interface__action__MoveStraight_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} straight_line_interface__action__MoveStraight_GetResult_Request;

// Struct for a sequence of straight_line_interface__action__MoveStraight_GetResult_Request.
typedef struct straight_line_interface__action__MoveStraight_GetResult_Request__Sequence
{
  straight_line_interface__action__MoveStraight_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} straight_line_interface__action__MoveStraight_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "straight_line_interface/action/detail/move_straight__struct.h"

/// Struct defined in action/MoveStraight in the package straight_line_interface.
typedef struct straight_line_interface__action__MoveStraight_GetResult_Response
{
  int8_t status;
  straight_line_interface__action__MoveStraight_Result result;
} straight_line_interface__action__MoveStraight_GetResult_Response;

// Struct for a sequence of straight_line_interface__action__MoveStraight_GetResult_Response.
typedef struct straight_line_interface__action__MoveStraight_GetResult_Response__Sequence
{
  straight_line_interface__action__MoveStraight_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} straight_line_interface__action__MoveStraight_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "straight_line_interface/action/detail/move_straight__struct.h"

/// Struct defined in action/MoveStraight in the package straight_line_interface.
typedef struct straight_line_interface__action__MoveStraight_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  straight_line_interface__action__MoveStraight_Feedback feedback;
} straight_line_interface__action__MoveStraight_FeedbackMessage;

// Struct for a sequence of straight_line_interface__action__MoveStraight_FeedbackMessage.
typedef struct straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence
{
  straight_line_interface__action__MoveStraight_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__STRUCT_H_
