// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_control_msgs:msg/MotorHealth.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__TRAITS_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_control_msgs/msg/detail/motor_health__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'state'
// Member 'state_all'
#include "node_control_msgs/msg/detail/motor_health_state__traits.hpp"

namespace node_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorHealth & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: state
  {
    if (msg.state.size() == 0) {
      out << "state: []";
    } else {
      out << "state: [";
      size_t pending_items = msg.state.size();
      for (auto item : msg.state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state_all
  {
    out << "state_all: ";
    to_flow_style_yaml(msg.state_all, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorHealth & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: state_all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_all:\n";
    to_block_style_yaml(msg.state_all, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorHealth & msg, bool use_flow_style = false)
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
  const node_control_msgs::msg::MotorHealth & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_control_msgs::msg::MotorHealth & msg)
{
  return node_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_control_msgs::msg::MotorHealth>()
{
  return "node_control_msgs::msg::MotorHealth";
}

template<>
inline const char * name<node_control_msgs::msg::MotorHealth>()
{
  return "node_control_msgs/msg/MotorHealth";
}

template<>
struct has_fixed_size<node_control_msgs::msg::MotorHealth>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_control_msgs::msg::MotorHealth>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_control_msgs::msg::MotorHealth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__TRAITS_HPP_
