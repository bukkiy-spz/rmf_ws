// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/SpeedLimitRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'speed_limits'
#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__SpeedLimitRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__SpeedLimitRequest __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedLimitRequest_
{
  using Type = SpeedLimitRequest_<ContainerAllocator>;

  explicit SpeedLimitRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
    }
  }

  explicit SpeedLimitRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
    }
  }

  // field types and members
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _speed_limits_type =
    std::vector<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>>>;
  _speed_limits_type speed_limits;
  using _remove_limits_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _remove_limits_type remove_limits;

  // setters for named parameter idiom
  Type & set__fleet_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fleet_name = _arg;
    return *this;
  }
  Type & set__speed_limits(
    const std::vector<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>>> & _arg)
  {
    this->speed_limits = _arg;
    return *this;
  }
  Type & set__remove_limits(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->remove_limits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__SpeedLimitRequest
    std::shared_ptr<rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__SpeedLimitRequest
    std::shared_ptr<rmf_fleet_msgs::msg::SpeedLimitRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedLimitRequest_ & other) const
  {
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->speed_limits != other.speed_limits) {
      return false;
    }
    if (this->remove_limits != other.remove_limits) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedLimitRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedLimitRequest_

// alias to use template instance with default allocator
using SpeedLimitRequest =
  rmf_fleet_msgs::msg::SpeedLimitRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__STRUCT_HPP_
