// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:msg/MotorInfoValue.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__STRUCT_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorInfoValue in the package node_control_msgs.
typedef struct node_control_msgs__msg__MotorInfoValue
{
  /// 开机时间
  uint64_t startup_time_ms;
  /// CANFD板软件版本
  uint8_t sw_version[3];
  /// CANFD板硬件版本
  uint8_t hw_version[3];
  /// 关节软件版本
  uint8_t joint_version[3];
  /// CANFD板状态
  uint16_t state;
  /// 关节批次号
  uint64_t serial_num;
} node_control_msgs__msg__MotorInfoValue;

// Struct for a sequence of node_control_msgs__msg__MotorInfoValue.
typedef struct node_control_msgs__msg__MotorInfoValue__Sequence
{
  node_control_msgs__msg__MotorInfoValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__msg__MotorInfoValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__STRUCT_H_
