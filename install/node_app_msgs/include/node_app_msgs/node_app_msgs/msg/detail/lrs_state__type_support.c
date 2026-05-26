// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_app_msgs:msg/LrsState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_app_msgs/msg/detail/lrs_state__rosidl_typesupport_introspection_c.h"
#include "node_app_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_app_msgs/msg/detail/lrs_state__functions.h"
#include "node_app_msgs/msg/detail/lrs_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `current_state`
// Member `current_mode`
// Member `current_action`
// Member `running_status`
// Member `motor_health`
#include "rosidl_runtime_c/string_functions.h"
// Member `motor_health_states`
#include "node_control_msgs/msg/motor_health_state.h"
// Member `motor_health_states`
#include "node_control_msgs/msg/detail/motor_health_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_app_msgs__msg__LrsState__init(message_memory);
}

void node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_fini_function(void * message_memory)
{
  node_app_msgs__msg__LrsState__fini(message_memory);
}

size_t node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__size_function__LrsState__motor_health_states(
  const void * untyped_member)
{
  const node_control_msgs__msg__MotorHealthState__Sequence * member =
    (const node_control_msgs__msg__MotorHealthState__Sequence *)(untyped_member);
  return member->size;
}

const void * node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__get_const_function__LrsState__motor_health_states(
  const void * untyped_member, size_t index)
{
  const node_control_msgs__msg__MotorHealthState__Sequence * member =
    (const node_control_msgs__msg__MotorHealthState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__get_function__LrsState__motor_health_states(
  void * untyped_member, size_t index)
{
  node_control_msgs__msg__MotorHealthState__Sequence * member =
    (node_control_msgs__msg__MotorHealthState__Sequence *)(untyped_member);
  return &member->data[index];
}

void node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__fetch_function__LrsState__motor_health_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const node_control_msgs__msg__MotorHealthState * item =
    ((const node_control_msgs__msg__MotorHealthState *)
    node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__get_const_function__LrsState__motor_health_states(untyped_member, index));
  node_control_msgs__msg__MotorHealthState * value =
    (node_control_msgs__msg__MotorHealthState *)(untyped_value);
  *value = *item;
}

void node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__assign_function__LrsState__motor_health_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  node_control_msgs__msg__MotorHealthState * item =
    ((node_control_msgs__msg__MotorHealthState *)
    node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__get_function__LrsState__motor_health_states(untyped_member, index));
  const node_control_msgs__msg__MotorHealthState * value =
    (const node_control_msgs__msg__MotorHealthState *)(untyped_value);
  *item = *value;
}

bool node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__resize_function__LrsState__motor_health_states(
  void * untyped_member, size_t size)
{
  node_control_msgs__msg__MotorHealthState__Sequence * member =
    (node_control_msgs__msg__MotorHealthState__Sequence *)(untyped_member);
  node_control_msgs__msg__MotorHealthState__Sequence__fini(member);
  return node_control_msgs__msg__MotorHealthState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__LrsState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__LrsState, current_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__LrsState, current_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__LrsState, current_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "running_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__LrsState, running_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_health",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__LrsState, motor_health),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_health_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_app_msgs__msg__LrsState, motor_health_states),  // bytes offset in struct
    NULL,  // default value
    node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__size_function__LrsState__motor_health_states,  // size() function pointer
    node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__get_const_function__LrsState__motor_health_states,  // get_const(index) function pointer
    node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__get_function__LrsState__motor_health_states,  // get(index) function pointer
    node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__fetch_function__LrsState__motor_health_states,  // fetch(index, &value) function pointer
    node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__assign_function__LrsState__motor_health_states,  // assign(index, value) function pointer
    node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__resize_function__LrsState__motor_health_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_members = {
  "node_app_msgs__msg",  // message namespace
  "LrsState",  // message name
  7,  // number of fields
  sizeof(node_app_msgs__msg__LrsState),
  node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_member_array,  // message members
  node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_init_function,  // function to initialize message memory (memory has to be allocated)
  node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_type_support_handle = {
  0,
  &node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_app_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_app_msgs, msg, LrsState)() {
  node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, msg, MotorHealthState)();
  if (!node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_type_support_handle.typesupport_identifier) {
    node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_app_msgs__msg__LrsState__rosidl_typesupport_introspection_c__LrsState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
