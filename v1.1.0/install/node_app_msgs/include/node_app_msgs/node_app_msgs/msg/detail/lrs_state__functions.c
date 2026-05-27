// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_app_msgs:msg/LrsState.idl
// generated code does not contain a copyright notice
#include "node_app_msgs/msg/detail/lrs_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `current_state`
// Member `current_mode`
// Member `current_action`
// Member `running_status`
// Member `motor_health`
#include "rosidl_runtime_c/string_functions.h"
// Member `motor_health_states`
#include "node_control_msgs/msg/detail/motor_health_state__functions.h"

bool
node_app_msgs__msg__LrsState__init(node_app_msgs__msg__LrsState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    node_app_msgs__msg__LrsState__fini(msg);
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__init(&msg->current_state)) {
    node_app_msgs__msg__LrsState__fini(msg);
    return false;
  }
  // current_mode
  if (!rosidl_runtime_c__String__init(&msg->current_mode)) {
    node_app_msgs__msg__LrsState__fini(msg);
    return false;
  }
  // current_action
  if (!rosidl_runtime_c__String__init(&msg->current_action)) {
    node_app_msgs__msg__LrsState__fini(msg);
    return false;
  }
  // running_status
  if (!rosidl_runtime_c__String__init(&msg->running_status)) {
    node_app_msgs__msg__LrsState__fini(msg);
    return false;
  }
  // motor_health
  if (!rosidl_runtime_c__String__init(&msg->motor_health)) {
    node_app_msgs__msg__LrsState__fini(msg);
    return false;
  }
  // motor_health_states
  if (!node_control_msgs__msg__MotorHealthState__Sequence__init(&msg->motor_health_states, 0)) {
    node_app_msgs__msg__LrsState__fini(msg);
    return false;
  }
  return true;
}

void
node_app_msgs__msg__LrsState__fini(node_app_msgs__msg__LrsState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // current_state
  rosidl_runtime_c__String__fini(&msg->current_state);
  // current_mode
  rosidl_runtime_c__String__fini(&msg->current_mode);
  // current_action
  rosidl_runtime_c__String__fini(&msg->current_action);
  // running_status
  rosidl_runtime_c__String__fini(&msg->running_status);
  // motor_health
  rosidl_runtime_c__String__fini(&msg->motor_health);
  // motor_health_states
  node_control_msgs__msg__MotorHealthState__Sequence__fini(&msg->motor_health_states);
}

bool
node_app_msgs__msg__LrsState__are_equal(const node_app_msgs__msg__LrsState * lhs, const node_app_msgs__msg__LrsState * rhs)
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
  // current_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_state), &(rhs->current_state)))
  {
    return false;
  }
  // current_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_mode), &(rhs->current_mode)))
  {
    return false;
  }
  // current_action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_action), &(rhs->current_action)))
  {
    return false;
  }
  // running_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->running_status), &(rhs->running_status)))
  {
    return false;
  }
  // motor_health
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motor_health), &(rhs->motor_health)))
  {
    return false;
  }
  // motor_health_states
  if (!node_control_msgs__msg__MotorHealthState__Sequence__are_equal(
      &(lhs->motor_health_states), &(rhs->motor_health_states)))
  {
    return false;
  }
  return true;
}

bool
node_app_msgs__msg__LrsState__copy(
  const node_app_msgs__msg__LrsState * input,
  node_app_msgs__msg__LrsState * output)
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
  // current_state
  if (!rosidl_runtime_c__String__copy(
      &(input->current_state), &(output->current_state)))
  {
    return false;
  }
  // current_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->current_mode), &(output->current_mode)))
  {
    return false;
  }
  // current_action
  if (!rosidl_runtime_c__String__copy(
      &(input->current_action), &(output->current_action)))
  {
    return false;
  }
  // running_status
  if (!rosidl_runtime_c__String__copy(
      &(input->running_status), &(output->running_status)))
  {
    return false;
  }
  // motor_health
  if (!rosidl_runtime_c__String__copy(
      &(input->motor_health), &(output->motor_health)))
  {
    return false;
  }
  // motor_health_states
  if (!node_control_msgs__msg__MotorHealthState__Sequence__copy(
      &(input->motor_health_states), &(output->motor_health_states)))
  {
    return false;
  }
  return true;
}

node_app_msgs__msg__LrsState *
node_app_msgs__msg__LrsState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_app_msgs__msg__LrsState * msg = (node_app_msgs__msg__LrsState *)allocator.allocate(sizeof(node_app_msgs__msg__LrsState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_app_msgs__msg__LrsState));
  bool success = node_app_msgs__msg__LrsState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_app_msgs__msg__LrsState__destroy(node_app_msgs__msg__LrsState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_app_msgs__msg__LrsState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_app_msgs__msg__LrsState__Sequence__init(node_app_msgs__msg__LrsState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_app_msgs__msg__LrsState * data = NULL;

  if (size) {
    data = (node_app_msgs__msg__LrsState *)allocator.zero_allocate(size, sizeof(node_app_msgs__msg__LrsState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_app_msgs__msg__LrsState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_app_msgs__msg__LrsState__fini(&data[i - 1]);
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
node_app_msgs__msg__LrsState__Sequence__fini(node_app_msgs__msg__LrsState__Sequence * array)
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
      node_app_msgs__msg__LrsState__fini(&array->data[i]);
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

node_app_msgs__msg__LrsState__Sequence *
node_app_msgs__msg__LrsState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_app_msgs__msg__LrsState__Sequence * array = (node_app_msgs__msg__LrsState__Sequence *)allocator.allocate(sizeof(node_app_msgs__msg__LrsState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_app_msgs__msg__LrsState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_app_msgs__msg__LrsState__Sequence__destroy(node_app_msgs__msg__LrsState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_app_msgs__msg__LrsState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_app_msgs__msg__LrsState__Sequence__are_equal(const node_app_msgs__msg__LrsState__Sequence * lhs, const node_app_msgs__msg__LrsState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_app_msgs__msg__LrsState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_app_msgs__msg__LrsState__Sequence__copy(
  const node_app_msgs__msg__LrsState__Sequence * input,
  node_app_msgs__msg__LrsState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_app_msgs__msg__LrsState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_app_msgs__msg__LrsState * data =
      (node_app_msgs__msg__LrsState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_app_msgs__msg__LrsState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_app_msgs__msg__LrsState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_app_msgs__msg__LrsState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
