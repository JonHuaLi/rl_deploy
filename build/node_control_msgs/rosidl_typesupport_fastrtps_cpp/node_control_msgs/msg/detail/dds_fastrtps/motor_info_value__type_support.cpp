// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from node_control_msgs:msg/MotorInfoValue.idl
// generated code does not contain a copyright notice
#include "node_control_msgs/msg/detail/motor_info_value__rosidl_typesupport_fastrtps_cpp.hpp"
#include "node_control_msgs/msg/detail/motor_info_value__struct.hpp"

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
  const node_control_msgs::msg::MotorInfoValue & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: startup_time_ms
  cdr << ros_message.startup_time_ms;
  // Member: sw_version
  {
    cdr << ros_message.sw_version;
  }
  // Member: hw_version
  {
    cdr << ros_message.hw_version;
  }
  // Member: joint_version
  {
    cdr << ros_message.joint_version;
  }
  // Member: state
  cdr << ros_message.state;
  // Member: serial_num
  cdr << ros_message.serial_num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  node_control_msgs::msg::MotorInfoValue & ros_message)
{
  // Member: startup_time_ms
  cdr >> ros_message.startup_time_ms;

  // Member: sw_version
  {
    cdr >> ros_message.sw_version;
  }

  // Member: hw_version
  {
    cdr >> ros_message.hw_version;
  }

  // Member: joint_version
  {
    cdr >> ros_message.joint_version;
  }

  // Member: state
  cdr >> ros_message.state;

  // Member: serial_num
  cdr >> ros_message.serial_num;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_control_msgs
get_serialized_size(
  const node_control_msgs::msg::MotorInfoValue & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: startup_time_ms
  {
    size_t item_size = sizeof(ros_message.startup_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sw_version
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.sw_version[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hw_version
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.hw_version[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_version
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.joint_version[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: serial_num
  {
    size_t item_size = sizeof(ros_message.serial_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_control_msgs
max_serialized_size_MotorInfoValue(
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


  // Member: startup_time_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sw_version
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hw_version
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_version
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: serial_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_control_msgs::msg::MotorInfoValue;
    is_plain =
      (
      offsetof(DataType, serial_num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MotorInfoValue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const node_control_msgs::msg::MotorInfoValue *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorInfoValue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<node_control_msgs::msg::MotorInfoValue *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorInfoValue__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const node_control_msgs::msg::MotorInfoValue *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorInfoValue__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorInfoValue(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorInfoValue__callbacks = {
  "node_control_msgs::msg",
  "MotorInfoValue",
  _MotorInfoValue__cdr_serialize,
  _MotorInfoValue__cdr_deserialize,
  _MotorInfoValue__get_serialized_size,
  _MotorInfoValue__max_serialized_size
};

static rosidl_message_type_support_t _MotorInfoValue__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorInfoValue__callbacks,
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
get_message_type_support_handle<node_control_msgs::msg::MotorInfoValue>()
{
  return &node_control_msgs::msg::typesupport_fastrtps_cpp::_MotorInfoValue__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_control_msgs, msg, MotorInfoValue)() {
  return &node_control_msgs::msg::typesupport_fastrtps_cpp::_MotorInfoValue__handle;
}

#ifdef __cplusplus
}
#endif
