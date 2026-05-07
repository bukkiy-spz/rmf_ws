// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQueryParticipants.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_PARTICIPANTS__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_PARTICIPANTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleQueryParticipants __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleQueryParticipants __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleQueryParticipants_
{
  using Type = ScheduleQueryParticipants_<ContainerAllocator>;

  explicit ScheduleQueryParticipants_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit ScheduleQueryParticipants_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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
  using _ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _ids_type ids;

  // setters for named parameter idiom
  Type & set__type(
    const uint16_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ALL =
    1u;
  static constexpr uint16_t INCLUDE =
    2u;
  static constexpr uint16_t EXCLUDE =
    3u;

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleQueryParticipants
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleQueryParticipants
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQueryParticipants_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleQueryParticipants_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->ids != other.ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleQueryParticipants_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleQueryParticipants_

// alias to use template instance with default allocator
using ScheduleQueryParticipants =
  rmf_traffic_msgs::msg::ScheduleQueryParticipants_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ScheduleQueryParticipants_<ContainerAllocator>::ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ScheduleQueryParticipants_<ContainerAllocator>::INCLUDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ScheduleQueryParticipants_<ContainerAllocator>::EXCLUDE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_PARTICIPANTS__STRUCT_HPP_
