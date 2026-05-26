// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from node_driver_msgs:msg/Sensormsgcontrol.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "node_driver_msgs/msg/detail/sensormsgcontrol__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace node_driver_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Sensormsgcontrol_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) node_driver_msgs::msg::Sensormsgcontrol(_init);
}

void Sensormsgcontrol_fini_function(void * message_memory)
{
  auto typed_message = static_cast<node_driver_msgs::msg::Sensormsgcontrol *>(message_memory);
  typed_message->~Sensormsgcontrol();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sensormsgcontrol_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_driver_msgs::msg::Sensormsgcontrol, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_driver_msgs::msg::Sensormsgcontrol, sensor_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "control_command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_driver_msgs::msg::Sensormsgcontrol, control_command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sensormsgcontrol_message_members = {
  "node_driver_msgs::msg",  // message namespace
  "Sensormsgcontrol",  // message name
  3,  // number of fields
  sizeof(node_driver_msgs::msg::Sensormsgcontrol),
  Sensormsgcontrol_message_member_array,  // message members
  Sensormsgcontrol_init_function,  // function to initialize message memory (memory has to be allocated)
  Sensormsgcontrol_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sensormsgcontrol_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sensormsgcontrol_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace node_driver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<node_driver_msgs::msg::Sensormsgcontrol>()
{
  return &::node_driver_msgs::msg::rosidl_typesupport_introspection_cpp::Sensormsgcontrol_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_driver_msgs, msg, Sensormsgcontrol)() {
  return &::node_driver_msgs::msg::rosidl_typesupport_introspection_cpp::Sensormsgcontrol_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
