// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_app_msgs:msg/LrsCmdStateFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE_FEEDBACK__BUILDER_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_app_msgs/msg/detail/lrs_cmd_state_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_app_msgs
{

namespace msg
{

namespace builder
{

class Init_LrsCmdStateFeedback_current_mode
{
public:
  explicit Init_LrsCmdStateFeedback_current_mode(::node_app_msgs::msg::LrsCmdStateFeedback & msg)
  : msg_(msg)
  {}
  ::node_app_msgs::msg::LrsCmdStateFeedback current_mode(::node_app_msgs::msg::LrsCmdStateFeedback::_current_mode_type arg)
  {
    msg_.current_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdStateFeedback msg_;
};

class Init_LrsCmdStateFeedback_current_state
{
public:
  explicit Init_LrsCmdStateFeedback_current_state(::node_app_msgs::msg::LrsCmdStateFeedback & msg)
  : msg_(msg)
  {}
  Init_LrsCmdStateFeedback_current_mode current_state(::node_app_msgs::msg::LrsCmdStateFeedback::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_LrsCmdStateFeedback_current_mode(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdStateFeedback msg_;
};

class Init_LrsCmdStateFeedback_header
{
public:
  Init_LrsCmdStateFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LrsCmdStateFeedback_current_state header(::node_app_msgs::msg::LrsCmdStateFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LrsCmdStateFeedback_current_state(msg_);
  }

private:
  ::node_app_msgs::msg::LrsCmdStateFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_app_msgs::msg::LrsCmdStateFeedback>()
{
  return node_app_msgs::msg::builder::Init_LrsCmdStateFeedback_header();
}

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE_FEEDBACK__BUILDER_HPP_
