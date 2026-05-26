// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_driver_msgs:msg/Sensormsgstate.idl
// generated code does not contain a copyright notice

#ifndef NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGSTATE__BUILDER_HPP_
#define NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGSTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_driver_msgs/msg/detail/sensormsgstate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_Sensormsgstate_error_message
{
public:
  explicit Init_Sensormsgstate_error_message(::node_driver_msgs::msg::Sensormsgstate & msg)
  : msg_(msg)
  {}
  ::node_driver_msgs::msg::Sensormsgstate error_message(::node_driver_msgs::msg::Sensormsgstate::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_driver_msgs::msg::Sensormsgstate msg_;
};

class Init_Sensormsgstate_sensor_state
{
public:
  explicit Init_Sensormsgstate_sensor_state(::node_driver_msgs::msg::Sensormsgstate & msg)
  : msg_(msg)
  {}
  Init_Sensormsgstate_error_message sensor_state(::node_driver_msgs::msg::Sensormsgstate::_sensor_state_type arg)
  {
    msg_.sensor_state = std::move(arg);
    return Init_Sensormsgstate_error_message(msg_);
  }

private:
  ::node_driver_msgs::msg::Sensormsgstate msg_;
};

class Init_Sensormsgstate_sensor_type
{
public:
  explicit Init_Sensormsgstate_sensor_type(::node_driver_msgs::msg::Sensormsgstate & msg)
  : msg_(msg)
  {}
  Init_Sensormsgstate_sensor_state sensor_type(::node_driver_msgs::msg::Sensormsgstate::_sensor_type_type arg)
  {
    msg_.sensor_type = std::move(arg);
    return Init_Sensormsgstate_sensor_state(msg_);
  }

private:
  ::node_driver_msgs::msg::Sensormsgstate msg_;
};

class Init_Sensormsgstate_header
{
public:
  Init_Sensormsgstate_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sensormsgstate_sensor_type header(::node_driver_msgs::msg::Sensormsgstate::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Sensormsgstate_sensor_type(msg_);
  }

private:
  ::node_driver_msgs::msg::Sensormsgstate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_driver_msgs::msg::Sensormsgstate>()
{
  return node_driver_msgs::msg::builder::Init_Sensormsgstate_header();
}

}  // namespace node_driver_msgs

#endif  // NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGSTATE__BUILDER_HPP_
