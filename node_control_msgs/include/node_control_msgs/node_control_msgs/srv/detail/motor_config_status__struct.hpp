// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_control_msgs:srv/MotorConfigStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__STRUCT_HPP_
#define NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_control_msgs__srv__MotorConfigStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_control_msgs__srv__MotorConfigStatus_Request __declspec(deprecated)
#endif

namespace node_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorConfigStatus_Request_
{
  using Type = MotorConfigStatus_Request_<ContainerAllocator>;

  explicit MotorConfigStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0ul;
    }
  }

  explicit MotorConfigStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0ul;
    }
  }

  // field types and members
  using _motor_id_type =
    uint32_t;
  _motor_id_type motor_id;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint32_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_control_msgs__srv__MotorConfigStatus_Request
    std::shared_ptr<node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_control_msgs__srv__MotorConfigStatus_Request
    std::shared_ptr<node_control_msgs::srv::MotorConfigStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorConfigStatus_Request_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorConfigStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorConfigStatus_Request_

// alias to use template instance with default allocator
using MotorConfigStatus_Request =
  node_control_msgs::srv::MotorConfigStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_control_msgs


// Include directives for member types
// Member 'config'
#include "node_control_msgs/msg/detail/motor_config_dev__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__node_control_msgs__srv__MotorConfigStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_control_msgs__srv__MotorConfigStatus_Response __declspec(deprecated)
#endif

namespace node_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorConfigStatus_Response_
{
  using Type = MotorConfigStatus_Response_<ContainerAllocator>;

  explicit MotorConfigStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotorConfigStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _config_type =
    std::vector<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>>>;
  _config_type config;

  // setters for named parameter idiom
  Type & set__config(
    const std::vector<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>>> & _arg)
  {
    this->config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_control_msgs__srv__MotorConfigStatus_Response
    std::shared_ptr<node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_control_msgs__srv__MotorConfigStatus_Response
    std::shared_ptr<node_control_msgs::srv::MotorConfigStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorConfigStatus_Response_ & other) const
  {
    if (this->config != other.config) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorConfigStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorConfigStatus_Response_

// alias to use template instance with default allocator
using MotorConfigStatus_Response =
  node_control_msgs::srv::MotorConfigStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_control_msgs

namespace node_control_msgs
{

namespace srv
{

struct MotorConfigStatus
{
  using Request = node_control_msgs::srv::MotorConfigStatus_Request;
  using Response = node_control_msgs::srv::MotorConfigStatus_Response;
};

}  // namespace srv

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__SRV__DETAIL__MOTOR_CONFIG_STATUS__STRUCT_HPP_
