// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_driver_msgs:msg/Sensormsgstate.idl
// generated code does not contain a copyright notice

#ifndef NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGSTATE__TRAITS_HPP_
#define NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGSTATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_driver_msgs/msg/detail/sensormsgstate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace node_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sensormsgstate & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_type
  {
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
    out << ", ";
  }

  // member: sensor_state
  {
    out << "sensor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_state, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sensormsgstate & msg,
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

  // member: sensor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
    out << "\n";
  }

  // member: sensor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_state, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sensormsgstate & msg, bool use_flow_style = false)
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

}  // namespace node_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use node_driver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_driver_msgs::msg::Sensormsgstate & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_driver_msgs::msg::Sensormsgstate & msg)
{
  return node_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_driver_msgs::msg::Sensormsgstate>()
{
  return "node_driver_msgs::msg::Sensormsgstate";
}

template<>
inline const char * name<node_driver_msgs::msg::Sensormsgstate>()
{
  return "node_driver_msgs/msg/Sensormsgstate";
}

template<>
struct has_fixed_size<node_driver_msgs::msg::Sensormsgstate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_driver_msgs::msg::Sensormsgstate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_driver_msgs::msg::Sensormsgstate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGSTATE__TRAITS_HPP_
