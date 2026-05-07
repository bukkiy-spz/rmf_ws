// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_REQUEST__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'claim_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__MutexGroupRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__MutexGroupRequest __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MutexGroupRequest_
{
  using Type = MutexGroupRequest_<ContainerAllocator>;

  explicit MutexGroupRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : claim_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group = "";
      this->claimant = 0ull;
      this->mode = 0ul;
    }
  }

  explicit MutexGroupRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : group(_alloc),
    claim_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group = "";
      this->claimant = 0ull;
      this->mode = 0ul;
    }
  }

  // field types and members
  using _group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_type group;
  using _claimant_type =
    uint64_t;
  _claimant_type claimant;
  using _claim_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _claim_time_type claim_time;
  using _mode_type =
    uint32_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group = _arg;
    return *this;
  }
  Type & set__claimant(
    const uint64_t & _arg)
  {
    this->claimant = _arg;
    return *this;
  }
  Type & set__claim_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->claim_time = _arg;
    return *this;
  }
  Type & set__mode(
    const uint32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MODE_RELEASE =
    0u;
  static constexpr uint32_t MODE_LOCK =
    1u;

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__MutexGroupRequest
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__MutexGroupRequest
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MutexGroupRequest_ & other) const
  {
    if (this->group != other.group) {
      return false;
    }
    if (this->claimant != other.claimant) {
      return false;
    }
    if (this->claim_time != other.claim_time) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MutexGroupRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MutexGroupRequest_

// alias to use template instance with default allocator
using MutexGroupRequest =
  rmf_fleet_msgs::msg::MutexGroupRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MutexGroupRequest_<ContainerAllocator>::MODE_RELEASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MutexGroupRequest_<ContainerAllocator>::MODE_LOCK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_REQUEST__STRUCT_HPP_
