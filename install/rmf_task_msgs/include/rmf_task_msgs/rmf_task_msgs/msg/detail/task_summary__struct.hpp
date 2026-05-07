// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/TaskSummary.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'task_profile'
#include "rmf_task_msgs/msg/detail/task_profile__struct.hpp"
// Member 'submission_time'
// Member 'start_time'
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__TaskSummary __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__TaskSummary __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskSummary_
{
  using Type = TaskSummary_<ContainerAllocator>;

  explicit TaskSummary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_profile(_init),
    submission_time(_init),
    start_time(_init),
    end_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->task_id = "";
      this->state = 0ul;
      this->status = "";
      this->robot_name = "";
    }
  }

  explicit TaskSummary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet_name(_alloc),
    task_id(_alloc),
    task_profile(_alloc, _init),
    status(_alloc),
    submission_time(_alloc, _init),
    start_time(_alloc, _init),
    end_time(_alloc, _init),
    robot_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->task_id = "";
      this->state = 0ul;
      this->status = "";
      this->robot_name = "";
    }
  }

  // field types and members
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _task_profile_type =
    rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>;
  _task_profile_type task_profile;
  using _state_type =
    uint32_t;
  _state_type state;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _submission_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _submission_time_type submission_time;
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_time_type end_time;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;

  // setters for named parameter idiom
  Type & set__fleet_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fleet_name = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__task_profile(
    const rmf_task_msgs::msg::TaskProfile_<ContainerAllocator> & _arg)
  {
    this->task_profile = _arg;
    return *this;
  }
  Type & set__state(
    const uint32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__submission_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->submission_time = _arg;
    return *this;
  }
  Type & set__start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t STATE_QUEUED =
    0u;
  static constexpr uint32_t STATE_ACTIVE =
    1u;
  static constexpr uint32_t STATE_COMPLETED =
    2u;
  static constexpr uint32_t STATE_FAILED =
    3u;
  static constexpr uint32_t STATE_CANCELED =
    4u;
  static constexpr uint32_t STATE_PENDING =
    5u;

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::TaskSummary_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::TaskSummary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__TaskSummary
    std::shared_ptr<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__TaskSummary
    std::shared_ptr<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskSummary_ & other) const
  {
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->task_profile != other.task_profile) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->submission_time != other.submission_time) {
      return false;
    }
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskSummary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskSummary_

// alias to use template instance with default allocator
using TaskSummary =
  rmf_task_msgs::msg::TaskSummary_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskSummary_<ContainerAllocator>::STATE_QUEUED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskSummary_<ContainerAllocator>::STATE_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskSummary_<ContainerAllocator>::STATE_COMPLETED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskSummary_<ContainerAllocator>::STATE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskSummary_<ContainerAllocator>::STATE_CANCELED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskSummary_<ContainerAllocator>::STATE_PENDING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__STRUCT_HPP_
