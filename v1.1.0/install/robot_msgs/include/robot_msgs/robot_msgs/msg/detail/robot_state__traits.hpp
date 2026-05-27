// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__traits.hpp"
// Member 'motor_feedback'
#include "node_control_msgs/msg/detail/motor_command_feedback__traits.hpp"

namespace robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: imu
  {
    out << "imu: ";
    to_flow_style_yaml(msg.imu, out);
    out << ", ";
  }

  // member: motor_feedback
  {
    out << "motor_feedback: ";
    to_flow_style_yaml(msg.motor_feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
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

  // member: imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu:\n";
    to_block_style_yaml(msg.imu, out, indentation + 2);
  }

  // member: motor_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_feedback:\n";
    to_block_style_yaml(msg.motor_feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
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

}  // namespace robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_msgs::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_msgs::msg::RobotState & msg)
{
  return robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msgs::msg::RobotState>()
{
  return "robot_msgs::msg::RobotState";
}

template<>
inline const char * name<robot_msgs::msg::RobotState>()
{
  return "robot_msgs/msg/RobotState";
}

template<>
struct has_fixed_size<robot_msgs::msg::RobotState>
  : std::integral_constant<bool, has_fixed_size<node_control_msgs::msg::MotorCommandFeedback>::value && has_fixed_size<sensor_msgs::msg::Imu>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<robot_msgs::msg::RobotState>
  : std::integral_constant<bool, has_bounded_size<node_control_msgs::msg::MotorCommandFeedback>::value && has_bounded_size<sensor_msgs::msg::Imu>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<robot_msgs::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
