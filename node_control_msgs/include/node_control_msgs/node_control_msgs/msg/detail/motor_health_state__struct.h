// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_control_msgs:msg/MotorHealthState.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__STRUCT_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorHealthState in the package node_control_msgs.
typedef struct node_control_msgs__msg__MotorHealthState
{
  /// 0-3 表示4种健康状态
  uint16_t health;
  /// 电机方向
  uint8_t motor_direction;
  /// 电机温度
  uint8_t motor_temperature;
  /// mos温度
  uint8_t mos_temperature;
  /// 母线电压
  uint8_t bus_voltage;
  /// 电机在线状态
  uint8_t u1_online;
  /// 电机位置零点
  float position_zero;
} node_control_msgs__msg__MotorHealthState;

// Struct for a sequence of node_control_msgs__msg__MotorHealthState.
typedef struct node_control_msgs__msg__MotorHealthState__Sequence
{
  node_control_msgs__msg__MotorHealthState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_control_msgs__msg__MotorHealthState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__STRUCT_H_
