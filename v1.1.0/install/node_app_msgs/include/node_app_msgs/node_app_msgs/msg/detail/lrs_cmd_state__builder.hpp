// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_app_msgs:msg/LrsCmdState.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE__BUILDER_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_app_msgs/msg/detail/lrs_cmd_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_app_msgs
{

namespace msg
{

namespace builder
{

class Init_LrsCmdState_target_mode
{
public:
  explicit Init_LrsCmdState_target_mode(::node_app_msgs::msg::LrsCmdState & msg)
  : msg_(msg)
  {}
  ::node_app_msgs::msg::LrsCmdState target_mode(::node_app_msgs::msg::LrsCmdState::_target_mode_type arg)
  {
    msg_.target_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdState msg_;
};

class Init_LrsCmdState_current_mode
{
public:
  explicit Init_LrsCmdState_current_mode(::node_app_msgs::msg::LrsCmdState & msg)
  : msg_(msg)
  {}
  Init_LrsCmdState_target_mode current_mode(::node_app_msgs::msg::LrsCmdState::_current_mode_type arg)
  {
    msg_.current_mode = std::move(arg);
    return Init_LrsCmdState_target_mode(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdState msg_;
};

class Init_LrsCmdState_target_state
{
public:
  explicit Init_LrsCmdState_target_state(::node_app_msgs::msg::LrsCmdState & msg)
  : msg_(msg)
  {}
  Init_LrsCmdState_current_mode target_state(::node_app_msgs::msg::LrsCmdState::_target_state_type arg)
  {
    msg_.target_state = std::move(arg);
    return Init_LrsCmdState_current_mode(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdState msg_;
};

class Init_LrsCmdState_current_state
{
public:
  explicit Init_LrsCmdState_current_state(::node_app_msgs::msg::LrsCmdState & msg)
  : msg_(msg)
  {}
  Init_LrsCmdState_target_state current_state(::node_app_msgs::msg::LrsCmdState::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_LrsCmdState_target_state(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdState msg_;
};

class Init_LrsCmdState_cmd_type
{
public:
  explicit Init_LrsCmdState_cmd_type(::node_app_msgs::msg::LrsCmdState & msg)
  : msg_(msg)
  {}
  Init_LrsCmdState_current_state cmd_type(::node_app_msgs::msg::LrsCmdState::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_LrsCmdState_current_state(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdState msg_;
};

class Init_LrsCmdState_header
{
public:
  Init_LrsCmdState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LrsCmdState_cmd_type header(::node_app_msgs::msg::LrsCmdState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LrsCmdState_cmd_type(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_app_msgs::msg::LrsCmdState>()
{
  return node_app_msgs::msg::builder::Init_LrsCmdState_header();
}

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE__BUILDER_HPP_
