// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_driver_msgs:msg/Sensormsgstate.idl
// generated code does not contain a copyright notice
#include "node_driver_msgs/msg/detail/sensormsgstate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"

bool
node_driver_msgs__msg__Sensormsgstate__init(node_driver_msgs__msg__Sensormsgstate * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    node_driver_msgs__msg__Sensormsgstate__fini(msg);
    return false;
  }
  // sensor_type
  // sensor_state
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    node_driver_msgs__msg__Sensormsgstate__fini(msg);
    return false;
  }
  return true;
}

void
node_driver_msgs__msg__Sensormsgstate__fini(node_driver_msgs__msg__Sensormsgstate * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_type
  // sensor_state
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
}

bool
node_driver_msgs__msg__Sensormsgstate__are_equal(const node_driver_msgs__msg__Sensormsgstate * lhs, const node_driver_msgs__msg__Sensormsgstate * rhs)
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
  // sensor_state
  if (lhs->sensor_state != rhs->sensor_state) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  return true;
}

bool
node_driver_msgs__msg__Sensormsgstate__copy(
  const node_driver_msgs__msg__Sensormsgstate * input,
  node_driver_msgs__msg__Sensormsgstate * output)
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
  // sensor_state
  output->sensor_state = input->sensor_state;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  return true;
}

node_driver_msgs__msg__Sensormsgstate *
node_driver_msgs__msg__Sensormsgstate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_driver_msgs__msg__Sensormsgstate * msg = (node_driver_msgs__msg__Sensormsgstate *)allocator.allocate(sizeof(node_driver_msgs__msg__Sensormsgstate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_driver_msgs__msg__Sensormsgstate));
  bool success = node_driver_msgs__msg__Sensormsgstate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_driver_msgs__msg__Sensormsgstate__destroy(node_driver_msgs__msg__Sensormsgstate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_driver_msgs__msg__Sensormsgstate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_driver_msgs__msg__Sensormsgstate__Sequence__init(node_driver_msgs__msg__Sensormsgstate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_driver_msgs__msg__Sensormsgstate * data = NULL;

  if (size) {
    data = (node_driver_msgs__msg__Sensormsgstate *)allocator.zero_allocate(size, sizeof(node_driver_msgs__msg__Sensormsgstate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_driver_msgs__msg__Sensormsgstate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_driver_msgs__msg__Sensormsgstate__fini(&data[i - 1]);
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
node_driver_msgs__msg__Sensormsgstate__Sequence__fini(node_driver_msgs__msg__Sensormsgstate__Sequence * array)
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
      node_driver_msgs__msg__Sensormsgstate__fini(&array->data[i]);
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

node_driver_msgs__msg__Sensormsgstate__Sequence *
node_driver_msgs__msg__Sensormsgstate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_driver_msgs__msg__Sensormsgstate__Sequence * array = (node_driver_msgs__msg__Sensormsgstate__Sequence *)allocator.allocate(sizeof(node_driver_msgs__msg__Sensormsgstate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_driver_msgs__msg__Sensormsgstate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_driver_msgs__msg__Sensormsgstate__Sequence__destroy(node_driver_msgs__msg__Sensormsgstate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_driver_msgs__msg__Sensormsgstate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_driver_msgs__msg__Sensormsgstate__Sequence__are_equal(const node_driver_msgs__msg__Sensormsgstate__Sequence * lhs, const node_driver_msgs__msg__Sensormsgstate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_driver_msgs__msg__Sensormsgstate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_driver_msgs__msg__Sensormsgstate__Sequence__copy(
  const node_driver_msgs__msg__Sensormsgstate__Sequence * input,
  node_driver_msgs__msg__Sensormsgstate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_driver_msgs__msg__Sensormsgstate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_driver_msgs__msg__Sensormsgstate * data =
      (node_driver_msgs__msg__Sensormsgstate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_driver_msgs__msg__Sensormsgstate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_driver_msgs__msg__Sensormsgstate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_driver_msgs__msg__Sensormsgstate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
