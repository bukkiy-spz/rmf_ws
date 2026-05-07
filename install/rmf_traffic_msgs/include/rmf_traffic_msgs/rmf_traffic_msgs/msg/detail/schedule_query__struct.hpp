// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'spacetime'
#include "rmf_traffic_msgs/msg/detail/schedule_query_spacetime__struct.hpp"
// Member 'participants'
#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleQuery __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleQuery __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleQuery_
{
  using Type = ScheduleQuery_<ContainerAllocator>;

  explicit ScheduleQuery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : spacetime(_init),
    participants(_init)
  {
    (void)_init;
  }

  explicit ScheduleQuery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : spacetime(_alloc, _init),
    participants(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _spacetime_type =
    rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator>;
  _spacetime_type spacetime;
  using _participants_type =
    rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator>;
  _participants_type participants;

  // setters for named parameter idiom
  Type & set__spacetime(
    const rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator> & _arg)
  {
    this->spacetime = _arg;
    return *this;
  }
  Type & set__participants(
    const rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator> & _arg)
  {
    this->participants = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleQuery
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleQuery
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleQuery_ & other) const
  {
    if (this->spacetime != other.spacetime) {
      return false;
    }
    if (this->participants != other.participants) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleQuery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleQuery_

// alias to use template instance with default allocator
using ScheduleQuery =
  rmf_traffic_msgs::msg::ScheduleQuery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__STRUCT_HPP_
