// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorHealth.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_health__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorHealth_state_all
{
public:
  explicit Init_MotorHealth_state_all(::node_control_msgs::msg::MotorHealth & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorHealth state_all(::node_control_msgs::msg::MotorHealth::_state_all_type arg)
  {
    msg_.state_all = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealth msg_;
};

class Init_MotorHealth_state
{
public:
  explicit Init_MotorHealth_state(::node_control_msgs::msg::MotorHealth & msg)
  : msg_(msg)
  {}
  Init_MotorHealth_state_all state(::node_control_msgs::msg::MotorHealth::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MotorHealth_state_all(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealth msg_;
};

class Init_MotorHealth_header
{
public:
  Init_MotorHealth_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorHealth_state header(::node_control_msgs::msg::MotorHealth::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorHealth_state(msg_);
  }

private:
  ::node_control_msgs::msg::MotorHealth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorHealth>()
{
  return node_control_msgs::msg::builder::Init_MotorHealth_header();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__BUILDER_HPP_
