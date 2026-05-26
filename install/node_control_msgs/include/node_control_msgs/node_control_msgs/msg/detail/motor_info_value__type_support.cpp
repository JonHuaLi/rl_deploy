// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from node_control_msgs:msg/MotorInfoValue.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "node_control_msgs/msg/detail/motor_info_value__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace node_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorInfoValue_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) node_control_msgs::msg::MotorInfoValue(_init);
}

void MotorInfoValue_fini_function(void * message_memory)
{
  auto typed_message = static_cast<node_control_msgs::msg::MotorInfoValue *>(message_memory);
  typed_message->~MotorInfoValue();
}

size_t size_function__MotorInfoValue__sw_version(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MotorInfoValue__sw_version(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorInfoValue__sw_version(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorInfoValue__sw_version(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MotorInfoValue__sw_version(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MotorInfoValue__sw_version(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MotorInfoValue__sw_version(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__MotorInfoValue__hw_version(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MotorInfoValue__hw_version(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorInfoValue__hw_version(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorInfoValue__hw_version(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MotorInfoValue__hw_version(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MotorInfoValue__hw_version(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MotorInfoValue__hw_version(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__MotorInfoValue__joint_version(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MotorInfoValue__joint_version(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorInfoValue__joint_version(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorInfoValue__joint_version(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MotorInfoValue__joint_version(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MotorInfoValue__joint_version(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MotorInfoValue__joint_version(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorInfoValue_message_member_array[6] = {
  {
    "startup_time_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorInfoValue, startup_time_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sw_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorInfoValue, sw_version),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorInfoValue__sw_version,  // size() function pointer
    get_const_function__MotorInfoValue__sw_version,  // get_const(index) function pointer
    get_function__MotorInfoValue__sw_version,  // get(index) function pointer
    fetch_function__MotorInfoValue__sw_version,  // fetch(index, &value) function pointer
    assign_function__MotorInfoValue__sw_version,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hw_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorInfoValue, hw_version),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorInfoValue__hw_version,  // size() function pointer
    get_const_function__MotorInfoValue__hw_version,  // get_const(index) function pointer
    get_function__MotorInfoValue__hw_version,  // get(index) function pointer
    fetch_function__MotorInfoValue__hw_version,  // fetch(index, &value) function pointer
    assign_function__MotorInfoValue__hw_version,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorInfoValue, joint_version),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorInfoValue__joint_version,  // size() function pointer
    get_const_function__MotorInfoValue__joint_version,  // get_const(index) function pointer
    get_function__MotorInfoValue__joint_version,  // get(index) function pointer
    fetch_function__MotorInfoValue__joint_version,  // fetch(index, &value) function pointer
    assign_function__MotorInfoValue__joint_version,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorInfoValue, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "serial_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorInfoValue, serial_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorInfoValue_message_members = {
  "node_control_msgs::msg",  // message namespace
  "MotorInfoValue",  // message name
  6,  // number of fields
  sizeof(node_control_msgs::msg::MotorInfoValue),
  MotorInfoValue_message_member_array,  // message members
  MotorInfoValue_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorInfoValue_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorInfoValue_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorInfoValue_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace node_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<node_control_msgs::msg::MotorInfoValue>()
{
  return &::node_control_msgs::msg::rosidl_typesupport_introspection_cpp::MotorInfoValue_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_control_msgs, msg, MotorInfoValue)() {
  return &::node_control_msgs::msg::rosidl_typesupport_introspection_cpp::MotorInfoValue_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
