// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistency.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ranges'
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleInconsistency __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleInconsistency __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleInconsistency_
{
  using Type = ScheduleInconsistency_<ContainerAllocator>;

  explicit ScheduleInconsistency_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->last_known_itinerary = 0ull;
      this->last_known_progress = 0ull;
    }
  }

  explicit ScheduleInconsistency_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->last_known_itinerary = 0ull;
      this->last_known_progress = 0ull;
    }
  }

  // field types and members
  using _participant_type =
    uint64_t;
  _participant_type participant;
  using _ranges_type =
    std::vector<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>>>;
  _ranges_type ranges;
  using _last_known_itinerary_type =
    uint64_t;
  _last_known_itinerary_type last_known_itinerary;
  using _last_known_progress_type =
    uint64_t;
  _last_known_progress_type last_known_progress;

  // setters for named parameter idiom
  Type & set__participant(
    const uint64_t & _arg)
  {
    this->participant = _arg;
    return *this;
  }
  Type & set__ranges(
    const std::vector<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>>> & _arg)
  {
    this->ranges = _arg;
    return *this;
  }
  Type & set__last_known_itinerary(
    const uint64_t & _arg)
  {
    this->last_known_itinerary = _arg;
    return *this;
  }
  Type & set__last_known_progress(
    const uint64_t & _arg)
  {
    this->last_known_progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleInconsistency
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleInconsistency
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleInconsistency_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleInconsistency_ & other) const
  {
    if (this->participant != other.participant) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    if (this->last_known_itinerary != other.last_known_itinerary) {
      return false;
    }
    if (this->last_known_progress != other.last_known_progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleInconsistency_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleInconsistency_

// alias to use template instance with default allocator
using ScheduleInconsistency =
  rmf_traffic_msgs::msg::ScheduleInconsistency_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__STRUCT_HPP_
