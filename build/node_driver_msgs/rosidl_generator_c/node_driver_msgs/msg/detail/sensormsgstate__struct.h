// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_driver_msgs:msg/Sensormsgstate.idl
// generated code does not contain a copyright notice

#ifndef NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGSTATE__STRUCT_H_
#define NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGSTATE__STRUCT_H_

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
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Sensormsgstate in the package node_driver_msgs.
typedef struct node_driver_msgs__msg__Sensormsgstate
{
  std_msgs__msg__Header header;
  /// 传感器类型，例如 0:IMU, 1:激光, 2:超声波等
  int8_t sensor_type;
  /// 传感器状态，例如 0:关闭, 1:开启,
  int8_t sensor_state;
  /// 错误信息，例如 "IMU 异常"
  rosidl_runtime_c__String error_message;
} node_driver_msgs__msg__Sensormsgstate;

// Struct for a sequence of node_driver_msgs__msg__Sensormsgstate.
typedef struct node_driver_msgs__msg__Sensormsgstate__Sequence
{
  node_driver_msgs__msg__Sensormsgstate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_driver_msgs__msg__Sensormsgstate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGSTATE__STRUCT_H_
