// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_control_msgs:msg/MotorFeedback.idl
// generated code does not contain a copyright notice
#include "node_control_msgs/msg/detail/motor_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_control_msgs__msg__MotorFeedback__init(node_control_msgs__msg__MotorFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // omega
  // torque
  // reserved
  return true;
}

void
node_control_msgs__msg__MotorFeedback__fini(node_control_msgs__msg__MotorFeedback * msg)
{
  if (!msg) {
    return;
  }
  // position
  // omega
  // torque
  // reserved
}

bool
node_control_msgs__msg__MotorFeedback__are_equal(const node_control_msgs__msg__MotorFeedback * lhs, const node_control_msgs__msg__MotorFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // omega
  if (lhs->omega != rhs->omega) {
    return false;
  }
  // torque
  if (lhs->torque != rhs->torque) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  return true;
}

bool
node_control_msgs__msg__MotorFeedback__copy(
  const node_control_msgs__msg__MotorFeedback * input,
  node_control_msgs__msg__MotorFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // omega
  output->omega = input->omega;
  // torque
  output->torque = input->torque;
  // reserved
  output->reserved = input->reserved;
  return true;
}

node_control_msgs__msg__MotorFeedback *
node_control_msgs__msg__MotorFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorFeedback * msg = (node_control_msgs__msg__MotorFeedback *)allocator.allocate(sizeof(node_control_msgs__msg__MotorFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_control_msgs__msg__MotorFeedback));
  bool success = node_control_msgs__msg__MotorFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_control_msgs__msg__MotorFeedback__destroy(node_control_msgs__msg__MotorFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_control_msgs__msg__MotorFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_control_msgs__msg__MotorFeedback__Sequence__init(node_control_msgs__msg__MotorFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorFeedback * data = NULL;

  if (size) {
    data = (node_control_msgs__msg__MotorFeedback *)allocator.zero_allocate(size, sizeof(node_control_msgs__msg__MotorFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_control_msgs__msg__MotorFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_control_msgs__msg__MotorFeedback__fini(&data[i - 1]);
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
node_control_msgs__msg__MotorFeedback__Sequence__fini(node_control_msgs__msg__MotorFeedback__Sequence * array)
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
      node_control_msgs__msg__MotorFeedback__fini(&array->data[i]);
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

node_control_msgs__msg__MotorFeedback__Sequence *
node_control_msgs__msg__MotorFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorFeedback__Sequence * array = (node_control_msgs__msg__MotorFeedback__Sequence *)allocator.allocate(sizeof(node_control_msgs__msg__MotorFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_control_msgs__msg__MotorFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_control_msgs__msg__MotorFeedback__Sequence__destroy(node_control_msgs__msg__MotorFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_control_msgs__msg__MotorFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_control_msgs__msg__MotorFeedback__Sequence__are_equal(const node_control_msgs__msg__MotorFeedback__Sequence * lhs, const node_control_msgs__msg__MotorFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_control_msgs__msg__MotorFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_control_msgs__msg__MotorFeedback__Sequence__copy(
  const node_control_msgs__msg__MotorFeedback__Sequence * input,
  node_control_msgs__msg__MotorFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_control_msgs__msg__MotorFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_control_msgs__msg__MotorFeedback * data =
      (node_control_msgs__msg__MotorFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_control_msgs__msg__MotorFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_control_msgs__msg__MotorFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_control_msgs__msg__MotorFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
