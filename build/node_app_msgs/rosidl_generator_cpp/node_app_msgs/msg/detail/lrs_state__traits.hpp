// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_app_msgs:msg/LrsState.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__TRAITS_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_app_msgs/msg/detail/lrs_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'motor_health_states'
#include "node_control_msgs/msg/detail/motor_health_state__traits.hpp"

namespace node_app_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LrsState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_state
  {
    out << "current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state, out);
    out << ", ";
  }

  // member: current_mode
  {
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
    out << ", ";
  }

  // member: current_action
  {
    out << "current_action: ";
    rosidl_generator_traits::value_to_yaml(msg.current_action, out);
    out << ", ";
  }

  // member: running_status
  {
    out << "running_status: ";
    rosidl_generator_traits::value_to_yaml(msg.running_status, out);
    out << ", ";
  }

  // member: motor_health
  {
    out << "motor_health: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_health, out);
    out << ", ";
  }

  // member: motor_health_states
  {
    if (msg.motor_health_states.size() == 0) {
      out << "motor_health_states: []";
    } else {
      out << "motor_health_states: [";
      size_t pending_items = msg.motor_health_states.size();
      for (auto item : msg.motor_health_states) {
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
  const LrsState & msg,
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

  // member: current_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.current_state, out);
    out << "\n";
  }

  // member: current_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
    out << "\n";
  }

  // member: current_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_action: ";
    rosidl_generator_traits::value_to_yaml(msg.current_action, out);
    out << "\n";
  }

  // member: running_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "running_status: ";
    rosidl_generator_traits::value_to_yaml(msg.running_status, out);
    out << "\n";
  }

  // member: motor_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_health: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_health, out);
    out << "\n";
  }

  // member: motor_health_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_health_states.size() == 0) {
      out << "motor_health_states: []\n";
    } else {
      out << "motor_health_states:\n";
      for (auto item : msg.motor_health_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LrsState & msg, bool use_flow_style = false)
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
  const node_app_msgs::msg::LrsState & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_app_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_app_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_app_msgs::msg::LrsState & msg)
{
  return node_app_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_app_msgs::msg::LrsState>()
{
  return "node_app_msgs::msg::LrsState";
}

template<>
inline const char * name<node_app_msgs::msg::LrsState>()
{
  return "node_app_msgs/msg/LrsState";
}

template<>
struct has_fixed_size<node_app_msgs::msg::LrsState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_app_msgs::msg::LrsState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_app_msgs::msg::LrsState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__TRAITS_HPP_
