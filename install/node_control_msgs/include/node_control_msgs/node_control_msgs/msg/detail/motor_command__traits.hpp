// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_control_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_control_msgs/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << ", ";
  }

  // member: position_des
  {
    out << "position_des: ";
    rosidl_generator_traits::value_to_yaml(msg.position_des, out);
    out << ", ";
  }

  // member: omega_des
  {
    out << "omega_des: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_des, out);
    out << ", ";
  }

  // member: torque_des
  {
    out << "torque_des: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_des, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }

  // member: position_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_des: ";
    rosidl_generator_traits::value_to_yaml(msg.position_des, out);
    out << "\n";
  }

  // member: omega_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega_des: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_des, out);
    out << "\n";
  }

  // member: torque_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_des: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_des, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCommand & msg, bool use_flow_style = false)
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
  const node_control_msgs::msg::MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_control_msgs::msg::MotorCommand & msg)
{
  return node_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_control_msgs::msg::MotorCommand>()
{
  return "node_control_msgs::msg::MotorCommand";
}

template<>
inline const char * name<node_control_msgs::msg::MotorCommand>()
{
  return "node_control_msgs/msg/MotorCommand";
}

template<>
struct has_fixed_size<node_control_msgs::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_control_msgs::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_control_msgs::msg::MotorCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
