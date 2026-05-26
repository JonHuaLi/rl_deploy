// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_control_msgs:msg/MotorInfoValue.idl
// generated code does not contain a copyright notice
#include "node_control_msgs/msg/detail/motor_info_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_control_msgs__msg__MotorInfoValue__init(node_control_msgs__msg__MotorInfoValue * msg)
{
  if (!msg) {
    return false;
  }
  // startup_time_ms
  // sw_version
  // hw_version
  // joint_version
  // state
  // serial_num
  return true;
}

void
node_control_msgs__msg__MotorInfoValue__fini(node_control_msgs__msg__MotorInfoValue * msg)
{
  if (!msg) {
    return;
  }
  // startup_time_ms
  // sw_version
  // hw_version
  // joint_version
  // state
  // serial_num
}

bool
node_control_msgs__msg__MotorInfoValue__are_equal(const node_control_msgs__msg__MotorInfoValue * lhs, const node_control_msgs__msg__MotorInfoValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // startup_time_ms
  if (lhs->startup_time_ms != rhs->startup_time_ms) {
    return false;
  }
  // sw_version
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->sw_version[i] != rhs->sw_version[i]) {
      return false;
    }
  }
  // hw_version
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->hw_version[i] != rhs->hw_version[i]) {
      return false;
    }
  }
  // joint_version
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->joint_version[i] != rhs->joint_version[i]) {
      return false;
    }
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // serial_num
  if (lhs->serial_num != rhs->serial_num) {
    return false;
  }
  return true;
}

bool
node_control_msgs__msg__MotorInfoValue__copy(
  const node_control_msgs__msg__MotorInfoValue * input,
  node_control_msgs__msg__MotorInfoValue * output)
{
  if (!input || !output) {
    return false;
  }
  // startup_time_ms
  output->startup_time_ms = input->startup_time_ms;
  // sw_version
  for (size_t i = 0; i < 3; ++i) {
    output->sw_version[i] = input->sw_version[i];
  }
  // hw_version
  for (size_t i = 0; i < 3; ++i) {
    output->hw_version[i] = input->hw_version[i];
  }
  // joint_version
  for (size_t i = 0; i < 3; ++i) {
    output->joint_version[i] = input->joint_version[i];
  }
  // state
  output->state = input->state;
  // serial_num
  output->serial_num = input->serial_num;
  return true;
}

node_control_msgs__msg__MotorInfoValue *
node_control_msgs__msg__MotorInfoValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorInfoValue * msg = (node_control_msgs__msg__MotorInfoValue *)allocator.allocate(sizeof(node_control_msgs__msg__MotorInfoValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_control_msgs__msg__MotorInfoValue));
  bool success = node_control_msgs__msg__MotorInfoValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_control_msgs__msg__MotorInfoValue__destroy(node_control_msgs__msg__MotorInfoValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_control_msgs__msg__MotorInfoValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_control_msgs__msg__MotorInfoValue__Sequence__init(node_control_msgs__msg__MotorInfoValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorInfoValue * data = NULL;

  if (size) {
    data = (node_control_msgs__msg__MotorInfoValue *)allocator.zero_allocate(size, sizeof(node_control_msgs__msg__MotorInfoValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_control_msgs__msg__MotorInfoValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_control_msgs__msg__MotorInfoValue__fini(&data[i - 1]);
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
node_control_msgs__msg__MotorInfoValue__Sequence__fini(node_control_msgs__msg__MotorInfoValue__Sequence * array)
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
      node_control_msgs__msg__MotorInfoValue__fini(&array->data[i]);
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

node_control_msgs__msg__MotorInfoValue__Sequence *
node_control_msgs__msg__MotorInfoValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorInfoValue__Sequence * array = (node_control_msgs__msg__MotorInfoValue__Sequence *)allocator.allocate(sizeof(node_control_msgs__msg__MotorInfoValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_control_msgs__msg__MotorInfoValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_control_msgs__msg__MotorInfoValue__Sequence__destroy(node_control_msgs__msg__MotorInfoValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_control_msgs__msg__MotorInfoValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_control_msgs__msg__MotorInfoValue__Sequence__are_equal(const node_control_msgs__msg__MotorInfoValue__Sequence * lhs, const node_control_msgs__msg__MotorInfoValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_control_msgs__msg__MotorInfoValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_control_msgs__msg__MotorInfoValue__Sequence__copy(
  const node_control_msgs__msg__MotorInfoValue__Sequence * input,
  node_control_msgs__msg__MotorInfoValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_control_msgs__msg__MotorInfoValue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_control_msgs__msg__MotorInfoValue * data =
      (node_control_msgs__msg__MotorInfoValue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_control_msgs__msg__MotorInfoValue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_control_msgs__msg__MotorInfoValue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_control_msgs__msg__MotorInfoValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
