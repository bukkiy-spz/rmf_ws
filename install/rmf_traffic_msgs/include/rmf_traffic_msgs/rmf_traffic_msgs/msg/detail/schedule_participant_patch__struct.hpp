// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'delays'
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__struct.hpp"
// Member 'additions'
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__struct.hpp"
// Member 'progress'
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleParticipantPatch __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleParticipantPatch __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleParticipantPatch_
{
  using Type = ScheduleParticipantPatch_<ContainerAllocator>;

  explicit ScheduleParticipantPatch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : additions(_init),
    progress(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant_id = 0ull;
      this->itinerary_version = 0ull;
    }
  }

  explicit ScheduleParticipantPatch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : additions(_alloc, _init),
    progress(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant_id = 0ull;
      this->itinerary_version = 0ull;
    }
  }

  // field types and members
  using _participant_id_type =
    uint64_t;
  _participant_id_type participant_id;
  using _itinerary_version_type =
    uint64_t;
  _itinerary_version_type itinerary_version;
  using _erasures_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _erasures_type erasures;
  using _delays_type =
    std::vector<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>>>;
  _delays_type delays;
  using _additions_type =
    rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator>;
  _additions_type additions;
  using _progress_type =
    rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator>;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__participant_id(
    const uint64_t & _arg)
  {
    this->participant_id = _arg;
    return *this;
  }
  Type & set__itinerary_version(
    const uint64_t & _arg)
  {
    this->itinerary_version = _arg;
    return *this;
  }
  Type & set__erasures(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->erasures = _arg;
    return *this;
  }
  Type & set__delays(
    const std::vector<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>>> & _arg)
  {
    this->delays = _arg;
    return *this;
  }
  Type & set__additions(
    const rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator> & _arg)
  {
    this->additions = _arg;
    return *this;
  }
  Type & set__progress(
    const rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator> & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleParticipantPatch
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleParticipantPatch
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleParticipantPatch_ & other) const
  {
    if (this->participant_id != other.participant_id) {
      return false;
    }
    if (this->itinerary_version != other.itinerary_version) {
      return false;
    }
    if (this->erasures != other.erasures) {
      return false;
    }
    if (this->delays != other.delays) {
      return false;
    }
    if (this->additions != other.additions) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleParticipantPatch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleParticipantPatch_

// alias to use template instance with default allocator
using ScheduleParticipantPatch =
  rmf_traffic_msgs::msg::ScheduleParticipantPatch_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__STRUCT_HPP_
