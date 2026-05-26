// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorCommand in the package node_control_msgs.
typedef struct node_control_msgs__msg__MotorCommand
{
  /// 比例系数
  uint16_t kp;
  /// 微分系数
  uint16_t kd;
  /// rad
  float position_des;
  /// rad/s
  float omega_des;
  /// Nm
  int16_t torque_des;
  uint16_t reserved;
} node_control_msgs__msg__MotorCommand;

// Struct for a sequence of node_control_msgs__msg__MotorCommand.
typedef struct node_control_msgs__msg__MotorCommand__Sequence
{
  node_control_msgs__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
