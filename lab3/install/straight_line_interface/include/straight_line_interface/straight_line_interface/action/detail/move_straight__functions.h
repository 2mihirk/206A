// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from straight_line_interface:action/MoveStraight.idl
// generated code does not contain a copyright notice

#ifndef STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__FUNCTIONS_H_
#define STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "straight_line_interface/msg/rosidl_generator_c__visibility_control.h"

#include "straight_line_interface/action/detail/move_straight__struct.h"

/// Initialize action/MoveStraight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * straight_line_interface__action__MoveStraight_Goal
 * )) before or use
 * straight_line_interface__action__MoveStraight_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Goal__init(straight_line_interface__action__MoveStraight_Goal * msg);

/// Finalize action/MoveStraight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Goal__fini(straight_line_interface__action__MoveStraight_Goal * msg);

/// Create action/MoveStraight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * straight_line_interface__action__MoveStraight_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_Goal *
straight_line_interface__action__MoveStraight_Goal__create();

/// Destroy action/MoveStraight message.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Goal__destroy(straight_line_interface__action__MoveStraight_Goal * msg);

/// Check for action/MoveStraight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Goal__are_equal(const straight_line_interface__action__MoveStraight_Goal * lhs, const straight_line_interface__action__MoveStraight_Goal * rhs);

/// Copy a action/MoveStraight message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Goal__copy(
  const straight_line_interface__action__MoveStraight_Goal * input,
  straight_line_interface__action__MoveStraight_Goal * output);

