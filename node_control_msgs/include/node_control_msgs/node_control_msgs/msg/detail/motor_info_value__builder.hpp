// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorInfoValue.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_info_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorInfoValue_serial_num
{
public:
  explicit Init_MotorInfoValue_serial_num(::node_control_msgs::msg::MotorInfoValue & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorInfoValue serial_num(::node_control_msgs::msg::MotorInfoValue::_serial_num_type arg)
  {
    msg_.serial_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorInfoValue msg_;
};

class Init_MotorInfoValue_state
{
public:
  explicit Init_MotorInfoValue_state(::node_control_msgs::msg::MotorInfoValue & msg)
  : msg_(msg)
  {}
  Init_MotorInfoValue_serial_num state(::node_control_msgs::msg::MotorInfoValue::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MotorInfoValue_serial_num(msg_);
  }

private:
  ::node_control_msgs::msg::MotorInfoValue msg_;
};

class Init_MotorInfoValue_joint_version
{
public:
  explicit Init_MotorInfoValue_joint_version(::node_control_msgs::msg::MotorInfoValue & msg)
  : msg_(msg)
  {}
  Init_MotorInfoValue_state joint_version(::node_control_msgs::msg::MotorInfoValue::_joint_version_type arg)
  {
    msg_.joint_version = std::move(arg);
    return Init_MotorInfoValue_state(msg_);
  }

private:
  ::node_control_msgs::msg::MotorInfoValue msg_;
};

class Init_MotorInfoValue_hw_version
{
public:
  explicit Init_MotorInfoValue_hw_version(::node_control_msgs::msg::MotorInfoValue & msg)
  : msg_(msg)
  {}
  Init_MotorInfoValue_joint_version hw_version(::node_control_msgs::msg::MotorInfoValue::_hw_version_type arg)
  {
    msg_.hw_version = std::move(arg);
    return Init_MotorInfoValue_joint_version(msg_);
  }

private:
  ::node_control_msgs::msg::MotorInfoValue msg_;
};

class Init_MotorInfoValue_sw_version
{
public:
  explicit Init_MotorInfoValue_sw_version(::node_control_msgs::msg::MotorInfoValue & msg)
  : msg_(msg)
  {}
  Init_MotorInfoValue_hw_version sw_version(::node_control_msgs::msg::MotorInfoValue::_sw_version_type arg)
  {
    msg_.sw_version = std::move(arg);
    return Init_MotorInfoValue_hw_version(msg_);
  }

private:
  ::node_control_msgs::msg::MotorInfoValue msg_;
};

class Init_MotorInfoValue_startup_time_ms
{
public:
  Init_MotorInfoValue_startup_time_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorInfoValue_sw_version startup_time_ms(::node_control_msgs::msg::MotorInfoValue::_startup_time_ms_type arg)
  {
    msg_.startup_time_ms = std::move(arg);
    return Init_MotorInfoValue_sw_version(msg_);
  }

private:
  ::node_control_msgs::msg::MotorInfoValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorInfoValue>()
{
  return node_control_msgs::msg::builder::Init_MotorInfoValue_startup_time_ms();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__BUILDER_HPP_
