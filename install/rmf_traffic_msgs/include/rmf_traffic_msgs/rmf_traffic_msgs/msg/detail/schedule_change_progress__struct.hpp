// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeProgress.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeProgress __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeProgress __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleChangeProgress_
{
  using Type = ScheduleChangeProgress_<ContainerAllocator>;

  explicit ScheduleChangeProgress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_progress = false;
      this->version = 0ull;
    }
  }

  explicit ScheduleChangeProgress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_progress = false;
      this->version = 0ull;
    }
  }

  // field types and members
  using _has_progress_type =
    bool;
  _has_progress_type has_progress;
  using _version_type =
    uint64_t;
  _version_type version;
  using _checkpoints_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _checkpoints_type checkpoints;

  // setters for named parameter idiom
  Type & set__has_progress(
    const bool & _arg)
  {
    this->has_progress = _arg;
    return *this;
  }
  Type & set__version(
    const uint64_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__checkpoints(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->checkpoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeProgress
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeProgress
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeProgress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleChangeProgress_ & other) const
  {
    if (this->has_progress != other.has_progress) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->checkpoints != other.checkpoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleChangeProgress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleChangeProgress_

// alias to use template instance with default allocator
using ScheduleChangeProgress =
  rmf_traffic_msgs::msg::ScheduleChangeProgress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__STRUCT_HPP_
