// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_app_msgs:msg/IotCmdMsg.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__TRAITS_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_app_msgs/msg/detail/iot_cmd_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace node_app_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IotCmdMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: category
  {
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << ", ";
  }

  // member: fun_name
  {
    out << "fun_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fun_name, out);
    out << ", ";
  }

  // member: sub
  {
    out << "sub: ";
    rosidl_generator_traits::value_to_yaml(msg.sub, out);
    out << ", ";
  }

  // member: param
  {
    out << "param: ";
    rosidl_generator_traits::value_to_yaml(msg.param, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IotCmdMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << "\n";
  }

  // member: fun_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fun_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fun_name, out);
    out << "\n";
  }

  // member: sub
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub: ";
    rosidl_generator_traits::value_to_yaml(msg.sub, out);
    out << "\n";
  }

  // member: param
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param: ";
    rosidl_generator_traits::value_to_yaml(msg.param, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IotCmdMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace node_app_msgs

namespace rosidl_generator_traits
{

[[deprecated("use node_app_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_app_msgs::msg::IotCmdMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_app_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_app_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_app_msgs::msg::IotCmdMsg & msg)
{
  return node_app_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_app_msgs::msg::IotCmdMsg>()
{
  return "node_app_msgs::msg::IotCmdMsg";
}

template<>
inline const char * name<node_app_msgs::msg::IotCmdMsg>()
{
  return "node_app_msgs/msg/IotCmdMsg";
}

template<>
struct has_fixed_size<node_app_msgs::msg::IotCmdMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_app_msgs::msg::IotCmdMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_app_msgs::msg::IotCmdMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__TRAITS_HPP_
