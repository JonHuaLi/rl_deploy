// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_control_msgs:msg/MotorCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND_FEEDBACK__STRUCT_HPP_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND_FEEDBACK__STRUCT_HPP_

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
// Member 'feedback'
#include "node_control_msgs/msg/detail/motor_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__node_control_msgs__msg__MotorCommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__node_control_msgs__msg__MotorCommandFeedback __declspec(deprecated)
#endif

namespace node_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommandFeedback_
{
  using Type = MotorCommandFeedback_<ContainerAllocator>;

  explicit MotorCommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
    }
  }

  explicit MotorCommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _feedback_type =
    std::vector<node_control_msgs::msg::MotorFeedback_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorFeedback_<ContainerAllocator>>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__seq(
    const uint32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__feedback(
    const std::vector<node_control_msgs::msg::MotorFeedback_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<node_control_msgs::msg::MotorFeedback_<ContainerAllocator>>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_control_msgs__msg__MotorCommandFeedback
    std::shared_ptr<node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_control_msgs__msg__MotorCommandFeedback
    std::shared_ptr<node_control_msgs::msg::MotorCommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommandFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommandFeedback_

// alias to use template instance with default allocator
using MotorCommandFeedback =
  node_control_msgs::msg::MotorCommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_control_msgs

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_COMMAND_FEEDBACK__STRUCT_HPP_
