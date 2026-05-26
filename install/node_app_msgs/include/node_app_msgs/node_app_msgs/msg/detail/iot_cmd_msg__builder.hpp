// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_app_msgs:msg/IotCmdMsg.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__BUILDER_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_app_msgs/msg/detail/iot_cmd_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_app_msgs
{

namespace msg
{

namespace builder
{

class Init_IotCmdMsg_param
{
public:
  explicit Init_IotCmdMsg_param(::node_app_msgs::msg::IotCmdMsg & msg)
  : msg_(msg)
  {}
  ::node_app_msgs::msg::IotCmdMsg param(::node_app_msgs::msg::IotCmdMsg::_param_type arg)
  {
    msg_.param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_app_msgs::msg::IotCmdMsg msg_;
};

class Init_IotCmdMsg_sub
{
public:
  explicit Init_IotCmdMsg_sub(::node_app_msgs::msg::IotCmdMsg & msg)
  : msg_(msg)
  {}
  Init_IotCmdMsg_param sub(::node_app_msgs::msg::IotCmdMsg::_sub_type arg)
  {
    msg_.sub = std::move(arg);
    return Init_IotCmdMsg_param(msg_);
  }

private:
  ::node_app_msgs::msg::IotCmdMsg msg_;
};

class Init_IotCmdMsg_fun_name
{
public:
  explicit Init_IotCmdMsg_fun_name(::node_app_msgs::msg::IotCmdMsg & msg)
  : msg_(msg)
  {}
  Init_IotCmdMsg_sub fun_name(::node_app_msgs::msg::IotCmdMsg::_fun_name_type arg)
  {
    msg_.fun_name = std::move(arg);
    return Init_IotCmdMsg_sub(msg_);
  }

private:
  ::node_app_msgs::msg::IotCmdMsg msg_;
};

class Init_IotCmdMsg_category
{
public:
  explicit Init_IotCmdMsg_category(::node_app_msgs::msg::IotCmdMsg & msg)
  : msg_(msg)
  {}
  Init_IotCmdMsg_fun_name category(::node_app_msgs::msg::IotCmdMsg::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_IotCmdMsg_fun_name(msg_);
  }

private:
  ::node_app_msgs::msg::IotCmdMsg msg_;
};

class Init_IotCmdMsg_header
{
public:
  Init_IotCmdMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IotCmdMsg_category header(::node_app_msgs::msg::IotCmdMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IotCmdMsg_category(msg_);
  }

private:
  ::node_app_msgs::msg::IotCmdMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_app_msgs::msg::IotCmdMsg>()
{
  return node_app_msgs::msg::builder::Init_IotCmdMsg_header();
}

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__BUILDER_HPP_
