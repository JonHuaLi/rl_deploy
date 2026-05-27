// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_control_msgs:msg/MotorConfigDev.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__TRAITS_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_control_msgs/msg/detail/motor_config_dev__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorConfigDev & msg,
  std::ostream & out)
{
  out << "{";
  // member: parameter_id
  {
    out << "parameter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parameter_id, out);
    out << ", ";
  }

  // member: parameter_value
  {
    out << "parameter_value: ";
    rosidl_generator_traits::value_to_yaml(msg.parameter_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorConfigDev & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parameter_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parameter_id, out);
    out << "\n";
  }

  // member: parameter_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameter_value: ";
    rosidl_generator_traits::value_to_yaml(msg.parameter_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorConfigDev & msg, bool use_flow_style = false)
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
  const node_control_msgs::msg::MotorConfigDev & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_control_msgs::msg::MotorConfigDev & msg)
{
  return node_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_control_msgs::msg::MotorConfigDev>()
{
  return "node_control_msgs::msg::MotorConfigDev";
}

template<>
inline const char * name<node_control_msgs::msg::MotorConfigDev>()
{
  return "node_control_msgs/msg/MotorConfigDev";
}

template<>
struct has_fixed_size<node_control_msgs::msg::MotorConfigDev>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_control_msgs::msg::MotorConfigDev>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_control_msgs::msg::MotorConfigDev>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__TRAITS_HPP_
