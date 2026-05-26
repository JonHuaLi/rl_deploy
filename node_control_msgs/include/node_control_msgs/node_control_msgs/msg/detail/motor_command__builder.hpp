// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_reserved
{
public:
  explicit Init_MotorCommand_reserved(::node_control_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorCommand reserved(::node_control_msgs::msg::MotorCommand::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_torque_des
{
public:
  explicit Init_MotorCommand_torque_des(::node_control_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_reserved torque_des(::node_control_msgs::msg::MotorCommand::_torque_des_type arg)
  {
    msg_.torque_des = std::move(arg);
    return Init_MotorCommand_reserved(msg_);
  }

private:
  ::node_control_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_omega_des
{
public:
  explicit Init_MotorCommand_omega_des(::node_control_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_torque_des omega_des(::node_control_msgs::msg::MotorCommand::_omega_des_type arg)
  {
    msg_.omega_des = std::move(arg);
    return Init_MotorCommand_torque_des(msg_);
  }

private:
  ::node_control_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_position_des
{
public:
  explicit Init_MotorCommand_position_des(::node_control_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_omega_des position_des(::node_control_msgs::msg::MotorCommand::_position_des_type arg)
  {
    msg_.position_des = std::move(arg);
    return Init_MotorCommand_omega_des(msg_);
  }

private:
  ::node_control_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_kd
{
public:
  explicit Init_MotorCommand_kd(::node_control_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_position_des kd(::node_control_msgs::msg::MotorCommand::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_MotorCommand_position_des(msg_);
  }

private:
  ::node_control_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_kp
{
public:
  Init_MotorCommand_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_kd kp(::node_control_msgs::msg::MotorCommand::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorCommand_kd(msg_);
  }

private:
  ::node_control_msgs::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorCommand>()
{
  return node_control_msgs::msg::builder::Init_MotorCommand_kp();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
