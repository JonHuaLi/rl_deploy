// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_app_msgs:msg/LrsCmdStateFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE_FEEDBACK__STRUCT_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE_FEEDBACK__STRUCT_HPP_

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
# define DEPRECATED__node_app_msgs__msg__LrsCmdStateFeedback __attribute__((deprecated))
#else
# define DEPRECATED__node_app_msgs__msg__LrsCmdStateFeedback __declspec(deprecated)
#endif

namespace node_app_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LrsCmdStateFeedback_
{
  using Type = LrsCmdStateFeedback_<ContainerAllocator>;

  explicit LrsCmdStateFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = 0ul;
      this->current_mode = 0ul;
    }
  }

  explicit LrsCmdStateFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = 0ul;
      this->current_mode = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_state_type =
    uint32_t;
  _current_state_type current_state;
  using _current_mode_type =
    uint32_t;
  _current_mode_type current_mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_state(
    const uint32_t & _arg)
  {
    this->current_state = _arg;
    return *this;
  }
  Type & set__current_mode(
    const uint32_t & _arg)
  {
    this->current_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t STATE_DISABLED =
    0u;
  static constexpr uint32_t STATE_DAMPING =
    1u;
  static constexpr uint32_t STATE_READY =
    2u;
  static constexpr uint32_t STATE_RUNNING =
    3u;
  static constexpr uint32_t MODE_DEFAULT =
    0u;
  static constexpr uint32_t MODE_DANCE =
    1u;

  // pointer types
  using RawPtr =
    node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_app_msgs__msg__LrsCmdStateFeedback
    std::shared_ptr<node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_app_msgs__msg__LrsCmdStateFeedback
    std::shared_ptr<node_app_msgs::msg::LrsCmdStateFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LrsCmdStateFeedback_ & other) const
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
    return true;
  }
  bool operator!=(const LrsCmdStateFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LrsCmdStateFeedback_

// alias to use template instance with default allocator
using LrsCmdStateFeedback =
  node_app_msgs::msg::LrsCmdStateFeedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdStateFeedback_<ContainerAllocator>::STATE_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdStateFeedback_<ContainerAllocator>::STATE_DAMPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdStateFeedback_<ContainerAllocator>::STATE_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdStateFeedback_<ContainerAllocator>::STATE_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdStateFeedback_<ContainerAllocator>::MODE_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdStateFeedback_<ContainerAllocator>::MODE_DANCE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_STATE_FEEDBACK__STRUCT_HPP_
