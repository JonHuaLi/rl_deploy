// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_app_msgs:msg/LrsCmdActionFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__BUILDER_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_app_msgs/msg/detail/lrs_cmd_action_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_app_msgs
{

namespace msg
{

namespace builder
{

class Init_LrsCmdActionFeedback_action_result
{
public:
  explicit Init_LrsCmdActionFeedback_action_result(::node_app_msgs::msg::LrsCmdActionFeedback & msg)
  : msg_(msg)
  {}
  ::node_app_msgs::msg::LrsCmdActionFeedback action_result(::node_app_msgs::msg::LrsCmdActionFeedback::_action_result_type arg)
  {
    msg_.action_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdActionFeedback msg_;
};

class Init_LrsCmdActionFeedback_action_type
{
public:
  explicit Init_LrsCmdActionFeedback_action_type(::node_app_msgs::msg::LrsCmdActionFeedback & msg)
  : msg_(msg)
  {}
  Init_LrsCmdActionFeedback_action_result action_type(::node_app_msgs::msg::LrsCmdActionFeedback::_action_type_type arg)
  {
    msg_.action_type = std::move(arg);
    return Init_LrsCmdActionFeedback_action_result(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdActionFeedback msg_;
};

class Init_LrsCmdActionFeedback_header
{
public:
  Init_LrsCmdActionFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LrsCmdActionFeedback_action_type header(::node_app_msgs::msg::LrsCmdActionFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LrsCmdActionFeedback_action_type(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdActionFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_app_msgs::msg::LrsCmdActionFeedback>()
{
  return node_app_msgs::msg::builder::Init_LrsCmdActionFeedback_header();
}

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__BUILDER_HPP_
