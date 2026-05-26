// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_app_msgs:msg/LrsCmdAction.idl
// generated code does not contain a copyright notice
#include "node_app_msgs/msg/detail/lrs_cmd_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `param`
#include "rosidl_runtime_c/string_functions.h"

bool
node_app_msgs__msg__LrsCmdAction__init(node_app_msgs__msg__LrsCmdAction * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    node_app_msgs__msg__LrsCmdAction__fini(msg);
    return false;
  }
  // action
  // param
  if (!rosidl_runtime_c__String__init(&msg->param)) {
    node_app_msgs__msg__LrsCmdAction__fini(msg);
    return false;
  }
  return true;
}

void
node_app_msgs__msg__LrsCmdAction__fini(node_app_msgs__msg__LrsCmdAction * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // action
  // param
  rosidl_runtime_c__String__fini(&msg->param);
}

bool
node_app_msgs__msg__LrsCmdAction__are_equal(const node_app_msgs__msg__LrsCmdAction * lhs, const node_app_msgs__msg__LrsCmdAction * rhs)
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
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // param
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->param), &(rhs->param)))
  {
    return false;
  }
  return true;
}

bool
node_app_msgs__msg__LrsCmdAction__copy(
  const node_app_msgs__msg__LrsCmdAction * input,
  node_app_msgs__msg__LrsCmdAction * output)
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
  // action
  output->action = input->action;
  // param
  if (!rosidl_runtime_c__String__copy(
      &(input->param), &(output->param)))
  {
    return false;
  }
  return true;
}

node_app_msgs__msg__LrsCmdAction *
node_app_msgs__msg__LrsCmdAction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_app_msgs__msg__LrsCmdAction * msg = (node_app_msgs__msg__LrsCmdAction *)allocator.allocate(sizeof(node_app_msgs__msg__LrsCmdAction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_app_msgs__msg__LrsCmdAction));
  bool success = node_app_msgs__msg__LrsCmdAction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_app_msgs__msg__LrsCmdAction__destroy(node_app_msgs__msg__LrsCmdAction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_app_msgs__msg__LrsCmdAction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_app_msgs__msg__LrsCmdAction__Sequence__init(node_app_msgs__msg__LrsCmdAction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_app_msgs__msg__LrsCmdAction * data = NULL;

  if (size) {
    data = (node_app_msgs__msg__LrsCmdAction *)allocator.zero_allocate(size, sizeof(node_app_msgs__msg__LrsCmdAction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_app_msgs__msg__LrsCmdAction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_app_msgs__msg__LrsCmdAction__fini(&data[i - 1]);
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
node_app_msgs__msg__LrsCmdAction__Sequence__fini(node_app_msgs__msg__LrsCmdAction__Sequence * array)
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
      node_app_msgs__msg__LrsCmdAction__fini(&array->data[i]);
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

node_app_msgs__msg__LrsCmdAction__Sequence *
node_app_msgs__msg__LrsCmdAction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_app_msgs__msg__LrsCmdAction__Sequence * array = (node_app_msgs__msg__LrsCmdAction__Sequence *)allocator.allocate(sizeof(node_app_msgs__msg__LrsCmdAction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_app_msgs__msg__LrsCmdAction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_app_msgs__msg__LrsCmdAction__Sequence__destroy(node_app_msgs__msg__LrsCmdAction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_app_msgs__msg__LrsCmdAction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_app_msgs__msg__LrsCmdAction__Sequence__are_equal(const node_app_msgs__msg__LrsCmdAction__Sequence * lhs, const node_app_msgs__msg__LrsCmdAction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_app_msgs__msg__LrsCmdAction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_app_msgs__msg__LrsCmdAction__Sequence__copy(
  const node_app_msgs__msg__LrsCmdAction__Sequence * input,
  node_app_msgs__msg__LrsCmdAction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_app_msgs__msg__LrsCmdAction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_app_msgs__msg__LrsCmdAction * data =
      (node_app_msgs__msg__LrsCmdAction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_app_msgs__msg__LrsCmdAction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_app_msgs__msg__LrsCmdAction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_app_msgs__msg__LrsCmdAction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
