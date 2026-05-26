// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_control_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_control_msgs__msg__MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__node_control_msgs__msg__MotorCommand __declspec(deprecated)
#endif

namespace node_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_
{
  using Type = MotorCommand_<ContainerAllocator>;

  explicit MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0;
      this->kd = 0;
      this->position_des = 0.0f;
      this->omega_des = 0.0f;
      this->torque_des = 0;
      this->reserved = 0;
    }
  }

  explicit MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0;
      this->kd = 0;
      this->position_des = 0.0f;
      this->omega_des = 0.0f;
      this->torque_des = 0;
      this->reserved = 0;
    }
  }

  // field types and members
  using _kp_type =
    uint16_t;
  _kp_type kp;
  using _kd_type =
    uint16_t;
  _kd_type kd;
  using _position_des_type =
    float;
  _position_des_type position_des;
  using _omega_des_type =
    float;
  _omega_des_type omega_des;
  using _torque_des_type =
    int16_t;
  _torque_des_type torque_des;
  using _reserved_type =
    uint16_t;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__kp(
    const uint16_t & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const uint16_t & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__position_des(
    const float & _arg)
  {
    this->position_des = _arg;
    return *this;
  }
  Type & set__omega_des(
    const float & _arg)
  {
    this->omega_des = _arg;
    return *this;
  }
  Type & set__torque_des(
    const int16_t & _arg)
  {
    this->torque_des = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint16_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_control_msgs::msg::MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_control_msgs::msg::MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_control_msgs__msg__MotorCommand
    std::shared_ptr<node_control_msgs::msg::MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_control_msgs__msg__MotorCommand
    std::shared_ptr<node_control_msgs::msg::MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_ & other) const
  {
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->position_des != other.position_des) {
      return false;
    }
    if (this->omega_des != other.omega_des) {
      return false;
    }
    if (this->torque_des != other.torque_des) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_

// alias to use template instance with default allocator
using MotorCommand =
  node_control_msgs::msg::MotorCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
