// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_door_msgs:msg/DoorMode.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_MODE__STRUCT_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_door_msgs__msg__DoorMode __attribute__((deprecated))
#else
# define DEPRECATED__rmf_door_msgs__msg__DoorMode __declspec(deprecated)
#endif

namespace rmf_door_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorMode_
{
  using Type = DoorMode_<ContainerAllocator>;

  explicit DoorMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0ul;
    }
  }

  explicit DoorMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0ul;
    }
  }

  // field types and members
  using _value_type =
    uint32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const uint32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MODE_CLOSED =
    0u;
  static constexpr uint32_t MODE_MOVING =
    1u;
  static constexpr uint32_t MODE_OPEN =
    2u;
  static constexpr uint32_t MODE_OFFLINE =
    3u;
  static constexpr uint32_t MODE_UNKNOWN =
    4u;

  // pointer types
  using RawPtr =
    rmf_door_msgs::msg::DoorMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_door_msgs::msg::DoorMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::DoorMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::DoorMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::DoorMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::DoorMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::DoorMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::DoorMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::DoorMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::DoorMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_door_msgs__msg__DoorMode
    std::shared_ptr<rmf_door_msgs::msg::DoorMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_door_msgs__msg__DoorMode
    std::shared_ptr<rmf_door_msgs::msg::DoorMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorMode_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorMode_

// alias to use template instance with default allocator
using DoorMode =
  rmf_door_msgs::msg::DoorMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DoorMode_<ContainerAllocator>::MODE_CLOSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DoorMode_<ContainerAllocator>::MODE_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DoorMode_<ContainerAllocator>::MODE_OPEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DoorMode_<ContainerAllocator>::MODE_OFFLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DoorMode_<ContainerAllocator>::MODE_UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_MODE__STRUCT_HPP_
