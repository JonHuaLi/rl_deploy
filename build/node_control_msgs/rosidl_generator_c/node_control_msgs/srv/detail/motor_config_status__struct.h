// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:srv/MotorConfigStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__STRUCT_H_
#define NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MotorConfigStatus in the package node_control_msgs.
typedef struct node_control_msgs__srv__MotorConfigStatus_Request
{
  /// 0-25   ff 全配
  uint32_t motor_id;
} node_control_msgs__srv__MotorConfigStatus_Request;

// Struct for a sequence of node_control_msgs__srv__MotorConfigStatus_Request.
typedef struct node_control_msgs__srv__MotorConfigStatus_Request__Sequence
{
  node_control_msgs__srv__MotorConfigStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__srv__MotorConfigStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'config'
#include "node_control_msgs/msg/detail/motor_config_dev__struct.h"

/// Struct defined in srv/MotorConfigStatus in the package node_control_msgs.
typedef struct node_control_msgs__srv__MotorConfigStatus_Response
{
  node_control_msgs__msg__MotorConfigDev__Sequence config;
} node_control_msgs__srv__MotorConfigStatus_Response;

// Struct for a sequence of node_control_msgs__srv__MotorConfigStatus_Response.
typedef struct node_control_msgs__srv__MotorConfigStatus_Response__Sequence
{
  node_control_msgs__srv__MotorConfigStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__srv__MotorConfigStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__STRUCT_H_
