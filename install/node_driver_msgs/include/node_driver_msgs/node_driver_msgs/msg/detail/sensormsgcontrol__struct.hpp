// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_driver_msgs:msg/Sensormsgcontrol.idl
// generated code does not contain a copyright notice

#ifndef NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGCONTROL__STRUCT_HPP_
#define NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGCONTROL__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__node_driver_msgs__msg__Sensormsgcontrol __attribute__((deprecated))
#else
# define DEPRECATED__node_driver_msgs__msg__Sensormsgcontrol __declspec(deprecated)
#endif

namespace node_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sensormsgcontrol_
{
  using Type = Sensormsgcontrol_<ContainerAllocator>;

  explicit Sensormsgcontrol_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_type = 0;
      this->control_command = 0;
    }
  }

  explicit Sensormsgcontrol_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_type = 0;
      this->control_command = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_type_type =
    int8_t;
  _sensor_type_type sensor_type;
  using _control_command_type =
    int8_t;
  _control_command_type control_command;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_type(
    const int8_t & _arg)
  {
    this->sensor_type = _arg;
    return *this;
  }
  Type & set__control_command(
    const int8_t & _arg)
  {
    this->control_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_driver_msgs__msg__Sensormsgcontrol
    std::shared_ptr<node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_driver_msgs__msg__Sensormsgcontrol
    std::shared_ptr<node_driver_msgs::msg::Sensormsgcontrol_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sensormsgcontrol_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_type != other.sensor_type) {
      return false;
    }
    if (this->control_command != other.control_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sensormsgcontrol_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sensormsgcontrol_

// alias to use template instance with default allocator
using Sensormsgcontrol =
  node_driver_msgs::msg::Sensormsgcontrol_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_driver_msgs

#endif  // NODE_DRIVER_MSGS__MSG__DETAIL__SENSORMSGCONTROL__STRUCT_HPP_
