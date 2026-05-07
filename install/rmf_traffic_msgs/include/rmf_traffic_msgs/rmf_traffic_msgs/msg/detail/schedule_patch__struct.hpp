// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/SchedulePatch.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'participants'
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__struct.hpp"
// Member 'cull'
#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__SchedulePatch __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__SchedulePatch __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SchedulePatch_
{
  using Type = SchedulePatch_<ContainerAllocator>;

  explicit SchedulePatch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_base_version = false;
      this->base_version = 0ull;
      this->latest_version = 0ull;
    }
  }

  explicit SchedulePatch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_base_version = false;
      this->base_version = 0ull;
      this->latest_version = 0ull;
    }
  }

  // field types and members
  using _participants_type =
    std::vector<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>>>;
  _participants_type participants;
  using _cull_type =
    std::vector<rmf_traffic_msgs::msg::ScheduleChangeCull_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleChangeCull_<ContainerAllocator>>>;
  _cull_type cull;
  using _has_base_version_type =
    bool;
  _has_base_version_type has_base_version;
  using _base_version_type =
    uint64_t;
  _base_version_type base_version;
  using _latest_version_type =
    uint64_t;
  _latest_version_type latest_version;

  // setters for named parameter idiom
  Type & set__participants(
    const std::vector<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleParticipantPatch_<ContainerAllocator>>> & _arg)
  {
    this->participants = _arg;
    return *this;
  }
  Type & set__cull(
    const std::vector<rmf_traffic_msgs::msg::ScheduleChangeCull_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleChangeCull_<ContainerAllocator>>> & _arg)
  {
    this->cull = _arg;
    return *this;
  }
  Type & set__has_base_version(
    const bool & _arg)
  {
    this->has_base_version = _arg;
    return *this;
  }
  Type & set__base_version(
    const uint64_t & _arg)
  {
    this->base_version = _arg;
    return *this;
  }
  Type & set__latest_version(
    const uint64_t & _arg)
  {
    this->latest_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__SchedulePatch
    std::shared_ptr<rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__SchedulePatch
    std::shared_ptr<rmf_traffic_msgs::msg::SchedulePatch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SchedulePatch_ & other) const
  {
    if (this->participants != other.participants) {
      return false;
    }
    if (this->cull != other.cull) {
      return false;
    }
    if (this->has_base_version != other.has_base_version) {
      return false;
    }
    if (this->base_version != other.base_version) {
      return false;
    }
    if (this->latest_version != other.latest_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const SchedulePatch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SchedulePatch_

// alias to use template instance with default allocator
using SchedulePatch =
  rmf_traffic_msgs::msg::SchedulePatch_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__STRUCT_HPP_
