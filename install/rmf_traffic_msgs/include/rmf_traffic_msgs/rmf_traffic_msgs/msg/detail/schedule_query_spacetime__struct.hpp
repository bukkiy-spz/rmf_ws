// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQuerySpacetime.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_SPACETIME__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_SPACETIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'regions'
#include "rmf_traffic_msgs/msg/detail/region__struct.hpp"
// Member 'shape_context'
#include "rmf_traffic_msgs/msg/detail/shape_context__struct.hpp"
// Member 'timespan'
#include "rmf_traffic_msgs/msg/detail/timespan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleQuerySpacetime __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleQuerySpacetime __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleQuerySpacetime_
{
  using Type = ScheduleQuerySpacetime_<ContainerAllocator>;

  explicit ScheduleQuerySpacetime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shape_context(_init),
    timespan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit ScheduleQuerySpacetime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shape_context(_alloc, _init),
    timespan(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint16_t;
  _type_type type;
  using _regions_type =
    std::vector<rmf_traffic_msgs::msg::Region_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Region_<ContainerAllocator>>>;
  _regions_type regions;
  using _shape_context_type =
    rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator>;
  _shape_context_type shape_context;
  using _timespan_type =
    rmf_traffic_msgs::msg::Timespan_<ContainerAllocator>;
  _timespan_type timespan;

  // setters for named parameter idiom
  Type & set__type(
    const uint16_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__regions(
    const std::vector<rmf_traffic_msgs::msg::Region_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Region_<ContainerAllocator>>> & _arg)
  {
    this->regions = _arg;
    return *this;
  }
  Type & set__shape_context(
    const rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator> & _arg)
  {
    this->shape_context = _arg;
    return *this;
  }
  Type & set__timespan(
    const rmf_traffic_msgs::msg::Timespan_<ContainerAllocator> & _arg)
  {
    this->timespan = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ALL =
    1u;
  static constexpr uint16_t REGIONS =
    2u;
  static constexpr uint16_t TIMESPAN =
    3u;

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleQuerySpacetime
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleQuerySpacetime
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleQuerySpacetime_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->regions != other.regions) {
      return false;
    }
    if (this->shape_context != other.shape_context) {
      return false;
    }
    if (this->timespan != other.timespan) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleQuerySpacetime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleQuerySpacetime_

// alias to use template instance with default allocator
using ScheduleQuerySpacetime =
  rmf_traffic_msgs::msg::ScheduleQuerySpacetime_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ScheduleQuerySpacetime_<ContainerAllocator>::ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ScheduleQuerySpacetime_<ContainerAllocator>::REGIONS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ScheduleQuerySpacetime_<ContainerAllocator>::TIMESPAN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_SPACETIME__STRUCT_HPP_
