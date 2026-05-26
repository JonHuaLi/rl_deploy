// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_app_msgs:msg/LrsCmdActionFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__STRUCT_H_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTION_MOTOR_RECOVER'.
/**
  *  普通命令
  * 机器电机状态恢复
 */
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_MOTOR_RECOVER = 0ul
};

/// Constant 'ACTION_UPGRADE'.
/**
  * 机器人升级
 */
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_UPGRADE = 1ul
};

/// Constant 'ACTION_DANCE_1'.
/**
  * 舞蹈命令
 */
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_DANCE_1 = 10ul
};

/// Constant 'ACTION_WAVE'.
/**
  * 其他命令
 */
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_WAVE = 20ul
};

/// Constant 'ACTION_CLASP'.
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_CLASP = 21ul
};

/// Constant 'ACTION_HEART'.
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_HEART = 22ul
};

/// Constant 'ACTION_SHAKE'.
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_SHAKE = 23ul
};

/// Constant 'ACTION_CLAP'.
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_CLAP = 24ul
};

/// Constant 'ACTION_KISS'.
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_KISS = 25ul
};

/// Constant 'ACTION_RUNNING'.
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_RUNNING = 0ul
};

/// Constant 'ACTION_SUCCESS'.
enum
{
  node_app_msgs__msg__LrsCmdActionFeedback__ACTION_SUCCESS = 1ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/LrsCmdActionFeedback in the package node_app_msgs.
typedef struct node_app_msgs__msg__LrsCmdActionFeedback
{
  std_msgs__msg__Header header;
  uint32_t action_type;
  /// 运行结果
  uint32_t action_result;
} node_app_msgs__msg__LrsCmdActionFeedback;

// Struct for a sequence of node_app_msgs__msg__LrsCmdActionFeedback.
typedef struct node_app_msgs__msg__LrsCmdActionFeedback__Sequence
{
  node_app_msgs__msg__LrsCmdActionFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_app_msgs__msg__LrsCmdActionFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__STRUCT_H_
