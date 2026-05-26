// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_control_msgs:msg/MotorHealthState.idl
// generated code does not contain a copyright notice
#include "node_control_msgs/msg/detail/motor_health_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_control_msgs__msg__MotorHealthState__init(node_control_msgs__msg__MotorHealthState * msg)
{
  if (!msg) {
    return false;
  }
  // health
  // motor_direction
  // motor_temperature
  // mos_temperature
  // bus_voltage
  // u1_online
  // position_zero
  return true;
}

void
node_control_msgs__msg__MotorHealthState__fini(node_control_msgs__msg__MotorHealthState * msg)
{
  if (!msg) {
    return;
  }
  // health
  // motor_direction
  // motor_temperature
  // mos_temperature
  // bus_voltage
  // u1_online
  // position_zero
}

bool
node_control_msgs__msg__MotorHealthState__are_equal(const node_control_msgs__msg__MotorHealthState * lhs, const node_control_msgs__msg__MotorHealthState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // health
  if (lhs->health != rhs->health) {
    return false;
  }
  // motor_direction
  if (lhs->motor_direction != rhs->motor_direction) {
    return false;
  }
  // motor_temperature
  if (lhs->motor_temperature != rhs->motor_temperature) {
    return false;
  }
  // mos_temperature
  if (lhs->mos_temperature != rhs->mos_temperature) {
    return false;
  }
  // bus_voltage
  if (lhs->bus_voltage != rhs->bus_voltage) {
    return false;
  }
  // u1_online
  if (lhs->u1_online != rhs->u1_online) {
    return false;
  }
  // position_zero
  if (lhs->position_zero != rhs->position_zero) {
    return false;
  }
  return true;
}

bool
node_control_msgs__msg__MotorHealthState__copy(
  const node_control_msgs__msg__MotorHealthState * input,
  node_control_msgs__msg__MotorHealthState * output)
{
  if (!input || !output) {
    return false;
  }
  // health
  output->health = input->health;
  // motor_direction
  output->motor_direction = input->motor_direction;
  // motor_temperature
  output->motor_temperature = input->motor_temperature;
  // mos_temperature
  output->mos_temperature = input->mos_temperature;
  // bus_voltage
  output->bus_voltage = input->bus_voltage;
  // u1_online
  output->u1_online = input->u1_online;
  // position_zero
  output->position_zero = input->position_zero;
  return true;
}

node_control_msgs__msg__MotorHealthState *
node_control_msgs__msg__MotorHealthState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorHealthState * msg = (node_control_msgs__msg__MotorHealthState *)allocator.allocate(sizeof(node_control_msgs__msg__MotorHealthState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_control_msgs__msg__MotorHealthState));
  bool success = node_control_msgs__msg__MotorHealthState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_control_msgs__msg__MotorHealthState__destroy(node_control_msgs__msg__MotorHealthState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_control_msgs__msg__MotorHealthState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_control_msgs__msg__MotorHealthState__Sequence__init(node_control_msgs__msg__MotorHealthState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorHealthState * data = NULL;

  if (size) {
    data = (node_control_msgs__msg__MotorHealthState *)allocator.zero_allocate(size, sizeof(node_control_msgs__msg__MotorHealthState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_control_msgs__msg__MotorHealthState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_control_msgs__msg__MotorHealthState__fini(&data[i - 1]);
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
node_control_msgs__msg__MotorHealthState__Sequence__fini(node_control_msgs__msg__MotorHealthState__Sequence * array)
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
      node_control_msgs__msg__MotorHealthState__fini(&array->data[i]);
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

node_control_msgs__msg__MotorHealthState__Sequence *
node_control_msgs__msg__MotorHealthState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_control_msgs__msg__MotorHealthState__Sequence * array = (node_control_msgs__msg__MotorHealthState__Sequence *)allocator.allocate(sizeof(node_control_msgs__msg__MotorHealthState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_control_msgs__msg__MotorHealthState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_control_msgs__msg__MotorHealthState__Sequence__destroy(node_control_msgs__msg__MotorHealthState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_control_msgs__msg__MotorHealthState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_control_msgs__msg__MotorHealthState__Sequence__are_equal(const node_control_msgs__msg__MotorHealthState__Sequence * lhs, const node_control_msgs__msg__MotorHealthState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_control_msgs__msg__MotorHealthState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_control_msgs__msg__MotorHealthState__Sequence__copy(
  const node_control_msgs__msg__MotorHealthState__Sequence * input,
  node_control_msgs__msg__MotorHealthState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_control_msgs__msg__MotorHealthState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_control_msgs__msg__MotorHealthState * data =
      (node_control_msgs__msg__MotorHealthState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_control_msgs__msg__MotorHealthState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_control_msgs__msg__MotorHealthState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_control_msgs__msg__MotorHealthState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
