// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/SpeedLimitedLane.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__SpeedLimitedLane __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__SpeedLimitedLane __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedLimitedLane_
{
  using Type = SpeedLimitedLane_<ContainerAllocator>;

  explicit SpeedLimitedLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_index = 0ull;
      this->speed_limit = 0.0;
    }
  }

  explicit SpeedLimitedLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_index = 0ull;
      this->speed_limit = 0.0;
    }
  }

  // field types and members
  using _lane_index_type =
    uint64_t;
  _lane_index_type lane_index;
  using _speed_limit_type =
    double;
  _speed_limit_type speed_limit;

  // setters for named parameter idiom
  Type & set__lane_index(
    const uint64_t & _arg)
  {
    this->lane_index = _arg;
    return *this;
  }
  Type & set__speed_limit(
    const double & _arg)
  {
    this->speed_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__SpeedLimitedLane
    std::shared_ptr<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__SpeedLimitedLane
    std::shared_ptr<rmf_fleet_msgs::msg::SpeedLimitedLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedLimitedLane_ & other) const
  {
    if (this->lane_index != other.lane_index) {
      return false;
    }
    if (this->speed_limit != other.speed_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedLimitedLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedLimitedLane_

// alias to use template instance with default allocator
using SpeedLimitedLane =
  rmf_fleet_msgs::msg::SpeedLimitedLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__STRUCT_HPP_
