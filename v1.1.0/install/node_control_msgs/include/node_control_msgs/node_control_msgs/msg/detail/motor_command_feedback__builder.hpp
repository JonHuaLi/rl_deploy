// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND_FEEDBACK__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCommandFeedback_feedback
{
public:
  explicit Init_MotorCommandFeedback_feedback(::node_control_msgs::msg::MotorCommandFeedback & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorCommandFeedback feedback(::node_control_msgs::msg::MotorCommandFeedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorCommandFeedback msg_;
};

class Init_MotorCommandFeedback_seq
{
public:
  explicit Init_MotorCommandFeedback_seq(::node_control_msgs::msg::MotorCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorCommandFeedback_feedback seq(::node_control_msgs::msg::MotorCommandFeedback::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_MotorCommandFeedback_feedback(msg_);
  }

private:
  ::node_control_msgs::msg::MotorCommandFeedback msg_;
};

class Init_MotorCommandFeedback_header
{
public:
  Init_MotorCommandFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommandFeedback_seq header(::node_control_msgs::msg::MotorCommandFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorCommandFeedback_seq(msg_);
  }

private:
  ::node_control_msgs::msg::MotorCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorCommandFeedback>()
{
  return node_control_msgs::msg::builder::Init_MotorCommandFeedback_header();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND_FEEDBACK__BUILDER_HPP_
