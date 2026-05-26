// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:msg/MotorInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO__STRUCT_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO__STRUCT_H_

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
// Member 'info'
#include "node_control_msgs/msg/detail/motor_info_value__struct.h"

/// Struct defined in msg/MotorInfo in the package node_control_msgs.
typedef struct node_control_msgs__msg__MotorInfo
{
  std_msgs__msg__Header header;
  /// 两个关节板的电机信息
  node_control_msgs__msg__MotorInfoValue__Sequence info;
} node_control_msgs__msg__MotorInfo;

// Struct for a sequence of node_control_msgs__msg__MotorInfo.
typedef struct node_control_msgs__msg__MotorInfo__Sequence
{
  node_control_msgs__msg__MotorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__msg__MotorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO__STRUCT_H_
