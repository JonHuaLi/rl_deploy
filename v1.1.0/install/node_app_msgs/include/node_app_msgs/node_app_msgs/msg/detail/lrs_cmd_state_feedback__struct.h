// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_app_msgs:msg/LrsCmdStateFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE_FEEDBACK__STRUCT_H_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_DISABLED'.
/**
  * 状态命令
 */
enum
{
  node_app_msgs__msg__LrsCmdStateFeedback__STATE_DISABLED = 0ul
};

/// Constant 'STATE_DAMPING'.
enum
{
  node_app_msgs__msg__LrsCmdStateFeedback__STATE_DAMPING = 1ul
};

/// Constant 'STATE_READY'.
enum
{
  node_app_msgs__msg__LrsCmdStateFeedback__STATE_READY = 2ul
};

/// Constant 'STATE_RUNNING'.
enum
{
  node_app_msgs__msg__LrsCmdStateFeedback__STATE_RUNNING = 3ul
};

/// Constant 'MODE_DEFAULT'.
/**
  * 各个状态下的运行模式
 */
enum
{
  node_app_msgs__msg__LrsCmdStateFeedback__MODE_DEFAULT = 0ul
};

/// Constant 'MODE_DANCE'.
enum
{
  node_app_msgs__msg__LrsCmdStateFeedback__MODE_DANCE = 1ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/LrsCmdStateFeedback in the package node_app_msgs.
typedef struct node_app_msgs__msg__LrsCmdStateFeedback
{
  std_msgs__msg__Header header;
  uint32_t current_state;
  uint32_t current_mode;
} node_app_msgs__msg__LrsCmdStateFeedback;

// Struct for a sequence of node_app_msgs__msg__LrsCmdStateFeedback.
typedef struct node_app_msgs__msg__LrsCmdStateFeedback__Sequence
{
  node_app_msgs__msg__LrsCmdStateFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_app_msgs__msg__LrsCmdStateFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE_FEEDBACK__STRUCT_H_
