// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_control_msgs:msg/MotorConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_control_msgs/msg/detail/motor_config__rosidl_typesupport_introspection_c.h"
#include "node_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_control_msgs/msg/detail/motor_config__functions.h"
#include "node_control_msgs/msg/detail/motor_config__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `config`
#include "node_control_msgs/msg/motor_config_dev.h"
// Member `config`
#include "node_control_msgs/msg/detail/motor_config_dev__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_control_msgs__msg__MotorConfig__init(message_memory);
}

void node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_fini_function(void * message_memory)
{
  node_control_msgs__msg__MotorConfig__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs__msg__MotorConfig, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs__msg__MotorConfig, motor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs__msg__MotorConfig, config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_members = {
  "node_control_msgs__msg",  // message namespace
  "MotorConfig",  // message name
  3,  // number of fields
  sizeof(node_control_msgs__msg__MotorConfig),
  node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_member_array,  // message members
  node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_type_support_handle = {
  0,
  &node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, msg, MotorConfig)() {
  node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, msg, MotorConfigDev)();
  if (!node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_type_support_handle.typesupport_identifier) {
    node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_control_msgs__msg__MotorConfig__rosidl_typesupport_introspection_c__MotorConfig_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
