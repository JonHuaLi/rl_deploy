// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_control_msgs:srv/MotorConfigStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_control_msgs/srv/detail/motor_config_status__rosidl_typesupport_introspection_c.h"
#include "node_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_control_msgs/srv/detail/motor_config_status__functions.h"
#include "node_control_msgs/srv/detail/motor_config_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_control_msgs__srv__MotorConfigStatus_Request__init(message_memory);
}

void node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_fini_function(void * message_memory)
{
  node_control_msgs__srv__MotorConfigStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_message_member_array[1] = {
  {
    "motor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs__srv__MotorConfigStatus_Request, motor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_message_members = {
  "node_control_msgs__srv",  // message namespace
  "MotorConfigStatus_Request",  // message name
  1,  // number of fields
  sizeof(node_control_msgs__srv__MotorConfigStatus_Request),
  node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_message_member_array,  // message members
  node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_message_type_support_handle = {
  0,
  &node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, srv, MotorConfigStatus_Request)() {
  if (!node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_message_type_support_handle.typesupport_identifier) {
    node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_control_msgs__srv__MotorConfigStatus_Request__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "node_control_msgs/srv/detail/motor_config_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "node_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "node_control_msgs/srv/detail/motor_config_status__functions.h"
// already included above
// #include "node_control_msgs/srv/detail/motor_config_status__struct.h"


// Include directives for member types
// Member `config`
#include "node_control_msgs/msg/motor_config_dev.h"
// Member `config`
#include "node_control_msgs/msg/detail/motor_config_dev__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_control_msgs__srv__MotorConfigStatus_Response__init(message_memory);
}

void node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_fini_function(void * message_memory)
{
  node_control_msgs__srv__MotorConfigStatus_Response__fini(message_memory);
}

size_t node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__size_function__MotorConfigStatus_Response__config(
  const void * untyped_member)
{
  const node_control_msgs__msg__MotorConfigDev__Sequence * member =
    (const node_control_msgs__msg__MotorConfigDev__Sequence *)(untyped_member);
  return member->size;
}

const void * node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__get_const_function__MotorConfigStatus_Response__config(
  const void * untyped_member, size_t index)
{
  const node_control_msgs__msg__MotorConfigDev__Sequence * member =
    (const node_control_msgs__msg__MotorConfigDev__Sequence *)(untyped_member);
  return &member->data[index];
}

void * node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__get_function__MotorConfigStatus_Response__config(
  void * untyped_member, size_t index)
{
  node_control_msgs__msg__MotorConfigDev__Sequence * member =
    (node_control_msgs__msg__MotorConfigDev__Sequence *)(untyped_member);
  return &member->data[index];
}

void node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__fetch_function__MotorConfigStatus_Response__config(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const node_control_msgs__msg__MotorConfigDev * item =
    ((const node_control_msgs__msg__MotorConfigDev *)
    node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__get_const_function__MotorConfigStatus_Response__config(untyped_member, index));
  node_control_msgs__msg__MotorConfigDev * value =
    (node_control_msgs__msg__MotorConfigDev *)(untyped_value);
  *value = *item;
}

void node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__assign_function__MotorConfigStatus_Response__config(
  void * untyped_member, size_t index, const void * untyped_value)
{
  node_control_msgs__msg__MotorConfigDev * item =
    ((node_control_msgs__msg__MotorConfigDev *)
    node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__get_function__MotorConfigStatus_Response__config(untyped_member, index));
  const node_control_msgs__msg__MotorConfigDev * value =
    (const node_control_msgs__msg__MotorConfigDev *)(untyped_value);
  *item = *value;
}

bool node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__resize_function__MotorConfigStatus_Response__config(
  void * untyped_member, size_t size)
{
  node_control_msgs__msg__MotorConfigDev__Sequence * member =
    (node_control_msgs__msg__MotorConfigDev__Sequence *)(untyped_member);
  node_control_msgs__msg__MotorConfigDev__Sequence__fini(member);
  return node_control_msgs__msg__MotorConfigDev__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_member_array[1] = {
  {
    "config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_control_msgs__srv__MotorConfigStatus_Response, config),  // bytes offset in struct
    NULL,  // default value
    node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__size_function__MotorConfigStatus_Response__config,  // size() function pointer
    node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__get_const_function__MotorConfigStatus_Response__config,  // get_const(index) function pointer
    node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__get_function__MotorConfigStatus_Response__config,  // get(index) function pointer
    node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__fetch_function__MotorConfigStatus_Response__config,  // fetch(index, &value) function pointer
    node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__assign_function__MotorConfigStatus_Response__config,  // assign(index, value) function pointer
    node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__resize_function__MotorConfigStatus_Response__config  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_members = {
  "node_control_msgs__srv",  // message namespace
  "MotorConfigStatus_Response",  // message name
  1,  // number of fields
  sizeof(node_control_msgs__srv__MotorConfigStatus_Response),
  node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_member_array,  // message members
  node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_type_support_handle = {
  0,
  &node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, srv, MotorConfigStatus_Response)() {
  node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, msg, MotorConfigDev)();
  if (!node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_type_support_handle.typesupport_identifier) {
    node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_control_msgs__srv__MotorConfigStatus_Response__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "node_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "node_control_msgs/srv/detail/motor_config_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers node_control_msgs__srv__detail__motor_config_status__rosidl_typesupport_introspection_c__MotorConfigStatus_service_members = {
  "node_control_msgs__srv",  // service namespace
  "MotorConfigStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // node_control_msgs__srv__detail__motor_config_status__rosidl_typesupport_introspection_c__MotorConfigStatus_Request_message_type_support_handle,
  NULL  // response message
  // node_control_msgs__srv__detail__motor_config_status__rosidl_typesupport_introspection_c__MotorConfigStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t node_control_msgs__srv__detail__motor_config_status__rosidl_typesupport_introspection_c__MotorConfigStatus_service_type_support_handle = {
  0,
  &node_control_msgs__srv__detail__motor_config_status__rosidl_typesupport_introspection_c__MotorConfigStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, srv, MotorConfigStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, srv, MotorConfigStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, srv, MotorConfigStatus)() {
  if (!node_control_msgs__srv__detail__motor_config_status__rosidl_typesupport_introspection_c__MotorConfigStatus_service_type_support_handle.typesupport_identifier) {
    node_control_msgs__srv__detail__motor_config_status__rosidl_typesupport_introspection_c__MotorConfigStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)node_control_msgs__srv__detail__motor_config_status__rosidl_typesupport_introspection_c__MotorConfigStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, srv, MotorConfigStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_control_msgs, srv, MotorConfigStatus_Response)()->data;
  }

  return &node_control_msgs__srv__detail__motor_config_status__rosidl_typesupport_introspection_c__MotorConfigStatus_service_type_support_handle;
}
