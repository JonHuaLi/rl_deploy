// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_control_msgs:msg/MotorInfoValue.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__STRUCT_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_control_msgs__msg__MotorInfoValue __attribute__((deprecated))
#else
# define DEPRECATED__node_control_msgs__msg__MotorInfoValue __declspec(deprecated)
#endif

namespace node_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorInfoValue_
{
  using Type = MotorInfoValue_<ContainerAllocator>;

  explicit MotorInfoValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->startup_time_ms = 0ull;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->sw_version.begin(), this->sw_version.end(), 0);
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->hw_version.begin(), this->hw_version.end(), 0);
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->joint_version.begin(), this->joint_version.end(), 0);
      this->state = 0;
      this->serial_num = 0ull;
    }
  }

  explicit MotorInfoValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sw_version(_alloc),
    hw_version(_alloc),
    joint_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->startup_time_ms = 0ull;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->sw_version.begin(), this->sw_version.end(), 0);
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->hw_version.begin(), this->hw_version.end(), 0);
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->joint_version.begin(), this->joint_version.end(), 0);
      this->state = 0;
      this->serial_num = 0ull;
    }
  }

  // field types and members
  using _startup_time_ms_type =
    uint64_t;
  _startup_time_ms_type startup_time_ms;
  using _sw_version_type =
    std::array<uint8_t, 3>;
  _sw_version_type sw_version;
  using _hw_version_type =
    std::array<uint8_t, 3>;
  _hw_version_type hw_version;
  using _joint_version_type =
    std::array<uint8_t, 3>;
  _joint_version_type joint_version;
  using _state_type =
    uint16_t;
  _state_type state;
  using _serial_num_type =
    uint64_t;
  _serial_num_type serial_num;

  // setters for named parameter idiom
  Type & set__startup_time_ms(
    const uint64_t & _arg)
  {
    this->startup_time_ms = _arg;
    return *this;
  }
  Type & set__sw_version(
    const std::array<uint8_t, 3> & _arg)
  {
    this->sw_version = _arg;
    return *this;
  }
  Type & set__hw_version(
    const std::array<uint8_t, 3> & _arg)
  {
    this->hw_version = _arg;
    return *this;
  }
  Type & set__joint_version(
    const std::array<uint8_t, 3> & _arg)
  {
    this->joint_version = _arg;
    return *this;
  }
  Type & set__state(
    const uint16_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__serial_num(
    const uint64_t & _arg)
  {
    this->serial_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_control_msgs::msg::MotorInfoValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_control_msgs::msg::MotorInfoValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorInfoValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorInfoValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorInfoValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorInfoValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorInfoValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorInfoValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorInfoValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorInfoValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_control_msgs__msg__MotorInfoValue
    std::shared_ptr<node_control_msgs::msg::MotorInfoValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_control_msgs__msg__MotorInfoValue
    std::shared_ptr<node_control_msgs::msg::MotorInfoValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorInfoValue_ & other) const
  {
    if (this->startup_time_ms != other.startup_time_ms) {
      return false;
    }
    if (this->sw_version != other.sw_version) {
      return false;
    }
    if (this->hw_version != other.hw_version) {
      return false;
    }
    if (this->joint_version != other.joint_version) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->serial_num != other.serial_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorInfoValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorInfoValue_

// alias to use template instance with default allocator
using MotorInfoValue =
  node_control_msgs::msg::MotorInfoValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_INFO_VALUE__STRUCT_HPP_
