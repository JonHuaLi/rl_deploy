// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_app_msgs:msg/LrsState.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__BUILDER_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_app_msgs/msg/detail/lrs_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_app_msgs
{

namespace msg
{

namespace builder
{

class Init_LrsState_motor_health_states
{
public:
  explicit Init_LrsState_motor_health_states(::node_app_msgs::msg::LrsState & msg)
  : msg_(msg)
  {}
  ::node_app_msgs::msg::LrsState motor_health_states(::node_app_msgs::msg::LrsState::_motor_health_states_type arg)
  {
    msg_.motor_health_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_app_msgs::msg::LrsState msg_;
};

class Init_LrsState_motor_health
{
public:
  explicit Init_LrsState_motor_health(::node_app_msgs::msg::LrsState & msg)
  : msg_(msg)
  {}
  Init_LrsState_motor_health_states motor_health(::node_app_msgs::msg::LrsState::_motor_health_type arg)
  {
    msg_.motor_health = std::move(arg);
    return Init_LrsState_motor_health_states(msg_);
  }

private:
  ::node_app_msgs::msg::LrsState msg_;
};

class Init_LrsState_running_status
{
public:
  explicit Init_LrsState_running_status(::node_app_msgs::msg::LrsState & msg)
  : msg_(msg)
  {}
  Init_LrsState_motor_health running_status(::node_app_msgs::msg::LrsState::_running_status_type arg)
  {
    msg_.running_status = std::move(arg);
    return Init_LrsState_motor_health(msg_);
  }

private:
  ::node_app_msgs::msg::LrsState msg_;
};

class Init_LrsState_current_action
{
public:
  explicit Init_LrsState_current_action(::node_app_msgs::msg::LrsState & msg)
  : msg_(msg)
  {}
  Init_LrsState_running_status current_action(::node_app_msgs::msg::LrsState::_current_action_type arg)
  {
    msg_.current_action = std::move(arg);
    return Init_LrsState_running_status(msg_);
  }

private:
  ::node_app_msgs::msg::LrsState msg_;
};

class Init_LrsState_current_mode
{
public:
  explicit Init_LrsState_current_mode(::node_app_msgs::msg::LrsState & msg)
  : msg_(msg)
  {}
  Init_LrsState_current_action current_mode(::node_app_msgs::msg::LrsState::_current_mode_type arg)
  {
    msg_.current_mode = std::move(arg);
    return Init_LrsState_current_action(msg_);
  }

private:
  ::node_app_msgs::msg::LrsState msg_;
};

class Init_LrsState_current_state
{
public:
  explicit Init_LrsState_current_state(::node_app_msgs::msg::LrsState & msg)
  : msg_(msg)
  {}
  Init_LrsState_current_mode current_state(::node_app_msgs::msg::LrsState::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_LrsState_current_mode(msg_);
  }

private:
  ::node_app_msgs::msg::LrsState msg_;
};

class Init_LrsState_header
{
public:
  Init_LrsState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LrsState_current_state header(::node_app_msgs::msg::LrsState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LrsState_current_state(msg_);
  }

private:
  ::node_app_msgs::msg::LrsState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_app_msgs::msg::LrsState>()
{
  return node_app_msgs::msg::builder::Init_LrsState_header();
}

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__BUILDER_HPP_
