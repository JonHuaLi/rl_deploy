// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:msg/MotorInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO__BUILDER_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/msg/detail/motor_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorInfo_info
{
public:
  explicit Init_MotorInfo_info(::node_control_msgs::msg::MotorInfo & msg)
  : msg_(msg)
  {}
  ::node_control_msgs::msg::MotorInfo info(::node_control_msgs::msg::MotorInfo::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::msg::MotorInfo msg_;
};

class Init_MotorInfo_header
{
public:
  Init_MotorInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorInfo_info header(::node_control_msgs::msg::MotorInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorInfo_info(msg_);
  }

private:
  ::node_control_msgs::msg::MotorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::msg::MotorInfo>()
{
  return node_control_msgs::msg::builder::Init_MotorInfo_header();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO__BUILDER_HPP_
