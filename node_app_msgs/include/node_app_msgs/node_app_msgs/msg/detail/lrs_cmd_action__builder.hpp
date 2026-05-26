// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_app_msgs:msg/LrsCmdAction.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION__BUILDER_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_app_msgs/msg/detail/lrs_cmd_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_app_msgs
{

namespace msg
{

namespace builder
{

class Init_LrsCmdAction_param
{
public:
  explicit Init_LrsCmdAction_param(::node_app_msgs::msg::LrsCmdAction & msg)
  : msg_(msg)
  {}
  ::node_app_msgs::msg::LrsCmdAction param(::node_app_msgs::msg::LrsCmdAction::_param_type arg)
  {
    msg_.param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdAction msg_;
};

class Init_LrsCmdAction_action
{
public:
  explicit Init_LrsCmdAction_action(::node_app_msgs::msg::LrsCmdAction & msg)
  : msg_(msg)
  {}
  Init_LrsCmdAction_param action(::node_app_msgs::msg::LrsCmdAction::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_LrsCmdAction_param(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdAction msg_;
};

class Init_LrsCmdAction_header
{
public:
  Init_LrsCmdAction_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LrsCmdAction_action header(::node_app_msgs::msg::LrsCmdAction::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LrsCmdAction_action(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_app_msgs::msg::LrsCmdAction>()
{
  return node_app_msgs::msg::builder::Init_LrsCmdAction_header();
}

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION__BUILDER_HPP_
