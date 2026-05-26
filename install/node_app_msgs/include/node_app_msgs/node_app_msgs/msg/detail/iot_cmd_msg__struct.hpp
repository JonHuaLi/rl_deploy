// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_app_msgs:msg/IotCmdMsg.idl
// generated code does not contain a copyright notice

#ifndef NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__STRUCT_HPP_
#define NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__STRUCT_HPP_

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
# define DEPRECATED__node_app_msgs__msg__IotCmdMsg __attribute__((deprecated))
#else
# define DEPRECATED__node_app_msgs__msg__IotCmdMsg __declspec(deprecated)
#endif

namespace node_app_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IotCmdMsg_
{
  using Type = IotCmdMsg_<ContainerAllocator>;

  explicit IotCmdMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->category = "";
      this->fun_name = "";
      this->sub = "";
      this->param = "";
    }
  }

  explicit IotCmdMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    category(_alloc),
    fun_name(_alloc),
    sub(_alloc),
    param(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->category = "";
      this->fun_name = "";
      this->sub = "";
      this->param = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _category_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _category_type category;
  using _fun_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fun_name_type fun_name;
  using _sub_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sub_type sub;
  using _param_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _param_type param;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__category(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->category = _arg;
    return *this;
  }
  Type & set__fun_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fun_name = _arg;
    return *this;
  }
  Type & set__sub(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sub = _arg;
    return *this;
  }
  Type & set__param(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->param = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_app_msgs::msg::IotCmdMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_app_msgs::msg::IotCmdMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_app_msgs::msg::IotCmdMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_app_msgs::msg::IotCmdMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_app_msgs::msg::IotCmdMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_app_msgs::msg::IotCmdMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_app_msgs::msg::IotCmdMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_app_msgs::msg::IotCmdMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_app_msgs::msg::IotCmdMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_app_msgs::msg::IotCmdMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_app_msgs__msg__IotCmdMsg
    std::shared_ptr<node_app_msgs::msg::IotCmdMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_app_msgs__msg__IotCmdMsg
    std::shared_ptr<node_app_msgs::msg::IotCmdMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IotCmdMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->category != other.category) {
      return false;
    }
    if (this->fun_name != other.fun_name) {
      return false;
    }
    if (this->sub != other.sub) {
      return false;
    }
    if (this->param != other.param) {
      return false;
    }
    return true;
  }
  bool operator!=(const IotCmdMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IotCmdMsg_

// alias to use template instance with default allocator
using IotCmdMsg =
  node_app_msgs::msg::IotCmdMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_app_msgs

#endif  // NODE_APP_MSGS__MSG__DETAIL__IOT_CMD_MSG__STRUCT_HPP_
