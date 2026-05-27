// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_control_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_control_msgs/msg/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cmd'
#include "node_control_msgs/msg/detail/motor_command__traits.hpp"

namespace node_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: seq_num
  {
    out << "seq_num: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_num, out);
    out << ", ";
  }

  // member: cmd
  {
    if (msg.cmd.size() == 0) {
      out << "cmd: []";
    } else {
      out << "cmd: [";
      size_t pending_items = msg.cmd.size();
      for (auto item : msg.cmd) {
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
  const MotorControl & msg,
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

  // member: seq_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_num: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_num, out);
    out << "\n";
  }

  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cmd.size() == 0) {
      out << "cmd: []\n";
    } else {
      out << "cmd:\n";
      for (auto item : msg.cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorControl & msg, bool use_flow_style = false)
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
  const node_control_msgs::msg::MotorControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_control_msgs::msg::MotorControl & msg)
{
  return node_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_control_msgs::msg::MotorControl>()
{
  return "node_control_msgs::msg::MotorControl";
}

template<>
inline const char * name<node_control_msgs::msg::MotorControl>()
{
  return "node_control_msgs/msg/MotorControl";
}

template<>
struct has_fixed_size<node_control_msgs::msg::MotorControl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_control_msgs::msg::MotorControl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_control_msgs::msg::MotorControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_
