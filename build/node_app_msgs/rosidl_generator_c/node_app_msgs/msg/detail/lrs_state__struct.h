// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_app_msgs:msg/LrsState.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__STRUCT_H_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__STRUCT_H_

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
// Member 'current_state'
// Member 'current_mode'
// Member 'current_action'
// Member 'running_status'
// Member 'motor_health'
#include "rosidl_runtime_c/string.h"
// Member 'motor_health_states'
#include "node_control_msgs/msg/detail/motor_health_state__struct.h"

/// Struct defined in msg/LrsState in the package node_app_msgs.
typedef struct node_app_msgs__msg__LrsState
{
  std_msgs__msg__Header header;
  /// 失能，待机，预备，运行,转换
  rosidl_runtime_c__String current_state;
  /// 无，舞蹈，其他
  rosidl_runtime_c__String current_mode;
  /// 电机恢复，升级，跳舞，其他
  rosidl_runtime_c__String current_action;
  /// 成功，失败，进行中，未开始
  rosidl_runtime_c__String running_status;
  /// 健康，警告，错误，致命错误
  rosidl_runtime_c__String motor_health;
  node_control_msgs__msg__MotorHealthState__Sequence motor_health_states;
} node_app_msgs__msg__LrsState;

// Struct for a sequence of node_app_msgs__msg__LrsState.
typedef struct node_app_msgs__msg__LrsState__Sequence
{
  node_app_msgs__msg__LrsState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_app_msgs__msg__LrsState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__STRUCT_H_
