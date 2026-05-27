// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:msg/MotorCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND_FEEDBACK__STRUCT_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND_FEEDBACK__STRUCT_H_

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
// Member 'feedback'
#include "node_control_msgs/msg/detail/motor_feedback__struct.h"

/// Struct defined in msg/MotorCommandFeedback in the package node_control_msgs.
typedef struct node_control_msgs__msg__MotorCommandFeedback
{
  std_msgs__msg__Header header;
  uint32_t seq;
  node_control_msgs__msg__MotorFeedback__Sequence feedback;
} node_control_msgs__msg__MotorCommandFeedback;

// Struct for a sequence of node_control_msgs__msg__MotorCommandFeedback.
typedef struct node_control_msgs__msg__MotorCommandFeedback__Sequence
{
  node_control_msgs__msg__MotorCommandFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__msg__MotorCommandFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND_FEEDBACK__STRUCT_H_