/// Initialize array of action/MoveStraight messages.
/**
 * It allocates the memory for the number of elements and calls
 * straight_line_interface__action__MoveStraight_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Goal__Sequence__init(straight_line_interface__action__MoveStraight_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Goal__Sequence__fini(straight_line_interface__action__MoveStraight_Goal__Sequence * array);

/// Create array of action/MoveStraight messages.
/**
 * It allocates the memory for the array and calls
 * straight_line_interface__action__MoveStraight_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_Goal__Sequence *
straight_line_interface__action__MoveStraight_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Goal__Sequence__destroy(straight_line_interface__action__MoveStraight_Goal__Sequence * array);

/// Check for action/MoveStraight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Goal__Sequence__are_equal(const straight_line_interface__action__MoveStraight_Goal__Sequence * lhs, const straight_line_interface__action__MoveStraight_Goal__Sequence * rhs);

/// Copy an array of action/MoveStraight messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Goal__Sequence__copy(
  const straight_line_interface__action__MoveStraight_Goal__Sequence * input,
  straight_line_interface__action__MoveStraight_Goal__Sequence * output);

/// Initialize action/MoveStraight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * straight_line_interface__action__MoveStraight_Result
 * )) before or use
 * straight_line_interface__action__MoveStraight_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Result__init(straight_line_interface__action__MoveStraight_Result * msg);

/// Finalize action/MoveStraight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Result__fini(straight_line_interface__action__MoveStraight_Result * msg);

/// Create action/MoveStraight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * straight_line_interface__action__MoveStraight_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_Result *
straight_line_interface__action__MoveStraight_Result__create();

/// Destroy action/MoveStraight message.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Result__destroy(straight_line_interface__action__MoveStraight_Result * msg);

/// Check for action/MoveStraight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Result__are_equal(const straight_line_interface__action__MoveStraight_Result * lhs, const straight_line_interface__action__MoveStraight_Result * rhs);

/// Copy a action/MoveStraight message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Result__copy(
  const straight_line_interface__action__MoveStraight_Result * input,
  straight_line_interface__action__MoveStraight_Result * output);

/// Initialize array of action/MoveStraight messages.
/**
 * It allocates the memory for the number of elements and calls
 * straight_line_interface__action__MoveStraight_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Result__Sequence__init(straight_line_interface__action__MoveStraight_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Result__Sequence__fini(straight_line_interface__action__MoveStraight_Result__Sequence * array);

/// Create array of action/MoveStraight messages.
/**
 * It allocates the memory for the array and calls
 * straight_line_interface__action__MoveStraight_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_Result__Sequence *
straight_line_interface__action__MoveStraight_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Result__Sequence__destroy(straight_line_interface__action__MoveStraight_Result__Sequence * array);

/// Check for action/MoveStraight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Result__Sequence__are_equal(const straight_line_interface__action__MoveStraight_Result__Sequence * lhs, const straight_line_interface__action__MoveStraight_Result__Sequence * rhs);

/// Copy an array of action/MoveStraight messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Result__Sequence__copy(
  const straight_line_interface__action__MoveStraight_Result__Sequence * input,
  straight_line_interface__action__MoveStraight_Result__Sequence * output);

/// Initialize action/MoveStraight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * straight_line_interface__action__MoveStraight_Feedback
 * )) before or use
 * straight_line_interface__action__MoveStraight_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Feedback__init(straight_line_interface__action__MoveStraight_Feedback * msg);

/// Finalize action/MoveStraight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Feedback__fini(straight_line_interface__action__MoveStraight_Feedback * msg);

/// Create action/MoveStraight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * straight_line_interface__action__MoveStraight_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_Feedback *
straight_line_interface__action__MoveStraight_Feedback__create();

/// Destroy action/MoveStraight message.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Feedback__destroy(straight_line_interface__action__MoveStraight_Feedback * msg);

/// Check for action/MoveStraight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Feedback__are_equal(const straight_line_interface__action__MoveStraight_Feedback * lhs, const straight_line_interface__action__MoveStraight_Feedback * rhs);

/// Copy a action/MoveStraight message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Feedback__copy(
  const straight_line_interface__action__MoveStraight_Feedback * input,
  straight_line_interface__action__MoveStraight_Feedback * output);

/// Initialize array of action/MoveStraight messages.
/**
 * It allocates the memory for the number of elements and calls
 * straight_line_interface__action__MoveStraight_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Feedback__Sequence__init(straight_line_interface__action__MoveStraight_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Feedback__Sequence__fini(straight_line_interface__action__MoveStraight_Feedback__Sequence * array);

/// Create array of action/MoveStraight messages.
/**
 * It allocates the memory for the array and calls
 * straight_line_interface__action__MoveStraight_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_Feedback__Sequence *
straight_line_interface__action__MoveStraight_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_Feedback__Sequence__destroy(straight_line_interface__action__MoveStraight_Feedback__Sequence * array);

/// Check for action/MoveStraight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Feedback__Sequence__are_equal(const straight_line_interface__action__MoveStraight_Feedback__Sequence * lhs, const straight_line_interface__action__MoveStraight_Feedback__Sequence * rhs);

/// Copy an array of action/MoveStraight messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_Feedback__Sequence__copy(
  const straight_line_interface__action__MoveStraight_Feedback__Sequence * input,
  straight_line_interface__action__MoveStraight_Feedback__Sequence * output);

/// Initialize action/MoveStraight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * straight_line_interface__action__MoveStraight_SendGoal_Request
 * )) before or use
 * straight_line_interface__action__MoveStraight_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Request__init(straight_line_interface__action__MoveStraight_SendGoal_Request * msg);

/// Finalize action/MoveStraight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_SendGoal_Request__fini(straight_line_interface__action__MoveStraight_SendGoal_Request * msg);

/// Create action/MoveStraight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * straight_line_interface__action__MoveStraight_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_SendGoal_Request *
straight_line_interface__action__MoveStraight_SendGoal_Request__create();

/// Destroy action/MoveStraight message.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_SendGoal_Request__destroy(straight_line_interface__action__MoveStraight_SendGoal_Request * msg);

/// Check for action/MoveStraight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Request__are_equal(const straight_line_interface__action__MoveStraight_SendGoal_Request * lhs, const straight_line_interface__action__MoveStraight_SendGoal_Request * rhs);

/// Copy a action/MoveStraight message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Request__copy(
  const straight_line_interface__action__MoveStraight_SendGoal_Request * input,
  straight_line_interface__action__MoveStraight_SendGoal_Request * output);

/// Initialize array of action/MoveStraight messages.
/**
 * It allocates the memory for the number of elements and calls
 * straight_line_interface__action__MoveStraight_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence__init(straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence__fini(straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence * array);

/// Create array of action/MoveStraight messages.
/**
 * It allocates the memory for the array and calls
 * straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence *
straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence__destroy(straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence * array);

/// Check for action/MoveStraight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence__are_equal(const straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence * lhs, const straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveStraight messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence__copy(
  const straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence * input,
  straight_line_interface__action__MoveStraight_SendGoal_Request__Sequence * output);

/// Initialize action/MoveStraight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * straight_line_interface__action__MoveStraight_SendGoal_Response
 * )) before or use
 * straight_line_interface__action__MoveStraight_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Response__init(straight_line_interface__action__MoveStraight_SendGoal_Response * msg);

/// Finalize action/MoveStraight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_SendGoal_Response__fini(straight_line_interface__action__MoveStraight_SendGoal_Response * msg);

/// Create action/MoveStraight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * straight_line_interface__action__MoveStraight_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_SendGoal_Response *
straight_line_interface__action__MoveStraight_SendGoal_Response__create();

/// Destroy action/MoveStraight message.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_SendGoal_Response__destroy(straight_line_interface__action__MoveStraight_SendGoal_Response * msg);

/// Check for action/MoveStraight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Response__are_equal(const straight_line_interface__action__MoveStraight_SendGoal_Response * lhs, const straight_line_interface__action__MoveStraight_SendGoal_Response * rhs);

/// Copy a action/MoveStraight message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Response__copy(
  const straight_line_interface__action__MoveStraight_SendGoal_Response * input,
  straight_line_interface__action__MoveStraight_SendGoal_Response * output);

/// Initialize array of action/MoveStraight messages.
/**
 * It allocates the memory for the number of elements and calls
 * straight_line_interface__action__MoveStraight_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence__init(straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence__fini(straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence * array);

/// Create array of action/MoveStraight messages.
/**
 * It allocates the memory for the array and calls
 * straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence *
straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence__destroy(straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence * array);

/// Check for action/MoveStraight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence__are_equal(const straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence * lhs, const straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveStraight messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence__copy(
  const straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence * input,
  straight_line_interface__action__MoveStraight_SendGoal_Response__Sequence * output);

/// Initialize action/MoveStraight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * straight_line_interface__action__MoveStraight_GetResult_Request
 * )) before or use
 * straight_line_interface__action__MoveStraight_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Request__init(straight_line_interface__action__MoveStraight_GetResult_Request * msg);

/// Finalize action/MoveStraight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_GetResult_Request__fini(straight_line_interface__action__MoveStraight_GetResult_Request * msg);

/// Create action/MoveStraight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * straight_line_interface__action__MoveStraight_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_GetResult_Request *
straight_line_interface__action__MoveStraight_GetResult_Request__create();

/// Destroy action/MoveStraight message.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_GetResult_Request__destroy(straight_line_interface__action__MoveStraight_GetResult_Request * msg);

/// Check for action/MoveStraight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Request__are_equal(const straight_line_interface__action__MoveStraight_GetResult_Request * lhs, const straight_line_interface__action__MoveStraight_GetResult_Request * rhs);

/// Copy a action/MoveStraight message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Request__copy(
  const straight_line_interface__action__MoveStraight_GetResult_Request * input,
  straight_line_interface__action__MoveStraight_GetResult_Request * output);

/// Initialize array of action/MoveStraight messages.
/**
 * It allocates the memory for the number of elements and calls
 * straight_line_interface__action__MoveStraight_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Request__Sequence__init(straight_line_interface__action__MoveStraight_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_GetResult_Request__Sequence__fini(straight_line_interface__action__MoveStraight_GetResult_Request__Sequence * array);

/// Create array of action/MoveStraight messages.
/**
 * It allocates the memory for the array and calls
 * straight_line_interface__action__MoveStraight_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_GetResult_Request__Sequence *
straight_line_interface__action__MoveStraight_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_GetResult_Request__Sequence__destroy(straight_line_interface__action__MoveStraight_GetResult_Request__Sequence * array);

/// Check for action/MoveStraight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Request__Sequence__are_equal(const straight_line_interface__action__MoveStraight_GetResult_Request__Sequence * lhs, const straight_line_interface__action__MoveStraight_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveStraight messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Request__Sequence__copy(
  const straight_line_interface__action__MoveStraight_GetResult_Request__Sequence * input,
  straight_line_interface__action__MoveStraight_GetResult_Request__Sequence * output);

/// Initialize action/MoveStraight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * straight_line_interface__action__MoveStraight_GetResult_Response
 * )) before or use
 * straight_line_interface__action__MoveStraight_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Response__init(straight_line_interface__action__MoveStraight_GetResult_Response * msg);

/// Finalize action/MoveStraight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_GetResult_Response__fini(straight_line_interface__action__MoveStraight_GetResult_Response * msg);

/// Create action/MoveStraight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * straight_line_interface__action__MoveStraight_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_GetResult_Response *
straight_line_interface__action__MoveStraight_GetResult_Response__create();

/// Destroy action/MoveStraight message.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_GetResult_Response__destroy(straight_line_interface__action__MoveStraight_GetResult_Response * msg);

/// Check for action/MoveStraight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Response__are_equal(const straight_line_interface__action__MoveStraight_GetResult_Response * lhs, const straight_line_interface__action__MoveStraight_GetResult_Response * rhs);

/// Copy a action/MoveStraight message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Response__copy(
  const straight_line_interface__action__MoveStraight_GetResult_Response * input,
  straight_line_interface__action__MoveStraight_GetResult_Response * output);

/// Initialize array of action/MoveStraight messages.
/**
 * It allocates the memory for the number of elements and calls
 * straight_line_interface__action__MoveStraight_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Response__Sequence__init(straight_line_interface__action__MoveStraight_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_GetResult_Response__Sequence__fini(straight_line_interface__action__MoveStraight_GetResult_Response__Sequence * array);

/// Create array of action/MoveStraight messages.
/**
 * It allocates the memory for the array and calls
 * straight_line_interface__action__MoveStraight_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_GetResult_Response__Sequence *
straight_line_interface__action__MoveStraight_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_GetResult_Response__Sequence__destroy(straight_line_interface__action__MoveStraight_GetResult_Response__Sequence * array);

/// Check for action/MoveStraight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Response__Sequence__are_equal(const straight_line_interface__action__MoveStraight_GetResult_Response__Sequence * lhs, const straight_line_interface__action__MoveStraight_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveStraight messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_GetResult_Response__Sequence__copy(
  const straight_line_interface__action__MoveStraight_GetResult_Response__Sequence * input,
  straight_line_interface__action__MoveStraight_GetResult_Response__Sequence * output);

/// Initialize action/MoveStraight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * straight_line_interface__action__MoveStraight_FeedbackMessage
 * )) before or use
 * straight_line_interface__action__MoveStraight_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_FeedbackMessage__init(straight_line_interface__action__MoveStraight_FeedbackMessage * msg);

/// Finalize action/MoveStraight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_FeedbackMessage__fini(straight_line_interface__action__MoveStraight_FeedbackMessage * msg);

/// Create action/MoveStraight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * straight_line_interface__action__MoveStraight_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_FeedbackMessage *
straight_line_interface__action__MoveStraight_FeedbackMessage__create();

/// Destroy action/MoveStraight message.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_FeedbackMessage__destroy(straight_line_interface__action__MoveStraight_FeedbackMessage * msg);

/// Check for action/MoveStraight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_FeedbackMessage__are_equal(const straight_line_interface__action__MoveStraight_FeedbackMessage * lhs, const straight_line_interface__action__MoveStraight_FeedbackMessage * rhs);

/// Copy a action/MoveStraight message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_FeedbackMessage__copy(
  const straight_line_interface__action__MoveStraight_FeedbackMessage * input,
  straight_line_interface__action__MoveStraight_FeedbackMessage * output);

/// Initialize array of action/MoveStraight messages.
/**
 * It allocates the memory for the number of elements and calls
 * straight_line_interface__action__MoveStraight_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence__init(straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence__fini(straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence * array);

/// Create array of action/MoveStraight messages.
/**
 * It allocates the memory for the array and calls
 * straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence *
straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveStraight messages.
/**
 * It calls
 * straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
void
straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence__destroy(straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence * array);

/// Check for action/MoveStraight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence__are_equal(const straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence * lhs, const straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveStraight messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_straight_line_interface
bool
straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence__copy(
  const straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence * input,
  straight_line_interface__action__MoveStraight_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STRAIGHT_LINE_INTERFACE__ACTION__DETAIL__MOVE_STRAIGHT__FUNCTIONS_H_
