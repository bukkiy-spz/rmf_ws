// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/TaskProfile.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'submission_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'description'
#include "rmf_task_msgs/msg/detail/task_description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__TaskProfile __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__TaskProfile __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskProfile_
{
  using Type = TaskProfile_<ContainerAllocator>;

  explicit TaskProfile_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : submission_time(_init),
    description(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
    }
  }

  explicit TaskProfile_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    submission_time(_alloc, _init),
    description(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _submission_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _submission_time_type submission_time;
  using _description_type =
    rmf_task_msgs::msg::TaskDescription_<ContainerAllocator>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__submission_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->submission_time = _arg;
    return *this;
  }
  Type & set__description(
    const rmf_task_msgs::msg::TaskDescription_<ContainerAllocator> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::TaskProfile_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::TaskProfile_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::TaskProfile_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::TaskProfile_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::TaskProfile_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__TaskProfile
    std::shared_ptr<rmf_task_msgs::msg::TaskProfile_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__TaskProfile
    std::shared_ptr<rmf_task_msgs::msg::TaskProfile_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskProfile_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->submission_time != other.submission_time) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskProfile_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskProfile_

// alias to use template instance with default allocator
using TaskProfile =
  rmf_task_msgs::msg::TaskProfile_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__STRUCT_HPP_
