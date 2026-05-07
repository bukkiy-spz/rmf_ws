// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/TrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__TrajectoryWaypoint __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__TrajectoryWaypoint __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryWaypoint_
{
  using Type = TrajectoryWaypoint_<ContainerAllocator>;

  explicit TrajectoryWaypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0ll;
      std::fill<typename std::array<double, 3>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->velocity.begin(), this->velocity.end(), 0.0);
    }
  }

  explicit TrajectoryWaypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0ll;
      std::fill<typename std::array<double, 3>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->velocity.begin(), this->velocity.end(), 0.0);
    }
  }

  // field types and members
  using _time_type =
    int64_t;
  _time_type time;
  using _position_type =
    std::array<double, 3>;
  _position_type position;
  using _velocity_type =
    std::array<double, 3>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__time(
    const int64_t & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<double, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<double, 3> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__TrajectoryWaypoint
    std::shared_ptr<rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__TrajectoryWaypoint
    std::shared_ptr<rmf_traffic_msgs::msg::TrajectoryWaypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryWaypoint_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryWaypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryWaypoint_

// alias to use template instance with default allocator
using TrajectoryWaypoint =
  rmf_traffic_msgs::msg::TrajectoryWaypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__STRUCT_HPP_
