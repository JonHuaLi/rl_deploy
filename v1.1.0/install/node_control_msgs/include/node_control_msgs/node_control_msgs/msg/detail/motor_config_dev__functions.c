// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_control_msgs:msg/MotorConfigDev.idl
// generated code does not contain a copyright notice
#include "node_control_msgs/msg/detail/motor_config_dev__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_control_msgs__msg__MotorConfigDev__init(node_control_msgs__msg__MotorConfigDev * msg)
{
  if (!msg) {
    return false;
  }
  // parameter_id
  // parameter_value
  return true;
}

void
node_control_msgs__msg__MotorConfigDev__fini(node_control_msgs__msg__MotorConfigDev * msg)
{
  if (!msg) {
    return;
  }
  // parameter_id
  // parameter_value
}

bool
node_control_msgs__msg__MotorConfigDev__are_equal(const node_control_msgs__msg__MotorConfigDev * lhs, const node_control_msgs__msg__MotorConfigDev * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parameter_id
  if (lhs->parameter_id != rhs->parameter_id) {
    return false;
  }
  // parameter_value
  if (lhs->parameter_value != rhs->parameter_value) {
    return false;
  }
  return true;
}

bool
node_control_msgs__msg__MotorConfigDev__copy(
  const node_control_msgs__msg__MotorConfigDev * input,
  node_control_msgs__msg__MotorConfigDev * output)
{
  if (!input || !output) {
    return false;
  }
  // parameter_id
  output->parameter_id = input->parameter_id;
  // parameter_value
  output->parameter_value = input->parameter_value;
  return true;
}

node_control_msgs__msg__MotorConfigDev *
node_control_msgs__msg__MotorConfigDev__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorConfigDev * msg = (node_control_msgs__msg__MotorConfigDev *)allocator.allocate(sizeof(node_control_msgs__msg__MotorConfigDev), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_control_msgs__msg__MotorConfigDev));
  bool success = node_control_msgs__msg__MotorConfigDev__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_control_msgs__msg__MotorConfigDev__destroy(node_control_msgs__msg__MotorConfigDev * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_control_msgs__msg__MotorConfigDev__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_control_msgs__msg__MotorConfigDev__Sequence__init(node_control_msgs__msg__MotorConfigDev__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorConfigDev * data = NULL;

  if (size) {
    data = (node_control_msgs__msg__MotorConfigDev *)allocator.zero_allocate(size, sizeof(node_control_msgs__msg__MotorConfigDev), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_control_msgs__msg__MotorConfigDev__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_control_msgs__msg__MotorConfigDev__fini(&data[i - 1]);
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
node_control_msgs__msg__MotorConfigDev__Sequence__fini(node_control_msgs__msg__MotorConfigDev__Sequence * array)
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
      node_control_msgs__msg__MotorConfigDev__fini(&array->data[i]);
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

node_control_msgs__msg__MotorConfigDev__Sequence *
node_control_msgs__msg__MotorConfigDev__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorConfigDev__Sequence * array = (node_control_msgs__msg__MotorConfigDev__Sequence *)allocator.allocate(sizeof(node_control_msgs__msg__MotorConfigDev__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_control_msgs__msg__MotorConfigDev__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_control_msgs__msg__MotorConfigDev__Sequence__destroy(node_control_msgs__msg__MotorConfigDev__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_control_msgs__msg__MotorConfigDev__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_control_msgs__msg__MotorConfigDev__Sequence__are_equal(const node_control_msgs__msg__MotorConfigDev__Sequence * lhs, const node_control_msgs__msg__MotorConfigDev__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_control_msgs__msg__MotorConfigDev__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_control_msgs__msg__MotorConfigDev__Sequence__copy(
  const node_control_msgs__msg__MotorConfigDev__Sequence * input,
  node_control_msgs__msg__MotorConfigDev__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_control_msgs__msg__MotorConfigDev);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_control_msgs__msg__MotorConfigDev * data =
      (node_control_msgs__msg__MotorConfigDev *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_control_msgs__msg__MotorConfigDev__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_control_msgs__msg__MotorConfigDev__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_control_msgs__msg__MotorConfigDev__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
