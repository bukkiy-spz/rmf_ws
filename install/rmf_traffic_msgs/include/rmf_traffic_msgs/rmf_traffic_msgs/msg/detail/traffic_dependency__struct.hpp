// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/TrafficDependency.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__TrafficDependency __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__TrafficDependency __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficDependency_
{
  using Type = TrafficDependency_<ContainerAllocator>;

  explicit TrafficDependency_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dependent_checkpoint = 0ull;
      this->on_participant = 0ull;
      this->on_plan = 0ull;
      this->on_route = 0ull;
      this->on_checkpoint = 0ull;
    }
  }

  explicit TrafficDependency_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dependent_checkpoint = 0ull;
      this->on_participant = 0ull;
      this->on_plan = 0ull;
      this->on_route = 0ull;
      this->on_checkpoint = 0ull;
    }
  }

  // field types and members
  using _dependent_checkpoint_type =
    uint64_t;
  _dependent_checkpoint_type dependent_checkpoint;
  using _on_participant_type =
    uint64_t;
  _on_participant_type on_participant;
  using _on_plan_type =
    uint64_t;
  _on_plan_type on_plan;
  using _on_route_type =
    uint64_t;
  _on_route_type on_route;
  using _on_checkpoint_type =
    uint64_t;
  _on_checkpoint_type on_checkpoint;

  // setters for named parameter idiom
  Type & set__dependent_checkpoint(
    const uint64_t & _arg)
  {
    this->dependent_checkpoint = _arg;
    return *this;
  }
  Type & set__on_participant(
    const uint64_t & _arg)
  {
    this->on_participant = _arg;
    return *this;
  }
  Type & set__on_plan(
    const uint64_t & _arg)
  {
    this->on_plan = _arg;
    return *this;
  }
  Type & set__on_route(
    const uint64_t & _arg)
  {
    this->on_route = _arg;
    return *this;
  }
  Type & set__on_checkpoint(
    const uint64_t & _arg)
  {
    this->on_checkpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__TrafficDependency
    std::shared_ptr<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__TrafficDependency
    std::shared_ptr<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficDependency_ & other) const
  {
    if (this->dependent_checkpoint != other.dependent_checkpoint) {
      return false;
    }
    if (this->on_participant != other.on_participant) {
      return false;
    }
    if (this->on_plan != other.on_plan) {
      return false;
    }
    if (this->on_route != other.on_route) {
      return false;
    }
    if (this->on_checkpoint != other.on_checkpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficDependency_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficDependency_

// alias to use template instance with default allocator
using TrafficDependency =
  rmf_traffic_msgs::msg::TrafficDependency_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__STRUCT_HPP_
