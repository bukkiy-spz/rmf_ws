// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryReached.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ItineraryReached __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ItineraryReached __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ItineraryReached_
{
  using Type = ItineraryReached_<ContainerAllocator>;

  explicit ItineraryReached_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->plan = 0ull;
      this->progress_version = 0ull;
    }
  }

  explicit ItineraryReached_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->plan = 0ull;
      this->progress_version = 0ull;
    }
  }

  // field types and members
  using _participant_type =
    uint64_t;
  _participant_type participant;
  using _plan_type =
    uint64_t;
  _plan_type plan;
  using _reached_checkpoints_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _reached_checkpoints_type reached_checkpoints;
  using _progress_version_type =
    uint64_t;
  _progress_version_type progress_version;

  // setters for named parameter idiom
  Type & set__participant(
    const uint64_t & _arg)
  {
    this->participant = _arg;
    return *this;
  }
  Type & set__plan(
    const uint64_t & _arg)
  {
    this->plan = _arg;
    return *this;
  }
  Type & set__reached_checkpoints(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->reached_checkpoints = _arg;
    return *this;
  }
  Type & set__progress_version(
    const uint64_t & _arg)
  {
    this->progress_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ItineraryReached
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ItineraryReached
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryReached_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItineraryReached_ & other) const
  {
    if (this->participant != other.participant) {
      return false;
    }
    if (this->plan != other.plan) {
      return false;
    }
    if (this->reached_checkpoints != other.reached_checkpoints) {
      return false;
    }
    if (this->progress_version != other.progress_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItineraryReached_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItineraryReached_

// alias to use template instance with default allocator
using ItineraryReached =
  rmf_traffic_msgs::msg::ItineraryReached_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__STRUCT_HPP_
