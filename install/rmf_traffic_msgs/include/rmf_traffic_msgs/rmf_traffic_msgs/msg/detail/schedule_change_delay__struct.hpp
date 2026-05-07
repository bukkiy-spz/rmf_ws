// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeDelay.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_DELAY__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_DELAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeDelay __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeDelay __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleChangeDelay_
{
  using Type = ScheduleChangeDelay_<ContainerAllocator>;

  explicit ScheduleChangeDelay_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delay = 0ll;
    }
  }

  explicit ScheduleChangeDelay_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delay = 0ll;
    }
  }

  // field types and members
  using _delay_type =
    int64_t;
  _delay_type delay;

  // setters for named parameter idiom
  Type & set__delay(
    const int64_t & _arg)
  {
    this->delay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeDelay
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeDelay
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeDelay_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleChangeDelay_ & other) const
  {
    if (this->delay != other.delay) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleChangeDelay_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleChangeDelay_

// alias to use template instance with default allocator
using ScheduleChangeDelay =
  rmf_traffic_msgs::msg::ScheduleChangeDelay_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_DELAY__STRUCT_HPP_
