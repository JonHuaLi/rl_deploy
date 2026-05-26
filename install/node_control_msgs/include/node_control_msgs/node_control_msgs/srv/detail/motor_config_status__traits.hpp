// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_control_msgs:srv/MotorConfigStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__TRAITS_HPP_
#define NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_control_msgs/srv/detail/motor_config_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorConfigStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorConfigStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorConfigStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace node_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use node_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_control_msgs::srv::MotorConfigStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_control_msgs::srv::MotorConfigStatus_Request & msg)
{
  return node_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_control_msgs::srv::MotorConfigStatus_Request>()
{
  return "node_control_msgs::srv::MotorConfigStatus_Request";
}

template<>
inline const char * name<node_control_msgs::srv::MotorConfigStatus_Request>()
{
  return "node_control_msgs/srv/MotorConfigStatus_Request";
}

template<>
struct has_fixed_size<node_control_msgs::srv::MotorConfigStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_control_msgs::srv::MotorConfigStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_control_msgs::srv::MotorConfigStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'config'
#include "node_control_msgs/msg/detail/motor_config_dev__traits.hpp"

namespace node_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorConfigStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: config
  {
    if (msg.config.size() == 0) {
      out << "config: []";
    } else {
      out << "config: [";
      size_t pending_items = msg.config.size();
      for (auto item : msg.config) {
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
  const MotorConfigStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.config.size() == 0) {
      out << "config: []\n";
    } else {
      out << "config:\n";
      for (auto item : msg.config) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorConfigStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace node_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use node_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_control_msgs::srv::MotorConfigStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_control_msgs::srv::MotorConfigStatus_Response & msg)
{
  return node_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_control_msgs::srv::MotorConfigStatus_Response>()
{
  return "node_control_msgs::srv::MotorConfigStatus_Response";
}

template<>
inline const char * name<node_control_msgs::srv::MotorConfigStatus_Response>()
{
  return "node_control_msgs/srv/MotorConfigStatus_Response";
}

template<>
struct has_fixed_size<node_control_msgs::srv::MotorConfigStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_control_msgs::srv::MotorConfigStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_control_msgs::srv::MotorConfigStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_control_msgs::srv::MotorConfigStatus>()
{
  return "node_control_msgs::srv::MotorConfigStatus";
}

template<>
inline const char * name<node_control_msgs::srv::MotorConfigStatus>()
{
  return "node_control_msgs/srv/MotorConfigStatus";
}

template<>
struct has_fixed_size<node_control_msgs::srv::MotorConfigStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<node_control_msgs::srv::MotorConfigStatus_Request>::value &&
    has_fixed_size<node_control_msgs::srv::MotorConfigStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_control_msgs::srv::MotorConfigStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<node_control_msgs::srv::MotorConfigStatus_Request>::value &&
    has_bounded_size<node_control_msgs::srv::MotorConfigStatus_Response>::value
  >
{
};

template<>
struct is_service<node_control_msgs::srv::MotorConfigStatus>
  : std::true_type
{
};

template<>
struct is_service_request<node_control_msgs::srv::MotorConfigStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_control_msgs::srv::MotorConfigStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__TRAITS_HPP_
