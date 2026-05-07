// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistencyRange.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleInconsistencyRange __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleInconsistencyRange __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleInconsistencyRange_
{
  using Type = ScheduleInconsistencyRange_<ContainerAllocator>;

  explicit ScheduleInconsistencyRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lower = 0ull;
      this->upper = 0ull;
    }
  }

  explicit ScheduleInconsistencyRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lower = 0ull;
      this->upper = 0ull;
    }
  }

  // field types and members
  using _lower_type =
    uint64_t;
  _lower_type lower;
  using _upper_type =
    uint64_t;
  _upper_type upper;

  // setters for named parameter idiom
  Type & set__lower(
    const uint64_t & _arg)
  {
    this->lower = _arg;
    return *this;
  }
  Type & set__upper(
    const uint64_t & _arg)
  {
    this->upper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleInconsistencyRange
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleInconsistencyRange
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleInconsistencyRange_ & other) const
  {
    if (this->lower != other.lower) {
      return false;
    }
    if (this->upper != other.upper) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleInconsistencyRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleInconsistencyRange_

// alias to use template instance with default allocator
using ScheduleInconsistencyRange =
  rmf_traffic_msgs::msg::ScheduleInconsistencyRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__STRUCT_HPP_
