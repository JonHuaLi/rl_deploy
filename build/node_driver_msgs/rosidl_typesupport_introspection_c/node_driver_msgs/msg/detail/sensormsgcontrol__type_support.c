// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_driver_msgs:msg/Sensormsgcontrol.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_driver_msgs/msg/detail/sensormsgcontrol__rosidl_typesupport_introspection_c.h"
#include "node_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_driver_msgs/msg/detail/sensormsgcontrol__functions.h"
#include "node_driver_msgs/msg/detail/sensormsgcontrol__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_driver_msgs__msg__Sensormsgcontrol__init(message_memory);
}

void node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_fini_function(void * message_memory)
{
  node_driver_msgs__msg__Sensormsgcontrol__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_driver_msgs__msg__Sensormsgcontrol, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_driver_msgs__msg__Sensormsgcontrol, sensor_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_driver_msgs__msg__Sensormsgcontrol, control_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_message_members = {
  "node_driver_msgs__msg",  // message namespace
  "Sensormsgcontrol",  // message name
  3,  // number of fields
  sizeof(node_driver_msgs__msg__Sensormsgcontrol),
  node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_message_member_array,  // message members
  node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_init_function,  // function to initialize message memory (memory has to be allocated)
  node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_message_type_support_handle = {
  0,
  &node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_driver_msgs, msg, Sensormsgcontrol)() {
  node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_message_type_support_handle.typesupport_identifier) {
    node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_driver_msgs__msg__Sensormsgcontrol__rosidl_typesupport_introspection_c__Sensormsgcontrol_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
