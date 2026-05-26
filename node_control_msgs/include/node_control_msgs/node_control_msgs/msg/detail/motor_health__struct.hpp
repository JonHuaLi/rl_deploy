// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_control_msgs:msg/MotorHealth.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__STRUCT_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'state'
// Member 'state_all'
#include "node_control_msgs/msg/detail/motor_health_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__node_control_msgs__msg__MotorHealth __attribute__((deprecated))
#else
# define DEPRECATED__node_control_msgs__msg__MotorHealth __declspec(deprecated)
#endif

namespace node_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorHealth_
{
  using Type = MotorHealth_<ContainerAllocator>;

  explicit MotorHealth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    state_all(_init)
  {
    (void)_init;
  }

  explicit MotorHealth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state_all(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    std::vector<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>>>;
  _state_type state;
  using _state_all_type =
    node_control_msgs::msg::MotorHealthState_<ContainerAllocator>;
  _state_all_type state_all;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__state_all(
    const node_control_msgs::msg::MotorHealthState_<ContainerAllocator> & _arg)
  {
    this->state_all = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_control_msgs::msg::MotorHealth_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_control_msgs::msg::MotorHealth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorHealth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorHealth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorHealth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorHealth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorHealth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorHealth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorHealth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorHealth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_control_msgs__msg__MotorHealth
    std::shared_ptr<node_control_msgs::msg::MotorHealth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_control_msgs__msg__MotorHealth
    std::shared_ptr<node_control_msgs::msg::MotorHealth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorHealth_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->state_all != other.state_all) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorHealth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorHealth_

// alias to use template instance with default allocator
using MotorHealth =
  node_control_msgs::msg::MotorHealth_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH__STRUCT_HPP_
