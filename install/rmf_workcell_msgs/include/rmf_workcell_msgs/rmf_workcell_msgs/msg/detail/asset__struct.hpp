// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_workcell_msgs:msg/Asset.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__STRUCT_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_workcell_msgs__msg__Asset __attribute__((deprecated))
#else
# define DEPRECATED__rmf_workcell_msgs__msg__Asset __declspec(deprecated)
#endif

namespace rmf_workcell_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Asset_
{
  using Type = Asset_<ContainerAllocator>;

  explicit Asset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guid = "";
      this->type = "";
    }
  }

  explicit Asset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : guid(_alloc),
    type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guid = "";
      this->type = "";
    }
  }

  // field types and members
  using _guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _guid_type guid;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->guid = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_workcell_msgs::msg::Asset_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_workcell_msgs::msg::Asset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_workcell_msgs::msg::Asset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_workcell_msgs::msg::Asset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_workcell_msgs::msg::Asset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_workcell_msgs::msg::Asset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_workcell_msgs::msg::Asset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_workcell_msgs::msg::Asset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_workcell_msgs::msg::Asset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_workcell_msgs::msg::Asset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_workcell_msgs__msg__Asset
    std::shared_ptr<rmf_workcell_msgs::msg::Asset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_workcell_msgs__msg__Asset
    std::shared_ptr<rmf_workcell_msgs::msg::Asset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Asset_ & other) const
  {
    if (this->guid != other.guid) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Asset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Asset_

// alias to use template instance with default allocator
using Asset =
  rmf_workcell_msgs::msg::Asset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_workcell_msgs

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__STRUCT_HPP_
