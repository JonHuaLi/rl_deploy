// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:msg/MotorConfigDev.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__STRUCT_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PARAMETER_ID_MOTOR_DIRECTION'.
enum
{
  node_control_msgs__msg__MotorConfigDev__PARAMETER_ID_MOTOR_DIRECTION = 0ul
};

/// Constant 'PARAMETER_ID_MOTOR_STATUS'.
enum
{
  node_control_msgs__msg__MotorConfigDev__PARAMETER_ID_MOTOR_STATUS = 1ul
};

/// Constant 'PARAMETER_ID_ZERO_POSITION'.
enum
{
  node_control_msgs__msg__MotorConfigDev__PARAMETER_ID_ZERO_POSITION = 2ul
};

/// Constant 'PARAMETER_ID_CLEAR_ERROR'.
enum
{
  node_control_msgs__msg__MotorConfigDev__PARAMETER_ID_CLEAR_ERROR = 3ul
};

/// Struct defined in msg/MotorConfigDev in the package node_control_msgs.
typedef struct node_control_msgs__msg__MotorConfigDev
{
  uint32_t parameter_id;
  float parameter_value;
} node_control_msgs__msg__MotorConfigDev;

// Struct for a sequence of node_control_msgs__msg__MotorConfigDev.
typedef struct node_control_msgs__msg__MotorConfigDev__Sequence
{
  node_control_msgs__msg__MotorConfigDev * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__msg__MotorConfigDev__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__STRUCT_H_
