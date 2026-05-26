// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_app_msgs:msg/IotCmdMsg.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__STRUCT_H_
#define NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__STRUCT_H_

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
// Member 'category'
// Member 'fun_name'
// Member 'sub'
// Member 'param'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/IotCmdMsg in the package node_app_msgs.
typedef struct node_app_msgs__msg__IotCmdMsg
{
  std_msgs__msg__Header header;
  /// 分类
  rosidl_runtime_c__String category;
  /// 功能名称
  rosidl_runtime_c__String fun_name;
  /// 附加信息
  rosidl_runtime_c__String sub;
  /// 参数
  rosidl_runtime_c__String param;
} node_app_msgs__msg__IotCmdMsg;

// Struct for a sequence of node_app_msgs__msg__IotCmdMsg.
typedef struct node_app_msgs__msg__IotCmdMsg__Sequence
{
  node_app_msgs__msg__IotCmdMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_app_msgs__msg__IotCmdMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__STRUCT_H_
