// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from node_control_msgs:msg/MotorHealthState.idl
// generated code does not contain a copyright notice
#include "node_control_msgs/msg/detail/motor_health_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "node_control_msgs/msg/detail/motor_health_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace node_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_control_msgs
cdr_serialize(
  const node_control_msgs::msg::MotorHealthState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: health
  cdr << ros_message.health;
  // Member: motor_direction
  cdr << ros_message.motor_direction;
  // Member: motor_temperature
  cdr << ros_message.motor_temperature;
  // Member: mos_temperature
  cdr << ros_message.mos_temperature;
  // Member: bus_voltage
  cdr << ros_message.bus_voltage;
  // Member: u1_online
  cdr << ros_message.u1_online;
  // Member: position_zero
  cdr << ros_message.position_zero;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  node_control_msgs::msg::MotorHealthState & ros_message)
{
  // Member: health
  cdr >> ros_message.health;

  // Member: motor_direction
  cdr >> ros_message.motor_direction;

  // Member: motor_temperature
  cdr >> ros_message.motor_temperature;

  // Member: mos_temperature
  cdr >> ros_message.mos_temperature;

  // Member: bus_voltage
  cdr >> ros_message.bus_voltage;

  // Member: u1_online
  cdr >> ros_message.u1_online;

  // Member: position_zero
  cdr >> ros_message.position_zero;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_control_msgs
get_serialized_size(
  const node_control_msgs::msg::MotorHealthState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: health
  {
    size_t item_size = sizeof(ros_message.health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_direction
  {
    size_t item_size = sizeof(ros_message.motor_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_temperature
  {
    size_t item_size = sizeof(ros_message.motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mos_temperature
  {
    size_t item_size = sizeof(ros_message.mos_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bus_voltage
  {
    size_t item_size = sizeof(ros_message.bus_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: u1_online
  {
    size_t item_size = sizeof(ros_message.u1_online);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_zero
  {
    size_t item_size = sizeof(ros_message.position_zero);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_control_msgs
max_serialized_size_MotorHealthState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: health
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: motor_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mos_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bus_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: u1_online
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_zero
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_control_msgs::msg::MotorHealthState;
    is_plain =
      (
      offsetof(DataType, position_zero) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MotorHealthState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const node_control_msgs::msg::MotorHealthState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorHealthState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<node_control_msgs::msg::MotorHealthState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorHealthState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const node_control_msgs::msg::MotorHealthState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorHealthState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorHealthState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorHealthState__callbacks = {
  "node_control_msgs::msg",
  "MotorHealthState",
  _MotorHealthState__cdr_serialize,
  _MotorHealthState__cdr_deserialize,
  _MotorHealthState__get_serialized_size,
  _MotorHealthState__max_serialized_size
};

static rosidl_message_type_support_t _MotorHealthState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorHealthState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace node_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_node_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<node_control_msgs::msg::MotorHealthState>()
{
  return &node_control_msgs::msg::typesupport_fastrtps_cpp::_MotorHealthState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_control_msgs, msg, MotorHealthState)() {
  return &node_control_msgs::msg::typesupport_fastrtps_cpp::_MotorHealthState__handle;
}

#ifdef __cplusplus
}
#endif
