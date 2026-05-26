// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_control_msgs:msg/MotorHealthState.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__TRAITS_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_control_msgs/msg/detail/motor_health_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorHealthState & msg,
  std::ostream & out)
{
  out << "{";
  // member: health
  {
    out << "health: ";
    rosidl_generator_traits::value_to_yaml(msg.health, out);
    out << ", ";
  }

  // member: motor_direction
  {
    out << "motor_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_direction, out);
    out << ", ";
  }

  // member: motor_temperature
  {
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << ", ";
  }

  // member: mos_temperature
  {
    out << "mos_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mos_temperature, out);
    out << ", ";
  }

  // member: bus_voltage
  {
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << ", ";
  }

  // member: u1_online
  {
    out << "u1_online: ";
    rosidl_generator_traits::value_to_yaml(msg.u1_online, out);
    out << ", ";
  }

  // member: position_zero
  {
    out << "position_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.position_zero, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorHealthState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health: ";
    rosidl_generator_traits::value_to_yaml(msg.health, out);
    out << "\n";
  }

  // member: motor_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_direction, out);
    out << "\n";
  }

  // member: motor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << "\n";
  }

  // member: mos_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mos_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mos_temperature, out);
    out << "\n";
  }

  // member: bus_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << "\n";
  }

  // member: u1_online
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u1_online: ";
    rosidl_generator_traits::value_to_yaml(msg.u1_online, out);
    out << "\n";
  }

  // member: position_zero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.position_zero, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorHealthState & msg, bool use_flow_style = false)
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
  const node_control_msgs::msg::MotorHealthState & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_control_msgs::msg::MotorHealthState & msg)
{
  return node_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_control_msgs::msg::MotorHealthState>()
{
  return "node_control_msgs::msg::MotorHealthState";
}

template<>
inline const char * name<node_control_msgs::msg::MotorHealthState>()
{
  return "node_control_msgs/msg/MotorHealthState";
}

template<>
struct has_fixed_size<node_control_msgs::msg::MotorHealthState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_control_msgs::msg::MotorHealthState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_control_msgs::msg::MotorHealthState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__TRAITS_HPP_
