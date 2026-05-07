// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/TaskType.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_TYPE__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__TaskType __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__TaskType __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskType_
{
  using Type = TaskType_<ContainerAllocator>;

  explicit TaskType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
    }
  }

  explicit TaskType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
    }
  }

  // field types and members
  using _type_type =
    uint32_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t TYPE_STATION =
    0u;
  static constexpr uint32_t TYPE_LOOP =
    1u;
  static constexpr uint32_t TYPE_DELIVERY =
    2u;
  static constexpr uint32_t TYPE_CHARGE_BATTERY =
    3u;
  static constexpr uint32_t TYPE_CLEAN =
    4u;
  static constexpr uint32_t TYPE_PATROL =
    5u;

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::TaskType_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::TaskType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::TaskType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::TaskType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::TaskType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::TaskType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::TaskType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::TaskType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::TaskType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::TaskType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__TaskType
    std::shared_ptr<rmf_task_msgs::msg::TaskType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__TaskType
    std::shared_ptr<rmf_task_msgs::msg::TaskType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskType_

// alias to use template instance with default allocator
using TaskType =
  rmf_task_msgs::msg::TaskType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskType_<ContainerAllocator>::TYPE_STATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskType_<ContainerAllocator>::TYPE_LOOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskType_<ContainerAllocator>::TYPE_DELIVERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskType_<ContainerAllocator>::TYPE_CHARGE_BATTERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskType_<ContainerAllocator>::TYPE_CLEAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskType_<ContainerAllocator>::TYPE_PATROL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_TYPE__STRUCT_HPP_
