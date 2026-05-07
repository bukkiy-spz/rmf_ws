// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_workcell_msgs:msg/Trait.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__TRAIT__STRUCT_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__TRAIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_workcell_msgs__msg__Trait __attribute__((deprecated))
#else
# define DEPRECATED__rmf_workcell_msgs__msg__Trait __declspec(deprecated)
#endif

namespace rmf_workcell_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trait_
{
  using Type = Trait_<ContainerAllocator>;

  explicit Trait_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
    }
  }

  explicit Trait_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;
  using _value_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__value(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_workcell_msgs::msg::Trait_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_workcell_msgs::msg::Trait_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_workcell_msgs::msg::Trait_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_workcell_msgs::msg::Trait_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_workcell_msgs::msg::Trait_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_workcell_msgs::msg::Trait_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_workcell_msgs::msg::Trait_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_workcell_msgs::msg::Trait_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_workcell_msgs::msg::Trait_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_workcell_msgs::msg::Trait_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_workcell_msgs__msg__Trait
    std::shared_ptr<rmf_workcell_msgs::msg::Trait_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_workcell_msgs__msg__Trait
    std::shared_ptr<rmf_workcell_msgs::msg::Trait_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trait_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trait_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trait_

// alias to use template instance with default allocator
using Trait =
  rmf_workcell_msgs::msg::Trait_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_workcell_msgs

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__TRAIT__STRUCT_HPP_
