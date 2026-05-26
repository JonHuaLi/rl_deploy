// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorFeedback_reserved
{
public:
  explicit Init_MotorFeedback_reserved(::node_control_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorFeedback reserved(::node_control_msgs::msg::MotorFeedback::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_torque
{
public:
  explicit Init_MotorFeedback_torque(::node_control_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_reserved torque(::node_control_msgs::msg::MotorFeedback::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_MotorFeedback_reserved(msg_);
  }

private:
  ::node_control_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_omega
{
public:
  explicit Init_MotorFeedback_omega(::node_control_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_torque omega(::node_control_msgs::msg::MotorFeedback::_omega_type arg)
  {
    msg_.omega = std::move(arg);
    return Init_MotorFeedback_torque(msg_);
  }

private:
  ::node_control_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_position
{
public:
  Init_MotorFeedback_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorFeedback_omega position(::node_control_msgs::msg::MotorFeedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorFeedback_omega(msg_);
  }

private:
  ::node_control_msgs::msg::MotorFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorFeedback>()
{
  return node_control_msgs::msg::builder::Init_MotorFeedback_position();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_
