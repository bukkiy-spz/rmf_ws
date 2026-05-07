// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/Assignment.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__ASSIGNMENT__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__ASSIGNMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__Assignment __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__Assignment __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Assignment_
{
  using Type = Assignment_<ContainerAllocator>;

  explicit Assignment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_assigned = false;
      this->fleet_name = "";
      this->expected_robot_name = "";
    }
  }

  explicit Assignment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet_name(_alloc),
    expected_robot_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_assigned = false;
      this->fleet_name = "";
      this->expected_robot_name = "";
    }
  }

  // field types and members
  using _is_assigned_type =
    bool;
  _is_assigned_type is_assigned;
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _expected_robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _expected_robot_name_type expected_robot_name;

  // setters for named parameter idiom
  Type & set__is_assigned(
    const bool & _arg)
  {
    this->is_assigned = _arg;
    return *this;
  }
  Type & set__fleet_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fleet_name = _arg;
    return *this;
  }
  Type & set__expected_robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->expected_robot_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::Assignment_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::Assignment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Assignment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Assignment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Assignment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Assignment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Assignment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Assignment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Assignment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Assignment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__Assignment
    std::shared_ptr<rmf_task_msgs::msg::Assignment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__Assignment
    std::shared_ptr<rmf_task_msgs::msg::Assignment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Assignment_ & other) const
  {
    if (this->is_assigned != other.is_assigned) {
      return false;
    }
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->expected_robot_name != other.expected_robot_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Assignment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Assignment_

// alias to use template instance with default allocator
using Assignment =
  rmf_task_msgs::msg::Assignment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ASSIGNMENT__STRUCT_HPP_
