// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_control_msgs:msg/MotorHealthState.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__STRUCT_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_control_msgs__msg__MotorHealthState __attribute__((deprecated))
#else
# define DEPRECATED__node_control_msgs__msg__MotorHealthState __declspec(deprecated)
#endif

namespace node_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorHealthState_
{
  using Type = MotorHealthState_<ContainerAllocator>;

  explicit MotorHealthState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->health = 0;
      this->motor_direction = 0;
      this->motor_temperature = 0;
      this->mos_temperature = 0;
      this->bus_voltage = 0;
      this->u1_online = 0;
      this->position_zero = 0.0f;
    }
  }

  explicit MotorHealthState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->health = 0;
      this->motor_direction = 0;
      this->motor_temperature = 0;
      this->mos_temperature = 0;
      this->bus_voltage = 0;
      this->u1_online = 0;
      this->position_zero = 0.0f;
    }
  }

  // field types and members
  using _health_type =
    uint16_t;
  _health_type health;
  using _motor_direction_type =
    uint8_t;
  _motor_direction_type motor_direction;
  using _motor_temperature_type =
    uint8_t;
  _motor_temperature_type motor_temperature;
  using _mos_temperature_type =
    uint8_t;
  _mos_temperature_type mos_temperature;
  using _bus_voltage_type =
    uint8_t;
  _bus_voltage_type bus_voltage;
  using _u1_online_type =
    uint8_t;
  _u1_online_type u1_online;
  using _position_zero_type =
    float;
  _position_zero_type position_zero;

  // setters for named parameter idiom
  Type & set__health(
    const uint16_t & _arg)
  {
    this->health = _arg;
    return *this;
  }
  Type & set__motor_direction(
    const uint8_t & _arg)
  {
    this->motor_direction = _arg;
    return *this;
  }
  Type & set__motor_temperature(
    const uint8_t & _arg)
  {
    this->motor_temperature = _arg;
    return *this;
  }
  Type & set__mos_temperature(
    const uint8_t & _arg)
  {
    this->mos_temperature = _arg;
    return *this;
  }
  Type & set__bus_voltage(
    const uint8_t & _arg)
  {
    this->bus_voltage = _arg;
    return *this;
  }
  Type & set__u1_online(
    const uint8_t & _arg)
  {
    this->u1_online = _arg;
    return *this;
  }
  Type & set__position_zero(
    const float & _arg)
  {
    this->position_zero = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_control_msgs::msg::MotorHealthState_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_control_msgs::msg::MotorHealthState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorHealthState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorHealthState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorHealthState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorHealthState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorHealthState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_control_msgs__msg__MotorHealthState
    std::shared_ptr<node_control_msgs::msg::MotorHealthState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_control_msgs__msg__MotorHealthState
    std::shared_ptr<node_control_msgs::msg::MotorHealthState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorHealthState_ & other) const
  {
    if (this->health != other.health) {
      return false;
    }
    if (this->motor_direction != other.motor_direction) {
      return false;
    }
    if (this->motor_temperature != other.motor_temperature) {
      return false;
    }
    if (this->mos_temperature != other.mos_temperature) {
      return false;
    }
    if (this->bus_voltage != other.bus_voltage) {
      return false;
    }
    if (this->u1_online != other.u1_online) {
      return false;
    }
    if (this->position_zero != other.position_zero) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorHealthState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorHealthState_

// alias to use template instance with default allocator
using MotorHealthState =
  node_control_msgs::msg::MotorHealthState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_HEALTH_STATE__STRUCT_HPP_
