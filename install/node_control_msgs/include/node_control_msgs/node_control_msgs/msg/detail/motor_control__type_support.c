// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_control_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_control_msgs/msg/detail/motor_control__rosidl_typesupport_introspection_c.h"
#include "node_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_control_msgs/msg/detail/motor_control__functions.h"
#include "node_control_msgs/msg/detail/motor_control__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cmd`
#include "node_control_msgs/msg/motor_command.h"
// Member `cmd`
#include "node_control_msgs/msg/detail/motor_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_control_msgs__msg__MotorControl__init(message_memory);
}

void node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_fini_function(void * message_memory)
{
  node_control_msgs__msg__MotorControl__fini(message_memory);
}

size_t node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__size_function__MotorControl__cmd(
  const void * untyped_member)
{
  const node_control_msgs__msg__MotorCommand__Sequence * member =
    (const node_control_msgs__msg__MotorCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__get_const_function__MotorControl__cmd(
  const void * untyped_member, size_t index)
{
  const node_control_msgs__msg__MotorCommand__Sequence * member =
    (const node_control_msgs__msg__MotorCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__get_function__MotorControl__cmd(
  void * untyped_member, size_t index)
{
  node_control_msgs__msg__MotorCommand__Sequence * member =
    (node_control_msgs__msg__MotorCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__fetch_function__MotorControl__cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const node_control_msgs__msg__MotorCommand * item =
    ((const node_control_msgs__msg__MotorCommand *)
    node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__get_const_function__MotorControl__cmd(untyped_member, index));
  node_control_msgs__msg__MotorCommand * value =
    (node_control_msgs__msg__MotorCommand *)(untyped_value);
  *value = *item;
}

void node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__assign_function__MotorControl__cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  node_control_msgs__msg__MotorCommand * item =
    ((node_control_msgs__msg__MotorCommand *)
    node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__get_function__MotorControl__cmd(untyped_member, index));
  const node_control_msgs__msg__MotorCommand * value =
    (const node_control_msgs__msg__MotorCommand *)(untyped_value);
  *item = *value;
}

bool node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__resize_function__MotorControl__cmd(
  void * untyped_member, size_t size)
{
  node_control_msgs__msg__MotorCommand__Sequence * member =
    (node_control_msgs__msg__MotorCommand__Sequence *)(untyped_member);
  node_control_msgs__msg__MotorCommand__Sequence__fini(member);
  return node_control_msgs__msg__MotorCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs__msg__MotorControl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seq_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs__msg__MotorControl, seq_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs__msg__MotorControl, cmd),  // bytes offset in struct
    NULL,  // default value
    node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__size_function__MotorControl__cmd,  // size() function pointer
    node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__get_const_function__MotorControl__cmd,  // get_const(index) function pointer
    node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__get_function__MotorControl__cmd,  // get(index) function pointer
    node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__fetch_function__MotorControl__cmd,  // fetch(index, &value) function pointer
    node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__assign_function__MotorControl__cmd,  // assign(index, value) function pointer
    node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__resize_function__MotorControl__cmd  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_members = {
  "node_control_msgs__msg",  // message namespace
  "MotorControl",  // message name
  3,  // number of fields
  sizeof(node_control_msgs__msg__MotorControl),
  node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_member_array,  // message members
  node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_init_function,  // function to initialize message memory (memory has to be allocated)
  node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_type_support_handle = {
  0,
  &node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, msg, MotorControl)() {
  node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, msg, MotorCommand)();
  if (!node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_type_support_handle.typesupport_identifier) {
    node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_control_msgs__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
