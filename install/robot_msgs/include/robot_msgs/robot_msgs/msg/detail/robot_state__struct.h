// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

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
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.h"
// Member 'motor_feedback'
#include "node_control_msgs/msg/detail/motor_command_feedback__struct.h"

/// Struct defined in msg/RobotState in the package robot_msgs.
/**
  * RobotState.msg - 统一的机器人状态消息
  * 包含IMU和电机反馈数据
 */
typedef struct robot_msgs__msg__RobotState
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Imu imu;
  node_control_msgs__msg__MotorCommandFeedback motor_feedback;
} robot_msgs__msg__RobotState;

// Struct for a sequence of robot_msgs__msg__RobotState.
typedef struct robot_msgs__msg__RobotState__Sequence
{
  robot_msgs__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msgs__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
