// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_app_msgs:msg/LrsCmdActionFeedback.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__STRUCT_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__STRUCT_HPP_

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
# define DEPRECATED__node_app_msgs__msg__LrsCmdActionFeedback __attribute__((deprecated))
#else
# define DEPRECATED__node_app_msgs__msg__LrsCmdActionFeedback __declspec(deprecated)
#endif

namespace node_app_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LrsCmdActionFeedback_
{
  using Type = LrsCmdActionFeedback_<ContainerAllocator>;

  explicit LrsCmdActionFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_type = 0ul;
      this->action_result = 0ul;
    }
  }

  explicit LrsCmdActionFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_type = 0ul;
      this->action_result = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _action_type_type =
    uint32_t;
  _action_type_type action_type;
  using _action_result_type =
    uint32_t;
  _action_result_type action_result;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__action_type(
    const uint32_t & _arg)
  {
    this->action_type = _arg;
    return *this;
  }
  Type & set__action_result(
    const uint32_t & _arg)
  {
    this->action_result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t ACTION_MOTOR_RECOVER =
    0u;
  static constexpr uint32_t ACTION_UPGRADE =
    1u;
  static constexpr uint32_t ACTION_DANCE_1 =
    10u;
  static constexpr uint32_t ACTION_WAVE =
    20u;
  static constexpr uint32_t ACTION_CLASP =
    21u;
  static constexpr uint32_t ACTION_HEART =
    22u;
  static constexpr uint32_t ACTION_SHAKE =
    23u;
  static constexpr uint32_t ACTION_CLAP =
    24u;
  static constexpr uint32_t ACTION_KISS =
    25u;
  static constexpr uint32_t ACTION_RUNNING =
    0u;
  static constexpr uint32_t ACTION_SUCCESS =
    1u;

  // pointer types
  using RawPtr =
    node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_app_msgs__msg__LrsCmdActionFeedback
    std::shared_ptr<node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_app_msgs__msg__LrsCmdActionFeedback
    std::shared_ptr<node_app_msgs::msg::LrsCmdActionFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LrsCmdActionFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->action_type != other.action_type) {
      return false;
    }
    if (this->action_result != other.action_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LrsCmdActionFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LrsCmdActionFeedback_

// alias to use template instance with default allocator
using LrsCmdActionFeedback =
  node_app_msgs::msg::LrsCmdActionFeedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_MOTOR_RECOVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_UPGRADE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_DANCE_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_WAVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_CLASP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_HEART;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_SHAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_CLAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_KISS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LrsCmdActionFeedback_<ContainerAllocator>::ACTION_SUCCESS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__LRS_CMD_ACTION_FEEDBACK__STRUCT_HPP_
