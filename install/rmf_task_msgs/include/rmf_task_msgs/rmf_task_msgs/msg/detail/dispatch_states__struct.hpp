// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/DispatchStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'active'
// Member 'finished'
#include "rmf_task_msgs/msg/detail/dispatch_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__DispatchStates __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__DispatchStates __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DispatchStates_
{
  using Type = DispatchStates_<ContainerAllocator>;

  explicit DispatchStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DispatchStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _active_type =
    std::vector<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>>>;
  _active_type active;
  using _finished_type =
    std::vector<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>>>;
  _finished_type finished;

  // setters for named parameter idiom
  Type & set__active(
    const std::vector<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>>> & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__finished(
    const std::vector<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::DispatchState_<ContainerAllocator>>> & _arg)
  {
    this->finished = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::DispatchStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::DispatchStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::DispatchStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::DispatchStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::DispatchStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::DispatchStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::DispatchStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::DispatchStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::DispatchStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::DispatchStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__DispatchStates
    std::shared_ptr<rmf_task_msgs::msg::DispatchStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__DispatchStates
    std::shared_ptr<rmf_task_msgs::msg::DispatchStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DispatchStates_ & other) const
  {
    if (this->active != other.active) {
      return false;
    }
    if (this->finished != other.finished) {
      return false;
    }
    return true;
  }
  bool operator!=(const DispatchStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DispatchStates_

// alias to use template instance with default allocator
using DispatchStates =
  rmf_task_msgs::msg::DispatchStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__STRUCT_HPP_
