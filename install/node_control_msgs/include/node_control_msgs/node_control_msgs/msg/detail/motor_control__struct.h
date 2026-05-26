// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_

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
// Member 'cmd'
#include "node_control_msgs/msg/detail/motor_command__struct.h"

/// Struct defined in msg/MotorControl in the package node_control_msgs.
typedef struct node_control_msgs__msg__MotorControl
{
  std_msgs__msg__Header header;
  uint32_t seq_num;
  node_control_msgs__msg__MotorCommand__Sequence cmd;
} node_control_msgs__msg__MotorControl;

// Struct for a sequence of node_control_msgs__msg__MotorControl.
typedef struct node_control_msgs__msg__MotorControl__Sequence
{
  node_control_msgs__msg__MotorControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__msg__MotorControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_
