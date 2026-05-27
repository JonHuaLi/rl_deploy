// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_control_msgs:msg/MotorInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO__TRAITS_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_control_msgs/msg/detail/motor_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'info'
#include "node_control_msgs/msg/detail/motor_info_value__traits.hpp"

namespace node_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: info
  {
    if (msg.info.size() == 0) {
      out << "info: []";
    } else {
      out << "info: [";
      size_t pending_items = msg.info.size();
      for (auto item : msg.info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorInfo & msg,
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

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.info.size() == 0) {
      out << "info: []\n";
    } else {
      out << "info:\n";
      for (auto item : msg.info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorInfo & msg, bool use_flow_style = false)
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

}  // namespace node_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use node_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_control_msgs::msg::MotorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_control_msgs::msg::MotorInfo & msg)
{
  return node_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_control_msgs::msg::MotorInfo>()
{
  return "node_control_msgs::msg::MotorInfo";
}

template<>
inline const char * name<node_control_msgs::msg::MotorInfo>()
{
  return "node_control_msgs/msg/MotorInfo";
}

template<>
struct has_fixed_size<node_control_msgs::msg::MotorInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_control_msgs::msg::MotorInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_control_msgs::msg::MotorInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO__TRAITS_HPP_
