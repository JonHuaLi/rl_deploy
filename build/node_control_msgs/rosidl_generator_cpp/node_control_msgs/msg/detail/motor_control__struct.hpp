// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_control_msgs:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_

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
// Member 'cmd'
#include "node_control_msgs/msg/detail/motor_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__node_control_msgs__msg__MotorControl __attribute__((deprecated))
#else
# define DEPRECATED__node_control_msgs__msg__MotorControl __declspec(deprecated)
#endif

namespace node_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorControl_
{
  using Type = MotorControl_<ContainerAllocator>;

  explicit MotorControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq_num = 0ul;
    }
  }

  explicit MotorControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq_num = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _seq_num_type =
    uint32_t;
  _seq_num_type seq_num;
  using _cmd_type =
    std::vector<node_control_msgs::msg::MotorCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorCommand_<ContainerAllocator>>>;
  _cmd_type cmd;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__seq_num(
    const uint32_t & _arg)
  {
    this->seq_num = _arg;
    return *this;
  }
  Type & set__cmd(
    const std::vector<node_control_msgs::msg::MotorCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorCommand_<ContainerAllocator>>> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_control_msgs::msg::MotorControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_control_msgs::msg::MotorControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_control_msgs__msg__MotorControl
    std::shared_ptr<node_control_msgs::msg::MotorControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_control_msgs__msg__MotorControl
    std::shared_ptr<node_control_msgs::msg::MotorControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->seq_num != other.seq_num) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorControl_

// alias to use template instance with default allocator
using MotorControl =
  node_control_msgs::msg::MotorControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONTROL__STRUCT_HPP_
