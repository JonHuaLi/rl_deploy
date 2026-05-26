// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_app_msgs:msg/IotCmdMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_app_msgs/msg/detail/iot_cmd_msg__rosidl_typesupport_introspection_c.h"
#include "node_app_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_app_msgs/msg/detail/iot_cmd_msg__functions.h"
#include "node_app_msgs/msg/detail/iot_cmd_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `category`
// Member `fun_name`
// Member `sub`
// Member `param`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_app_msgs__msg__IotCmdMsg__init(message_memory);
}

void node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_fini_function(void * message_memory)
{
  node_app_msgs__msg__IotCmdMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__IotCmdMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "category",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__IotCmdMsg, category),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fun_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__IotCmdMsg, fun_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sub",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__IotCmdMsg, sub),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "param",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__IotCmdMsg, param),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_message_members = {
  "node_app_msgs__msg",  // message namespace
  "IotCmdMsg",  // message name
  5,  // number of fields
  sizeof(node_app_msgs__msg__IotCmdMsg),
  node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_message_member_array,  // message members
  node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_message_type_support_handle = {
  0,
  &node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_app_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_app_msgs, msg, IotCmdMsg)() {
  node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_message_type_support_handle.typesupport_identifier) {
    node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_app_msgs__msg__IotCmdMsg__rosidl_typesupport_introspection_c__IotCmdMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
