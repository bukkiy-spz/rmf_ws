// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/DispatchState.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'assignment'
#include "rmf_task_msgs/msg/detail/assignment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__DispatchState __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__DispatchState __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DispatchState_
{
  using Type = DispatchState_<ContainerAllocator>;

  explicit DispatchState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : assignment(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->status = 0;
    }
  }

  explicit DispatchState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    assignment(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->status = 0;
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _status_type =
    int8_t;
  _status_type status;
  using _assignment_type =
    rmf_task_msgs::msg::Assignment_<ContainerAllocator>;
  _assignment_type assignment;
  using _errors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _errors_type errors;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__assignment(
    const rmf_task_msgs::msg::Assignment_<ContainerAllocator> & _arg)
  {
    this->assignment = _arg;
    return *this;
  }
  Type & set__errors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->errors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_UNINITIALIZED =
    0u;
  static constexpr uint8_t STATUS_QUEUED =
    1u;
  static constexpr uint8_t STATUS_SELECTED =
    2u;
  static constexpr uint8_t STATUS_DISPATCHED =
    3u;
  static constexpr uint8_t STATUS_FAILED_TO_ASSIGN =
    4u;
  static constexpr uint8_t STATUS_CANCELED_IN_FLIGHT =
    5u;

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::DispatchState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::DispatchState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::DispatchState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::DispatchState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::DispatchState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::DispatchState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::DispatchState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__DispatchState
    std::shared_ptr<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__DispatchState
    std::shared_ptr<rmf_task_msgs::msg::DispatchState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DispatchState_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->assignment != other.assignment) {
      return false;
    }
    if (this->errors != other.errors) {
      return false;
    }
    return true;
  }
  bool operator!=(const DispatchState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DispatchState_

// alias to use template instance with default allocator
using DispatchState =
  rmf_task_msgs::msg::DispatchState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DispatchState_<ContainerAllocator>::STATUS_UNINITIALIZED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DispatchState_<ContainerAllocator>::STATUS_QUEUED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DispatchState_<ContainerAllocator>::STATUS_SELECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DispatchState_<ContainerAllocator>::STATUS_DISPATCHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DispatchState_<ContainerAllocator>::STATUS_FAILED_TO_ASSIGN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DispatchState_<ContainerAllocator>::STATUS_CANCELED_IN_FLIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__STRUCT_HPP_
