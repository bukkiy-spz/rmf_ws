// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/Behavior.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'parameters'
#include "rmf_task_msgs/msg/detail/behavior_parameter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__Behavior __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__Behavior __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Behavior_
{
  using Type = Behavior_<ContainerAllocator>;

  explicit Behavior_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Behavior_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _parameters_type =
    std::vector<rmf_task_msgs::msg::BehaviorParameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::BehaviorParameter_<ContainerAllocator>>>;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::vector<rmf_task_msgs::msg::BehaviorParameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::BehaviorParameter_<ContainerAllocator>>> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::Behavior_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::Behavior_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Behavior_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Behavior_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Behavior_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Behavior_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Behavior_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Behavior_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Behavior_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Behavior_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__Behavior
    std::shared_ptr<rmf_task_msgs::msg::Behavior_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__Behavior
    std::shared_ptr<rmf_task_msgs::msg::Behavior_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Behavior_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const Behavior_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Behavior_

// alias to use template instance with default allocator
using Behavior =
  rmf_task_msgs::msg::Behavior_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__STRUCT_HPP_
