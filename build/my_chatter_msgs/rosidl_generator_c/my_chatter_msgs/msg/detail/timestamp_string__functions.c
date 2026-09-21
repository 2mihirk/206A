// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_chatter_msgs:msg/TimestampString.idl
// generated code does not contain a copyright notice
#include "my_chatter_msgs/msg/detail/timestamp_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `user_message`
#include "rosidl_runtime_c/string_functions.h"

bool
my_chatter_msgs__msg__TimestampString__init(my_chatter_msgs__msg__TimestampString * msg)
{
  if (!msg) {
    return false;
  }
  // user_message
  if (!rosidl_runtime_c__String__init(&msg->user_message)) {
    my_chatter_msgs__msg__TimestampString__fini(msg);
    return false;
  }
  // timestamp
  return true;
}

void
my_chatter_msgs__msg__TimestampString__fini(my_chatter_msgs__msg__TimestampString * msg)
{
  if (!msg) {
    return;
  }
  // user_message
  rosidl_runtime_c__String__fini(&msg->user_message);
  // timestamp
}

bool
my_chatter_msgs__msg__TimestampString__are_equal(const my_chatter_msgs__msg__TimestampString * lhs, const my_chatter_msgs__msg__TimestampString * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // user_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->user_message), &(rhs->user_message)))
  {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  return true;
}

bool
my_chatter_msgs__msg__TimestampString__copy(
  const my_chatter_msgs__msg__TimestampString * input,
  my_chatter_msgs__msg__TimestampString * output)
{
  if (!input || !output) {
    return false;
  }
  // user_message
  if (!rosidl_runtime_c__String__copy(
      &(input->user_message), &(output->user_message)))
  {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  return true;
}

my_chatter_msgs__msg__TimestampString *
my_chatter_msgs__msg__TimestampString__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_chatter_msgs__msg__TimestampString * msg = (my_chatter_msgs__msg__TimestampString *)allocator.allocate(sizeof(my_chatter_msgs__msg__TimestampString), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_chatter_msgs__msg__TimestampString));
  bool success = my_chatter_msgs__msg__TimestampString__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_chatter_msgs__msg__TimestampString__destroy(my_chatter_msgs__msg__TimestampString * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_chatter_msgs__msg__TimestampString__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_chatter_msgs__msg__TimestampString__Sequence__init(my_chatter_msgs__msg__TimestampString__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_chatter_msgs__msg__TimestampString * data = NULL;

  if (size) {
    data = (my_chatter_msgs__msg__TimestampString *)allocator.zero_allocate(size, sizeof(my_chatter_msgs__msg__TimestampString), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_chatter_msgs__msg__TimestampString__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_chatter_msgs__msg__TimestampString__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_chatter_msgs__msg__TimestampString__Sequence__fini(my_chatter_msgs__msg__TimestampString__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_chatter_msgs__msg__TimestampString__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_chatter_msgs__msg__TimestampString__Sequence *
my_chatter_msgs__msg__TimestampString__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_chatter_msgs__msg__TimestampString__Sequence * array = (my_chatter_msgs__msg__TimestampString__Sequence *)allocator.allocate(sizeof(my_chatter_msgs__msg__TimestampString__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_chatter_msgs__msg__TimestampString__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_chatter_msgs__msg__TimestampString__Sequence__destroy(my_chatter_msgs__msg__TimestampString__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_chatter_msgs__msg__TimestampString__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_chatter_msgs__msg__TimestampString__Sequence__are_equal(const my_chatter_msgs__msg__TimestampString__Sequence * lhs, const my_chatter_msgs__msg__TimestampString__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_chatter_msgs__msg__TimestampString__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_chatter_msgs__msg__TimestampString__Sequence__copy(
  const my_chatter_msgs__msg__TimestampString__Sequence * input,
  my_chatter_msgs__msg__TimestampString__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_chatter_msgs__msg__TimestampString);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_chatter_msgs__msg__TimestampString * data =
      (my_chatter_msgs__msg__TimestampString *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_chatter_msgs__msg__TimestampString__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_chatter_msgs__msg__TimestampString__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_chatter_msgs__msg__TimestampString__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
