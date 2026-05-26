// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorHealthState.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_health_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorHealthState_position_zero
{
public:
  explicit Init_MotorHealthState_position_zero(::node_control_msgs::msg::MotorHealthState & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorHealthState position_zero(::node_control_msgs::msg::MotorHealthState::_position_zero_type arg)
  {
    msg_.position_zero = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealthState msg_;
};

class Init_MotorHealthState_u1_online
{
public:
  explicit Init_MotorHealthState_u1_online(::node_control_msgs::msg::MotorHealthState & msg)
  : msg_(msg)
  {}
  Init_MotorHealthState_position_zero u1_online(::node_control_msgs::msg::MotorHealthState::_u1_online_type arg)
  {
    msg_.u1_online = std::move(arg);
    return Init_MotorHealthState_position_zero(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealthState msg_;
};

class Init_MotorHealthState_bus_voltage
{
public:
  explicit Init_MotorHealthState_bus_voltage(::node_control_msgs::msg::MotorHealthState & msg)
  : msg_(msg)
  {}
  Init_MotorHealthState_u1_online bus_voltage(::node_control_msgs::msg::MotorHealthState::_bus_voltage_type arg)
  {
    msg_.bus_voltage = std::move(arg);
    return Init_MotorHealthState_u1_online(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealthState msg_;
};

class Init_MotorHealthState_mos_temperature
{
public:
  explicit Init_MotorHealthState_mos_temperature(::node_control_msgs::msg::MotorHealthState & msg)
  : msg_(msg)
  {}
  Init_MotorHealthState_bus_voltage mos_temperature(::node_control_msgs::msg::MotorHealthState::_mos_temperature_type arg)
  {
    msg_.mos_temperature = std::move(arg);
    return Init_MotorHealthState_bus_voltage(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealthState msg_;
};

class Init_MotorHealthState_motor_temperature
{
public:
  explicit Init_MotorHealthState_motor_temperature(::node_control_msgs::msg::MotorHealthState & msg)
  : msg_(msg)
  {}
  Init_MotorHealthState_mos_temperature motor_temperature(::node_control_msgs::msg::MotorHealthState::_motor_temperature_type arg)
  {
    msg_.motor_temperature = std::move(arg);
    return Init_MotorHealthState_mos_temperature(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealthState msg_;
};

class Init_MotorHealthState_motor_direction
{
public:
  explicit Init_MotorHealthState_motor_direction(::node_control_msgs::msg::MotorHealthState & msg)
  : msg_(msg)
  {}
  Init_MotorHealthState_motor_temperature motor_direction(::node_control_msgs::msg::MotorHealthState::_motor_direction_type arg)
  {
    msg_.motor_direction = std::move(arg);
    return Init_MotorHealthState_motor_temperature(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealthState msg_;
};

class Init_MotorHealthState_health
{
public:
  Init_MotorHealthState_health()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorHealthState_motor_direction health(::node_control_msgs::msg::MotorHealthState::_health_type arg)
  {
    msg_.health = std::move(arg);
    return Init_MotorHealthState_motor_direction(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealthState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorHealthState>()
{
  return node_control_msgs::msg::builder::Init_MotorHealthState_health();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__BUILDER_HPP_
