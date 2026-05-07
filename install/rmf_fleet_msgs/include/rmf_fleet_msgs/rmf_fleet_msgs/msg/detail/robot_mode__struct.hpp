// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__RobotMode __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__RobotMode __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotMode_
{
  using Type = RobotMode_<ContainerAllocator>;

  explicit RobotMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0ul;
      this->mode_request_id = 0ull;
    }
  }

  explicit RobotMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0ul;
      this->mode_request_id = 0ull;
    }
  }

  // field types and members
  using _mode_type =
    uint32_t;
  _mode_type mode;
  using _mode_request_id_type =
    uint64_t;
  _mode_request_id_type mode_request_id;

  // setters for named parameter idiom
  Type & set__mode(
    const uint32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__mode_request_id(
    const uint64_t & _arg)
  {
    this->mode_request_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MODE_IDLE =
    0u;
  static constexpr uint32_t MODE_CHARGING =
    1u;
  static constexpr uint32_t MODE_MOVING =
    2u;
  static constexpr uint32_t MODE_PAUSED =
    3u;
  static constexpr uint32_t MODE_WAITING =
    4u;
  static constexpr uint32_t MODE_EMERGENCY =
    5u;
  static constexpr uint32_t MODE_GOING_HOME =
    6u;
  static constexpr uint32_t MODE_DOCKING =
    7u;
  static constexpr uint32_t MODE_ADAPTER_ERROR =
    8u;
  static constexpr uint32_t MODE_CLEANING =
    9u;

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__RobotMode
    std::shared_ptr<rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__RobotMode
    std::shared_ptr<rmf_fleet_msgs::msg::RobotMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMode_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->mode_request_id != other.mode_request_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMode_

// alias to use template instance with default allocator
using RobotMode =
  rmf_fleet_msgs::msg::RobotMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_PAUSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_WAITING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_EMERGENCY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_GOING_HOME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_DOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_ADAPTER_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotMode_<ContainerAllocator>::MODE_CLEANING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_HPP_
