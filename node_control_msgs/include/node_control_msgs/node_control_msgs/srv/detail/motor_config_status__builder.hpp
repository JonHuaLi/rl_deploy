// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_control_msgs:srv/MotorConfigStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__BUILDER_HPP_
#define NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_control_msgs/srv/detail/motor_config_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_control_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorConfigStatus_Request_motor_id
{
public:
  Init_MotorConfigStatus_Request_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_control_msgs::srv::MotorConfigStatus_Request motor_id(::node_control_msgs::srv::MotorConfigStatus_Request::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::srv::MotorConfigStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::srv::MotorConfigStatus_Request>()
{
  return node_control_msgs::srv::builder::Init_MotorConfigStatus_Request_motor_id();
}

}  // namespace node_control_msgs


namespace node_control_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorConfigStatus_Response_config
{
public:
  Init_MotorConfigStatus_Response_config()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_control_msgs::srv::MotorConfigStatus_Response config(::node_control_msgs::srv::MotorConfigStatus_Response::_config_type arg)
  {
    msg_.config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_control_msgs::srv::MotorConfigStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_control_msgs::srv::MotorConfigStatus_Response>()
{
  return node_control_msgs::srv::builder::Init_MotorConfigStatus_Response_config();
}

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__BUILDER_HPP_
