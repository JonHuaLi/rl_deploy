// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorControl_cmd
{
public:
  explicit Init_MotorControl_cmd(::node_control_msgs::msg::MotorControl & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorControl cmd(::node_control_msgs::msg::MotorControl::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorControl msg_;
};

class Init_MotorControl_seq_num
{
public:
  explicit Init_MotorControl_seq_num(::node_control_msgs::msg::MotorControl & msg)
  : msg_(msg)
  {}
  Init_MotorControl_cmd seq_num(::node_control_msgs::msg::MotorControl::_seq_num_type arg)
  {
    msg_.seq_num = std::move(arg);
    return Init_MotorControl_cmd(msg_);
  }

private:
  ::node_control_msgs::msg::MotorControl msg_;
};

class Init_MotorControl_header
{
public:
  Init_MotorControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_seq_num header(::node_control_msgs::msg::MotorControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorControl_seq_num(msg_);
  }

private:
  ::node_control_msgs::msg::MotorControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorControl>()
{
  return node_control_msgs::msg::builder::Init_MotorControl_header();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
