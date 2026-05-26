// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from node_control_msgs:srv/MotorConfigStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "node_control_msgs/srv/detail/motor_config_status__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace node_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorConfigStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorConfigStatus_Request_type_support_ids_t;

static const _MotorConfigStatus_Request_type_support_ids_t _MotorConfigStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorConfigStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorConfigStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorConfigStatus_Request_type_support_symbol_names_t _MotorConfigStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_control_msgs, srv, MotorConfigStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_control_msgs, srv, MotorConfigStatus_Request)),
  }
};

typedef struct _MotorConfigStatus_Request_type_support_data_t
{
  void * data[2];
} _MotorConfigStatus_Request_type_support_data_t;

static _MotorConfigStatus_Request_type_support_data_t _MotorConfigStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorConfigStatus_Request_message_typesupport_map = {
  2,
  "node_control_msgs",
  &_MotorConfigStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MotorConfigStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MotorConfigStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorConfigStatus_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorConfigStatus_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace node_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<node_control_msgs::srv::MotorConfigStatus_Request>()
{
  return &::node_control_msgs::srv::rosidl_typesupport_cpp::MotorConfigStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, node_control_msgs, srv, MotorConfigStatus_Request)() {
  return get_message_type_support_handle<node_control_msgs::srv::MotorConfigStatus_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "node_control_msgs/srv/detail/motor_config_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace node_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorConfigStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorConfigStatus_Response_type_support_ids_t;

static const _MotorConfigStatus_Response_type_support_ids_t _MotorConfigStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorConfigStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorConfigStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorConfigStatus_Response_type_support_symbol_names_t _MotorConfigStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_control_msgs, srv, MotorConfigStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_control_msgs, srv, MotorConfigStatus_Response)),
  }
};

typedef struct _MotorConfigStatus_Response_type_support_data_t
{
  void * data[2];
} _MotorConfigStatus_Response_type_support_data_t;

static _MotorConfigStatus_Response_type_support_data_t _MotorConfigStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorConfigStatus_Response_message_typesupport_map = {
  2,
  "node_control_msgs",
  &_MotorConfigStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MotorConfigStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MotorConfigStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorConfigStatus_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorConfigStatus_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace node_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<node_control_msgs::srv::MotorConfigStatus_Response>()
{
  return &::node_control_msgs::srv::rosidl_typesupport_cpp::MotorConfigStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, node_control_msgs, srv, MotorConfigStatus_Response)() {
  return get_message_type_support_handle<node_control_msgs::srv::MotorConfigStatus_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "node_control_msgs/srv/detail/motor_config_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace node_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorConfigStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorConfigStatus_type_support_ids_t;

static const _MotorConfigStatus_type_support_ids_t _MotorConfigStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorConfigStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorConfigStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorConfigStatus_type_support_symbol_names_t _MotorConfigStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_control_msgs, srv, MotorConfigStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_control_msgs, srv, MotorConfigStatus)),
  }
};

typedef struct _MotorConfigStatus_type_support_data_t
{
  void * data[2];
} _MotorConfigStatus_type_support_data_t;

static _MotorConfigStatus_type_support_data_t _MotorConfigStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorConfigStatus_service_typesupport_map = {
  2,
  "node_control_msgs",
  &_MotorConfigStatus_service_typesupport_ids.typesupport_identifier[0],
  &_MotorConfigStatus_service_typesupport_symbol_names.symbol_name[0],
  &_MotorConfigStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MotorConfigStatus_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorConfigStatus_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace node_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<node_control_msgs::srv::MotorConfigStatus>()
{
  return &::node_control_msgs::srv::rosidl_typesupport_cpp::MotorConfigStatus_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, node_control_msgs, srv, MotorConfigStatus)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<node_control_msgs::srv::MotorConfigStatus>();
}

#ifdef __cplusplus
}
#endif
