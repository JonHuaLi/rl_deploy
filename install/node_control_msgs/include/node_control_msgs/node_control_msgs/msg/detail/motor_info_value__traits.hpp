// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_control_msgs:msg/MotorInfoValue.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__TRAITS_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_control_msgs/msg/detail/motor_info_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorInfoValue & msg,
  std::ostream & out)
{
  out << "{";
  // member: startup_time_ms
  {
    out << "startup_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.startup_time_ms, out);
    out << ", ";
  }

  // member: sw_version
  {
    if (msg.sw_version.size() == 0) {
      out << "sw_version: []";
    } else {
      out << "sw_version: [";
      size_t pending_items = msg.sw_version.size();
      for (auto item : msg.sw_version) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hw_version
  {
    if (msg.hw_version.size() == 0) {
      out << "hw_version: []";
    } else {
      out << "hw_version: [";
      size_t pending_items = msg.hw_version.size();
      for (auto item : msg.hw_version) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_version
  {
    if (msg.joint_version.size() == 0) {
      out << "joint_version: []";
    } else {
      out << "joint_version: [";
      size_t pending_items = msg.joint_version.size();
      for (auto item : msg.joint_version) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: serial_num
  {
    out << "serial_num: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorInfoValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: startup_time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startup_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.startup_time_ms, out);
    out << "\n";
  }

  // member: sw_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sw_version.size() == 0) {
      out << "sw_version: []\n";
    } else {
      out << "sw_version:\n";
      for (auto item : msg.sw_version) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hw_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hw_version.size() == 0) {
      out << "hw_version: []\n";
    } else {
      out << "hw_version:\n";
      for (auto item : msg.hw_version) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_version.size() == 0) {
      out << "joint_version: []\n";
    } else {
      out << "joint_version:\n";
      for (auto item : msg.joint_version) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: serial_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_num: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorInfoValue & msg, bool use_flow_style = false)
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
  const node_control_msgs::msg::MotorInfoValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_control_msgs::msg::MotorInfoValue & msg)
{
  return node_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_control_msgs::msg::MotorInfoValue>()
{
  return "node_control_msgs::msg::MotorInfoValue";
}

template<>
inline const char * name<node_control_msgs::msg::MotorInfoValue>()
{
  return "node_control_msgs/msg/MotorInfoValue";
}

template<>
struct has_fixed_size<node_control_msgs::msg::MotorInfoValue>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_control_msgs::msg::MotorInfoValue>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_control_msgs::msg::MotorInfoValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__TRAITS_HPP_
