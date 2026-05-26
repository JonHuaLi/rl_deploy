// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_app_msgs:msg/LrsState.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__STRUCT_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__STRUCT_HPP_

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
// Member 'motor_health_states'
#include "node_control_msgs/msg/detail/motor_health_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__node_app_msgs__msg__LrsState __attribute__((deprecated))
#else
# define DEPRECATED__node_app_msgs__msg__LrsState __declspec(deprecated)
#endif

namespace node_app_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LrsState_
{
  using Type = LrsState_<ContainerAllocator>;

  explicit LrsState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
      this->current_mode = "";
      this->current_action = "";
      this->running_status = "";
      this->motor_health = "";
    }
  }

  explicit LrsState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    current_state(_alloc),
    current_mode(_alloc),
    current_action(_alloc),
    running_status(_alloc),
    motor_health(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
      this->current_mode = "";
      this->current_action = "";
      this->running_status = "";
      this->motor_health = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_state_type current_state;
  using _current_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_mode_type current_mode;
  using _current_action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_action_type current_action;
  using _running_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _running_status_type running_status;
  using _motor_health_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motor_health_type motor_health;
  using _motor_health_states_type =
    std::vector<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>>>;
  _motor_health_states_type motor_health_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_state = _arg;
    return *this;
  }
  Type & set__current_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_mode = _arg;
    return *this;
  }
  Type & set__current_action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_action = _arg;
    return *this;
  }
  Type & set__running_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->running_status = _arg;
    return *this;
  }
  Type & set__motor_health(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motor_health = _arg;
    return *this;
  }
  Type & set__motor_health_states(
    const std::vector<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>>> & _arg)
  {
    this->motor_health_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_app_msgs::msg::LrsState_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_app_msgs::msg::LrsState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_app_msgs::msg::LrsState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_app_msgs::msg::LrsState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_app_msgs::msg::LrsState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_app_msgs::msg::LrsState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_app_msgs::msg::LrsState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_app_msgs::msg::LrsState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_app_msgs::msg::LrsState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_app_msgs::msg::LrsState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_app_msgs__msg__LrsState
    std::shared_ptr<node_app_msgs::msg::LrsState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_app_msgs__msg__LrsState
    std::shared_ptr<node_app_msgs::msg::LrsState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LrsState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_state != other.current_state) {
      return false;
    }
    if (this->current_mode != other.current_mode) {
      return false;
    }
    if (this->current_action != other.current_action) {
      return false;
    }
    if (this->running_status != other.running_status) {
      return false;
    }
    if (this->motor_health != other.motor_health) {
      return false;
    }
    if (this->motor_health_states != other.motor_health_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const LrsState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LrsState_

// alias to use template instance with default allocator
using LrsState =
  node_app_msgs::msg::LrsState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_STATE__STRUCT_HPP_
