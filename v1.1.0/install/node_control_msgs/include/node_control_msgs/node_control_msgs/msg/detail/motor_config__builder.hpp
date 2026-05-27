// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorConfig.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorConfig_config
{
public:
  explicit Init_MotorConfig_config(::node_control_msgs::msg::MotorConfig & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorConfig config(::node_control_msgs::msg::MotorConfig::_config_type arg)
  {
    msg_.config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorConfig msg_;
};

class Init_MotorConfig_motor_id
{
public:
  explicit Init_MotorConfig_motor_id(::node_control_msgs::msg::MotorConfig & msg)
  : msg_(msg)
  {}
  Init_MotorConfig_config motor_id(::node_control_msgs::msg::MotorConfig::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorConfig_config(msg_);
  }

private:
  ::node_control_msgs::msg::MotorConfig msg_;
};

class Init_MotorConfig_header
{
public:
  Init_MotorConfig_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorConfig_motor_id header(::node_control_msgs::msg::MotorConfig::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorConfig_motor_id(msg_);
  }

private:
  ::node_control_msgs::msg::MotorConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorConfig>()
{
  return node_control_msgs::msg::builder::Init_MotorConfig_header();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG__BUILDER_HPP_
