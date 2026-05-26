// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_driver_msgs:msg/Sensormsgcontrol.idl
// generated code does not contain a copyright notice

#ifndef NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGCONTROL__BUILDER_HPP_
#define NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGCONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_driver_msgs/msg/detail/sensormsgcontrol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_Sensormsgcontrol_control_command
{
public:
  explicit Init_Sensormsgcontrol_control_command(::node_driver_msgs::msg::Sensormsgcontrol & msg)
  : msg_(msg)
  {}
  ::node_driver_msgs::msg::Sensormsgcontrol control_command(::node_driver_msgs::msg::Sensormsgcontrol::_control_command_type arg)
  {
    msg_.control_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_driver_msgs::msg::Sensormsgcontrol msg_;
};

class Init_Sensormsgcontrol_sensor_type
{
public:
  explicit Init_Sensormsgcontrol_sensor_type(::node_driver_msgs::msg::Sensormsgcontrol & msg)
  : msg_(msg)
  {}
  Init_Sensormsgcontrol_control_command sensor_type(::node_driver_msgs::msg::Sensormsgcontrol::_sensor_type_type arg)
  {
    msg_.sensor_type = std::move(arg);
    return Init_Sensormsgcontrol_control_command(msg_);
  }

private:
  ::node_driver_msgs::msg::Sensormsgcontrol msg_;
};

class Init_Sensormsgcontrol_header
{
public:
  Init_Sensormsgcontrol_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sensormsgcontrol_sensor_type header(::node_driver_msgs::msg::Sensormsgcontrol::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Sensormsgcontrol_sensor_type(msg_);
  }

private:
  ::node_driver_msgs::msg::Sensormsgcontrol msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_driver_msgs::msg::Sensormsgcontrol>()
{
  return node_driver_msgs::msg::builder::Init_Sensormsgcontrol_header();
}

}  // namespace node_driver_msgs

#endif  // NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGCONTROL__BUILDER_HPP_
