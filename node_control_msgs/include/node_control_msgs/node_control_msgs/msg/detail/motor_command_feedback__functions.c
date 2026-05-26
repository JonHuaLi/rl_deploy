// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_control_msgs:msg/MotorCommandFeedback.idl
// generated code does not contain a copyright notice
#include "node_control_msgs/msg/detail/motor_command_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `feedback`
#include "node_control_msgs/msg/detail/motor_feedback__functions.h"

bool
node_control_msgs__msg__MotorCommandFeedback__init(node_control_msgs__msg__MotorCommandFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    node_control_msgs__msg__MotorCommandFeedback__fini(msg);
    return false;
  }
  // seq
  // feedback
  if (!node_control_msgs__msg__MotorFeedback__Sequence__init(&msg->feedback, 0)) {
    node_control_msgs__msg__MotorCommandFeedback__fini(msg);
    return false;
  }
  return true;
}

void
node_control_msgs__msg__MotorCommandFeedback__fini(node_control_msgs__msg__MotorCommandFeedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // seq
  // feedback
  node_control_msgs__msg__MotorFeedback__Sequence__fini(&msg->feedback);
}

bool
node_control_msgs__msg__MotorCommandFeedback__are_equal(const node_control_msgs__msg__MotorCommandFeedback * lhs, const node_control_msgs__msg__MotorCommandFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // seq
  if (lhs->seq != rhs->seq) {
    return false;
  }
  // feedback
  if (!node_control_msgs__msg__MotorFeedback__Sequence__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
node_control_msgs__msg__MotorCommandFeedback__copy(
  const node_control_msgs__msg__MotorCommandFeedback * input,
  node_control_msgs__msg__MotorCommandFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // seq
  output->seq = input->seq;
  // feedback
  if (!node_control_msgs__msg__MotorFeedback__Sequence__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

node_control_msgs__msg__MotorCommandFeedback *
node_control_msgs__msg__MotorCommandFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorCommandFeedback * msg = (node_control_msgs__msg__MotorCommandFeedback *)allocator.allocate(sizeof(node_control_msgs__msg__MotorCommandFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_control_msgs__msg__MotorCommandFeedback));
  bool success = node_control_msgs__msg__MotorCommandFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_control_msgs__msg__MotorCommandFeedback__destroy(node_control_msgs__msg__MotorCommandFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_control_msgs__msg__MotorCommandFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_control_msgs__msg__MotorCommandFeedback__Sequence__init(node_control_msgs__msg__MotorCommandFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorCommandFeedback * data = NULL;

  if (size) {
    data = (node_control_msgs__msg__MotorCommandFeedback *)allocator.zero_allocate(size, sizeof(node_control_msgs__msg__MotorCommandFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_control_msgs__msg__MotorCommandFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_control_msgs__msg__MotorCommandFeedback__fini(&data[i - 1]);
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
node_control_msgs__msg__MotorCommandFeedback__Sequence__fini(node_control_msgs__msg__MotorCommandFeedback__Sequence * array)
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
      node_control_msgs__msg__MotorCommandFeedback__fini(&array->data[i]);
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

node_control_msgs__msg__MotorCommandFeedback__Sequence *
node_control_msgs__msg__MotorCommandFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorCommandFeedback__Sequence * array = (node_control_msgs__msg__MotorCommandFeedback__Sequence *)allocator.allocate(sizeof(node_control_msgs__msg__MotorCommandFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_control_msgs__msg__MotorCommandFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_control_msgs__msg__MotorCommandFeedback__Sequence__destroy(node_control_msgs__msg__MotorCommandFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_control_msgs__msg__MotorCommandFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_control_msgs__msg__MotorCommandFeedback__Sequence__are_equal(const node_control_msgs__msg__MotorCommandFeedback__Sequence * lhs, const node_control_msgs__msg__MotorCommandFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_control_msgs__msg__MotorCommandFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_control_msgs__msg__MotorCommandFeedback__Sequence__copy(
  const node_control_msgs__msg__MotorCommandFeedback__Sequence * input,
  node_control_msgs__msg__MotorCommandFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_control_msgs__msg__MotorCommandFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_control_msgs__msg__MotorCommandFeedback * data =
      (node_control_msgs__msg__MotorCommandFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_control_msgs__msg__MotorCommandFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_control_msgs__msg__MotorCommandFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_control_msgs__msg__MotorCommandFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
