// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'priority'
#include "rmf_task_msgs/msg/detail/priority__struct.hpp"
// Member 'task_type'
#include "rmf_task_msgs/msg/detail/task_type__struct.hpp"
// Member 'station'
#include "rmf_task_msgs/msg/detail/station__struct.hpp"
// Member 'loop'
#include "rmf_task_msgs/msg/detail/loop__struct.hpp"
// Member 'delivery'
#include "rmf_task_msgs/msg/detail/delivery__struct.hpp"
// Member 'clean'
#include "rmf_task_msgs/msg/detail/clean__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__TaskDescription __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__TaskDescription __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskDescription_
{
  using Type = TaskDescription_<ContainerAllocator>;

  explicit TaskDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_init),
    priority(_init),
    task_type(_init),
    station(_init),
    loop(_init),
    delivery(_init),
    clean(_init)
  {
    (void)_init;
  }

  explicit TaskDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_alloc, _init),
    priority(_alloc, _init),
    task_type(_alloc, _init),
    station(_alloc, _init),
    loop(_alloc, _init),
    delivery(_alloc, _init),
    clean(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _priority_type =
    rmf_task_msgs::msg::Priority_<ContainerAllocator>;
  _priority_type priority;
  using _task_type_type =
    rmf_task_msgs::msg::TaskType_<ContainerAllocator>;
  _task_type_type task_type;
  using _station_type =
    rmf_task_msgs::msg::Station_<ContainerAllocator>;
  _station_type station;
  using _loop_type =
    rmf_task_msgs::msg::Loop_<ContainerAllocator>;
  _loop_type loop;
  using _delivery_type =
    rmf_task_msgs::msg::Delivery_<ContainerAllocator>;
  _delivery_type delivery;
  using _clean_type =
    rmf_task_msgs::msg::Clean_<ContainerAllocator>;
  _clean_type clean;

  // setters for named parameter idiom
  Type & set__start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__priority(
    const rmf_task_msgs::msg::Priority_<ContainerAllocator> & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__task_type(
    const rmf_task_msgs::msg::TaskType_<ContainerAllocator> & _arg)
  {
    this->task_type = _arg;
    return *this;
  }
  Type & set__station(
    const rmf_task_msgs::msg::Station_<ContainerAllocator> & _arg)
  {
    this->station = _arg;
    return *this;
  }
  Type & set__loop(
    const rmf_task_msgs::msg::Loop_<ContainerAllocator> & _arg)
  {
    this->loop = _arg;
    return *this;
  }
  Type & set__delivery(
    const rmf_task_msgs::msg::Delivery_<ContainerAllocator> & _arg)
  {
    this->delivery = _arg;
    return *this;
  }
  Type & set__clean(
    const rmf_task_msgs::msg::Clean_<ContainerAllocator> & _arg)
  {
    this->clean = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::TaskDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::TaskDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::TaskDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::TaskDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::TaskDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::TaskDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::TaskDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::TaskDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::TaskDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::TaskDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__TaskDescription
    std::shared_ptr<rmf_task_msgs::msg::TaskDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__TaskDescription
    std::shared_ptr<rmf_task_msgs::msg::TaskDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskDescription_ & other) const
  {
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->station != other.station) {
      return false;
    }
    if (this->loop != other.loop) {
      return false;
    }
    if (this->delivery != other.delivery) {
      return false;
    }
    if (this->clean != other.clean) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskDescription_

// alias to use template instance with default allocator
using TaskDescription =
  rmf_task_msgs::msg::TaskDescription_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_HPP_
