// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:msg/MotorHealth.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__STRUCT_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'state'
// Member 'state_all'
#include "node_control_msgs/msg/detail/motor_health_state__struct.h"

/// Struct defined in msg/MotorHealth in the package node_control_msgs.
typedef struct node_control_msgs__msg__MotorHealth
{
  std_msgs__msg__Header header;
  /// 各个关节电机状态
  node_control_msgs__msg__MotorHealthState__Sequence state;
  /// 所有关节电机状态
  node_control_msgs__msg__MotorHealthState state_all;
} node_control_msgs__msg__MotorHealth;

// Struct for a sequence of node_control_msgs__msg__MotorHealth.
typedef struct node_control_msgs__msg__MotorHealth__Sequence
{
  node_control_msgs__msg__MotorHealth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__msg__MotorHealth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__STRUCT_H_
