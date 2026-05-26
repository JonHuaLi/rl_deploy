// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from node_control_msgs:msg/MotorHealth.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "node_control_msgs/msg/detail/motor_health__struct.hpp"
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

void MotorHealth_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) node_control_msgs::msg::MotorHealth(_init);
}

void MotorHealth_fini_function(void * message_memory)
{
  auto typed_message = static_cast<node_control_msgs::msg::MotorHealth *>(message_memory);
  typed_message->~MotorHealth();
}

size_t size_function__MotorHealth__state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<node_control_msgs::msg::MotorHealthState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorHealth__state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<node_control_msgs::msg::MotorHealthState> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorHealth__state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<node_control_msgs::msg::MotorHealthState> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorHealth__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const node_control_msgs::msg::MotorHealthState *>(
    get_const_function__MotorHealth__state(untyped_member, index));
  auto & value = *reinterpret_cast<node_control_msgs::msg::MotorHealthState *>(untyped_value);
  value = item;
}

void assign_function__MotorHealth__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<node_control_msgs::msg::MotorHealthState *>(
    get_function__MotorHealth__state(untyped_member, index));
  const auto & value = *reinterpret_cast<const node_control_msgs::msg::MotorHealthState *>(untyped_value);
  item = value;
}

void resize_function__MotorHealth__state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<node_control_msgs::msg::MotorHealthState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorHealth_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorHealth, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<node_control_msgs::msg::MotorHealthState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorHealth, state),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorHealth__state,  // size() function pointer
    get_const_function__MotorHealth__state,  // get_const(index) function pointer
    get_function__MotorHealth__state,  // get(index) function pointer
    fetch_function__MotorHealth__state,  // fetch(index, &value) function pointer
    assign_function__MotorHealth__state,  // assign(index, value) function pointer
    resize_function__MotorHealth__state  // resize(index) function pointer
  },
  {
    "state_all",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<node_control_msgs::msg::MotorHealthState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorHealth, state_all),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorHealth_message_members = {
  "node_control_msgs::msg",  // message namespace
  "MotorHealth",  // message name
  3,  // number of fields
  sizeof(node_control_msgs::msg::MotorHealth),
  MotorHealth_message_member_array,  // message members
  MotorHealth_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorHealth_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorHealth_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorHealth_message_members,
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
get_message_type_support_handle<node_control_msgs::msg::MotorHealth>()
{
  return &::node_control_msgs::msg::rosidl_typesupport_introspection_cpp::MotorHealth_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_control_msgs, msg, MotorHealth)() {
  return &::node_control_msgs::msg::rosidl_typesupport_introspection_cpp::MotorHealth_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
