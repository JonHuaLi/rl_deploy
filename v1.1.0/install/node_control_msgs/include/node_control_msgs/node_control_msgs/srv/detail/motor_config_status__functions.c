// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_control_msgs:srv/MotorConfigStatus.idl
// generated code does not contain a copyright notice
#include "node_control_msgs/srv/detail/motor_config_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
node_control_msgs__srv__MotorConfigStatus_Request__init(node_control_msgs__srv__MotorConfigStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  return true;
}

void
node_control_msgs__srv__MotorConfigStatus_Request__fini(node_control_msgs__srv__MotorConfigStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
}

bool
node_control_msgs__srv__MotorConfigStatus_Request__are_equal(const node_control_msgs__srv__MotorConfigStatus_Request * lhs, const node_control_msgs__srv__MotorConfigStatus_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  return true;
}

bool
node_control_msgs__srv__MotorConfigStatus_Request__copy(
  const node_control_msgs__srv__MotorConfigStatus_Request * input,
  node_control_msgs__srv__MotorConfigStatus_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  return true;
}

node_control_msgs__srv__MotorConfigStatus_Request *
node_control_msgs__srv__MotorConfigStatus_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__srv__MotorConfigStatus_Request * msg = (node_control_msgs__srv__MotorConfigStatus_Request *)allocator.allocate(sizeof(node_control_msgs__srv__MotorConfigStatus_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_control_msgs__srv__MotorConfigStatus_Request));
  bool success = node_control_msgs__srv__MotorConfigStatus_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_control_msgs__srv__MotorConfigStatus_Request__destroy(node_control_msgs__srv__MotorConfigStatus_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_control_msgs__srv__MotorConfigStatus_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_control_msgs__srv__MotorConfigStatus_Request__Sequence__init(node_control_msgs__srv__MotorConfigStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__srv__MotorConfigStatus_Request * data = NULL;

  if (size) {
    data = (node_control_msgs__srv__MotorConfigStatus_Request *)allocator.zero_allocate(size, sizeof(node_control_msgs__srv__MotorConfigStatus_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_control_msgs__srv__MotorConfigStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_control_msgs__srv__MotorConfigStatus_Request__fini(&data[i - 1]);
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
node_control_msgs__srv__MotorConfigStatus_Request__Sequence__fini(node_control_msgs__srv__MotorConfigStatus_Request__Sequence * array)
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
      node_control_msgs__srv__MotorConfigStatus_Request__fini(&array->data[i]);
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

node_control_msgs__srv__MotorConfigStatus_Request__Sequence *
node_control_msgs__srv__MotorConfigStatus_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__srv__MotorConfigStatus_Request__Sequence * array = (node_control_msgs__srv__MotorConfigStatus_Request__Sequence *)allocator.allocate(sizeof(node_control_msgs__srv__MotorConfigStatus_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_control_msgs__srv__MotorConfigStatus_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_control_msgs__srv__MotorConfigStatus_Request__Sequence__destroy(node_control_msgs__srv__MotorConfigStatus_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_control_msgs__srv__MotorConfigStatus_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_control_msgs__srv__MotorConfigStatus_Request__Sequence__are_equal(const node_control_msgs__srv__MotorConfigStatus_Request__Sequence * lhs, const node_control_msgs__srv__MotorConfigStatus_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_control_msgs__srv__MotorConfigStatus_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_control_msgs__srv__MotorConfigStatus_Request__Sequence__copy(
  const node_control_msgs__srv__MotorConfigStatus_Request__Sequence * input,
  node_control_msgs__srv__MotorConfigStatus_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_control_msgs__srv__MotorConfigStatus_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_control_msgs__srv__MotorConfigStatus_Request * data =
      (node_control_msgs__srv__MotorConfigStatus_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_control_msgs__srv__MotorConfigStatus_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_control_msgs__srv__MotorConfigStatus_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_control_msgs__srv__MotorConfigStatus_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `config`
#include "node_control_msgs/msg/detail/motor_config_dev__functions.h"

bool
node_control_msgs__srv__MotorConfigStatus_Response__init(node_control_msgs__srv__MotorConfigStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // config
  if (!node_control_msgs__msg__MotorConfigDev__Sequence__init(&msg->config, 0)) {
    node_control_msgs__srv__MotorConfigStatus_Response__fini(msg);
    return false;
  }
  return true;
}

void
node_control_msgs__srv__MotorConfigStatus_Response__fini(node_control_msgs__srv__MotorConfigStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // config
  node_control_msgs__msg__MotorConfigDev__Sequence__fini(&msg->config);
}

bool
node_control_msgs__srv__MotorConfigStatus_Response__are_equal(const node_control_msgs__srv__MotorConfigStatus_Response * lhs, const node_control_msgs__srv__MotorConfigStatus_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // config
  if (!node_control_msgs__msg__MotorConfigDev__Sequence__are_equal(
      &(lhs->config), &(rhs->config)))
  {
    return false;
  }
  return true;
}

bool
node_control_msgs__srv__MotorConfigStatus_Response__copy(
  const node_control_msgs__srv__MotorConfigStatus_Response * input,
  node_control_msgs__srv__MotorConfigStatus_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // config
  if (!node_control_msgs__msg__MotorConfigDev__Sequence__copy(
      &(input->config), &(output->config)))
  {
    return false;
  }
  return true;
}

node_control_msgs__srv__MotorConfigStatus_Response *
node_control_msgs__srv__MotorConfigStatus_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__srv__MotorConfigStatus_Response * msg = (node_control_msgs__srv__MotorConfigStatus_Response *)allocator.allocate(sizeof(node_control_msgs__srv__MotorConfigStatus_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_control_msgs__srv__MotorConfigStatus_Response));
  bool success = node_control_msgs__srv__MotorConfigStatus_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_control_msgs__srv__MotorConfigStatus_Response__destroy(node_control_msgs__srv__MotorConfigStatus_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_control_msgs__srv__MotorConfigStatus_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_control_msgs__srv__MotorConfigStatus_Response__Sequence__init(node_control_msgs__srv__MotorConfigStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__srv__MotorConfigStatus_Response * data = NULL;

  if (size) {
    data = (node_control_msgs__srv__MotorConfigStatus_Response *)allocator.zero_allocate(size, sizeof(node_control_msgs__srv__MotorConfigStatus_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_control_msgs__srv__MotorConfigStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_control_msgs__srv__MotorConfigStatus_Response__fini(&data[i - 1]);
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
node_control_msgs__srv__MotorConfigStatus_Response__Sequence__fini(node_control_msgs__srv__MotorConfigStatus_Response__Sequence * array)
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
      node_control_msgs__srv__MotorConfigStatus_Response__fini(&array->data[i]);
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

node_control_msgs__srv__MotorConfigStatus_Response__Sequence *
node_control_msgs__srv__MotorConfigStatus_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__srv__MotorConfigStatus_Response__Sequence * array = (node_control_msgs__srv__MotorConfigStatus_Response__Sequence *)allocator.allocate(sizeof(node_control_msgs__srv__MotorConfigStatus_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_control_msgs__srv__MotorConfigStatus_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_control_msgs__srv__MotorConfigStatus_Response__Sequence__destroy(node_control_msgs__srv__MotorConfigStatus_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_control_msgs__srv__MotorConfigStatus_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_control_msgs__srv__MotorConfigStatus_Response__Sequence__are_equal(const node_control_msgs__srv__MotorConfigStatus_Response__Sequence * lhs, const node_control_msgs__srv__MotorConfigStatus_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_control_msgs__srv__MotorConfigStatus_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_control_msgs__srv__MotorConfigStatus_Response__Sequence__copy(
  const node_control_msgs__srv__MotorConfigStatus_Response__Sequence * input,
  node_control_msgs__srv__MotorConfigStatus_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_control_msgs__srv__MotorConfigStatus_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_control_msgs__srv__MotorConfigStatus_Response * data =
      (node_control_msgs__srv__MotorConfigStatus_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_control_msgs__srv__MotorConfigStatus_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_control_msgs__srv__MotorConfigStatus_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_control_msgs__srv__MotorConfigStatus_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
