// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:msg/MotorFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorFeedback in the package node_control_msgs.
typedef struct node_control_msgs__msg__MotorFeedback
{
  /// rad
  float position;
  /// rad/s
  float omega;
  /// Nm
  int16_t torque;
  uint16_t reserved;
} node_control_msgs__msg__MotorFeedback;

// Struct for a sequence of node_control_msgs__msg__MotorFeedback.
typedef struct node_control_msgs__msg__MotorFeedback__Sequence
{
  node_control_msgs__msg__MotorFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__msg__MotorFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_H_
