// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_driver_msgs:msg/Sensormsgcontrol.idl
// generated code does not contain a copyright notice
#include "node_driver_msgs/msg/detail/sensormsgcontrol__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
node_driver_msgs__msg__Sensormsgcontrol__init(node_driver_msgs__msg__Sensormsgcontrol * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    node_driver_msgs__msg__Sensormsgcontrol__fini(msg);
    return false;
  }
  // sensor_type
  // control_command
  return true;
}

void
node_driver_msgs__msg__Sensormsgcontrol__fini(node_driver_msgs__msg__Sensormsgcontrol * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_type
  // control_command
}

bool
node_driver_msgs__msg__Sensormsgcontrol__are_equal(const node_driver_msgs__msg__Sensormsgcontrol * lhs, const node_driver_msgs__msg__Sensormsgcontrol * rhs)
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
  // sensor_type
  if (lhs->sensor_type != rhs->sensor_type) {
    return false;
  }
  // control_command
  if (lhs->control_command != rhs->control_command) {
    return false;
  }
  return true;
}

bool
node_driver_msgs__msg__Sensormsgcontrol__copy(
  const node_driver_msgs__msg__Sensormsgcontrol * input,
  node_driver_msgs__msg__Sensormsgcontrol * output)
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
  // sensor_type
  output->sensor_type = input->sensor_type;
  // control_command
  output->control_command = input->control_command;
  return true;
}

node_driver_msgs__msg__Sensormsgcontrol *
node_driver_msgs__msg__Sensormsgcontrol__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_driver_msgs__msg__Sensormsgcontrol * msg = (node_driver_msgs__msg__Sensormsgcontrol *)allocator.allocate(sizeof(node_driver_msgs__msg__Sensormsgcontrol), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_driver_msgs__msg__Sensormsgcontrol));
  bool success = node_driver_msgs__msg__Sensormsgcontrol__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_driver_msgs__msg__Sensormsgcontrol__destroy(node_driver_msgs__msg__Sensormsgcontrol * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_driver_msgs__msg__Sensormsgcontrol__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_driver_msgs__msg__Sensormsgcontrol__Sequence__init(node_driver_msgs__msg__Sensormsgcontrol__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_driver_msgs__msg__Sensormsgcontrol * data = NULL;

  if (size) {
    data = (node_driver_msgs__msg__Sensormsgcontrol *)allocator.zero_allocate(size, sizeof(node_driver_msgs__msg__Sensormsgcontrol), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_driver_msgs__msg__Sensormsgcontrol__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_driver_msgs__msg__Sensormsgcontrol__fini(&data[i - 1]);
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
node_driver_msgs__msg__Sensormsgcontrol__Sequence__fini(node_driver_msgs__msg__Sensormsgcontrol__Sequence * array)
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
      node_driver_msgs__msg__Sensormsgcontrol__fini(&array->data[i]);
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

node_driver_msgs__msg__Sensormsgcontrol__Sequence *
node_driver_msgs__msg__Sensormsgcontrol__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_driver_msgs__msg__Sensormsgcontrol__Sequence * array = (node_driver_msgs__msg__Sensormsgcontrol__Sequence *)allocator.allocate(sizeof(node_driver_msgs__msg__Sensormsgcontrol__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_driver_msgs__msg__Sensormsgcontrol__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_driver_msgs__msg__Sensormsgcontrol__Sequence__destroy(node_driver_msgs__msg__Sensormsgcontrol__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_driver_msgs__msg__Sensormsgcontrol__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_driver_msgs__msg__Sensormsgcontrol__Sequence__are_equal(const node_driver_msgs__msg__Sensormsgcontrol__Sequence * lhs, const node_driver_msgs__msg__Sensormsgcontrol__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_driver_msgs__msg__Sensormsgcontrol__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_driver_msgs__msg__Sensormsgcontrol__Sequence__copy(
  const node_driver_msgs__msg__Sensormsgcontrol__Sequence * input,
  node_driver_msgs__msg__Sensormsgcontrol__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_driver_msgs__msg__Sensormsgcontrol);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_driver_msgs__msg__Sensormsgcontrol * data =
      (node_driver_msgs__msg__Sensormsgcontrol *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_driver_msgs__msg__Sensormsgcontrol__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_driver_msgs__msg__Sensormsgcontrol__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_driver_msgs__msg__Sensormsgcontrol__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
