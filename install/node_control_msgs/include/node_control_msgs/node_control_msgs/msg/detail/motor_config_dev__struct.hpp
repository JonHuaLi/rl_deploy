// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_control_msgs:msg/MotorConfigDev.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__STRUCT_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_control_msgs__msg__MotorConfigDev __attribute__((deprecated))
#else
# define DEPRECATED__node_control_msgs__msg__MotorConfigDev __declspec(deprecated)
#endif

namespace node_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorConfigDev_
{
  using Type = MotorConfigDev_<ContainerAllocator>;

  explicit MotorConfigDev_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parameter_id = 0ul;
      this->parameter_value = 0.0f;
    }
  }

  explicit MotorConfigDev_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parameter_id = 0ul;
      this->parameter_value = 0.0f;
    }
  }

  // field types and members
  using _parameter_id_type =
    uint32_t;
  _parameter_id_type parameter_id;
  using _parameter_value_type =
    float;
  _parameter_value_type parameter_value;

  // setters for named parameter idiom
  Type & set__parameter_id(
    const uint32_t & _arg)
  {
    this->parameter_id = _arg;
    return *this;
  }
  Type & set__parameter_value(
    const float & _arg)
  {
    this->parameter_value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t PARAMETER_ID_MOTOR_DIRECTION =
    0u;
  static constexpr uint32_t PARAMETER_ID_MOTOR_STATUS =
    1u;
  static constexpr uint32_t PARAMETER_ID_ZERO_POSITION =
    2u;
  static constexpr uint32_t PARAMETER_ID_CLEAR_ERROR =
    3u;

  // pointer types
  using RawPtr =
    node_control_msgs::msg::MotorConfigDev_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_control_msgs::msg::MotorConfigDev_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_control_msgs__msg__MotorConfigDev
    std::shared_ptr<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_control_msgs__msg__MotorConfigDev
    std::shared_ptr<node_control_msgs::msg::MotorConfigDev_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorConfigDev_ & other) const
  {
    if (this->parameter_id != other.parameter_id) {
      return false;
    }
    if (this->parameter_value != other.parameter_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorConfigDev_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorConfigDev_

// alias to use template instance with default allocator
using MotorConfigDev =
  node_control_msgs::msg::MotorConfigDev_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorConfigDev_<ContainerAllocator>::PARAMETER_ID_MOTOR_DIRECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorConfigDev_<ContainerAllocator>::PARAMETER_ID_MOTOR_STATUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorConfigDev_<ContainerAllocator>::PARAMETER_ID_ZERO_POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorConfigDev_<ContainerAllocator>::PARAMETER_ID_CLEAR_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG_DEV__STRUCT_HPP_
