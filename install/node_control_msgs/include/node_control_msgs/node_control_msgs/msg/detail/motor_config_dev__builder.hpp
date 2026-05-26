// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorConfigDev.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_config_dev__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorConfigDev_parameter_value
{
public:
  explicit Init_MotorConfigDev_parameter_value(::node_control_msgs::msg::MotorConfigDev & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorConfigDev parameter_value(::node_control_msgs::msg::MotorConfigDev::_parameter_value_type arg)
  {
    msg_.parameter_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorConfigDev msg_;
};

class Init_MotorConfigDev_parameter_id
{
public:
  Init_MotorConfigDev_parameter_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorConfigDev_parameter_value parameter_id(::node_control_msgs::msg::MotorConfigDev::_parameter_id_type arg)
  {
    msg_.parameter_id = std::move(arg);
    return Init_MotorConfigDev_parameter_value(msg_);
  }

private:
  ::node_control_msgs::msg::MotorConfigDev msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorConfigDev>()
{
  return node_control_msgs::msg::builder::Init_MotorConfigDev_parameter_id();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__BUILDER_HPP_
