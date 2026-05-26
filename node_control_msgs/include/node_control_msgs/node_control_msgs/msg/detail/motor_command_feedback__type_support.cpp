// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from node_control_msgs:msg/MotorCommandFeedback.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "node_control_msgs/msg/detail/motor_command_feedback__struct.hpp"
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

void MotorCommandFeedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) node_control_msgs::msg::MotorCommandFeedback(_init);
}

void MotorCommandFeedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<node_control_msgs::msg::MotorCommandFeedback *>(message_memory);
  typed_message->~MotorCommandFeedback();
}

size_t size_function__MotorCommandFeedback__feedback(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<node_control_msgs::msg::MotorFeedback> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorCommandFeedback__feedback(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<node_control_msgs::msg::MotorFeedback> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorCommandFeedback__feedback(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<node_control_msgs::msg::MotorFeedback> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorCommandFeedback__feedback(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const node_control_msgs::msg::MotorFeedback *>(
    get_const_function__MotorCommandFeedback__feedback(untyped_member, index));
  auto & value = *reinterpret_cast<node_control_msgs::msg::MotorFeedback *>(untyped_value);
  value = item;
}

void assign_function__MotorCommandFeedback__feedback(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<node_control_msgs::msg::MotorFeedback *>(
    get_function__MotorCommandFeedback__feedback(untyped_member, index));
  const auto & value = *reinterpret_cast<const node_control_msgs::msg::MotorFeedback *>(untyped_value);
  item = value;
}

void resize_function__MotorCommandFeedback__feedback(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<node_control_msgs::msg::MotorFeedback> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorCommandFeedback_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorCommandFeedback, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "seq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorCommandFeedback, seq),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<node_control_msgs::msg::MotorFeedback>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs::msg::MotorCommandFeedback, feedback),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorCommandFeedback__feedback,  // size() function pointer
    get_const_function__MotorCommandFeedback__feedback,  // get_const(index) function pointer
    get_function__MotorCommandFeedback__feedback,  // get(index) function pointer
    fetch_function__MotorCommandFeedback__feedback,  // fetch(index, &value) function pointer
    assign_function__MotorCommandFeedback__feedback,  // assign(index, value) function pointer
    resize_function__MotorCommandFeedback__feedback  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorCommandFeedback_message_members = {
  "node_control_msgs::msg",  // message namespace
  "MotorCommandFeedback",  // message name
  3,  // number of fields
  sizeof(node_control_msgs::msg::MotorCommandFeedback),
  MotorCommandFeedback_message_member_array,  // message members
  MotorCommandFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorCommandFeedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorCommandFeedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorCommandFeedback_message_members,
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
get_message_type_support_handle<node_control_msgs::msg::MotorCommandFeedback>()
{
  return &::node_control_msgs::msg::rosidl_typesupport_introspection_cpp::MotorCommandFeedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_control_msgs, msg, MotorCommandFeedback)() {
  return &::node_control_msgs::msg::rosidl_typesupport_introspection_cpp::MotorCommandFeedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
