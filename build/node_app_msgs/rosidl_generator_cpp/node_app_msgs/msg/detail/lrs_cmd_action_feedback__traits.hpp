// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_app_msgs:msg/LrsCmdActionFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__TRAITS_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_app_msgs/msg/detail/lrs_cmd_action_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace node_app_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LrsCmdActionFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: action_type
  {
    out << "action_type: ";
    rosidl_generator_traits::value_to_yaml(msg.action_type, out);
    out << ", ";
  }

  // member: action_result
  {
    out << "action_result: ";
    rosidl_generator_traits::value_to_yaml(msg.action_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LrsCmdActionFeedback & msg,
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

  // member: action_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_type: ";
    rosidl_generator_traits::value_to_yaml(msg.action_type, out);
    out << "\n";
  }

  // member: action_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_result: ";
    rosidl_generator_traits::value_to_yaml(msg.action_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LrsCmdActionFeedback & msg, bool use_flow_style = false)
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
  const node_app_msgs::msg::LrsCmdActionFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_app_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_app_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_app_msgs::msg::LrsCmdActionFeedback & msg)
{
  return node_app_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_app_msgs::msg::LrsCmdActionFeedback>()
{
  return "node_app_msgs::msg::LrsCmdActionFeedback";
}

template<>
inline const char * name<node_app_msgs::msg::LrsCmdActionFeedback>()
{
  return "node_app_msgs/msg/LrsCmdActionFeedback";
}

template<>
struct has_fixed_size<node_app_msgs::msg::LrsCmdActionFeedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<node_app_msgs::msg::LrsCmdActionFeedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<node_app_msgs::msg::LrsCmdActionFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__TRAITS_HPP_
