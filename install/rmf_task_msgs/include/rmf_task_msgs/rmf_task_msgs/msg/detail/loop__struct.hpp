// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/Loop.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__LOOP__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__LOOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__Loop __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__Loop __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Loop_
{
  using Type = Loop_<ContainerAllocator>;

  explicit Loop_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->robot_type = "";
      this->num_loops = 0ul;
      this->start_name = "";
      this->finish_name = "";
    }
  }

  explicit Loop_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    robot_type(_alloc),
    start_name(_alloc),
    finish_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->robot_type = "";
      this->num_loops = 0ul;
      this->start_name = "";
      this->finish_name = "";
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _robot_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type_type robot_type;
  using _num_loops_type =
    uint32_t;
  _num_loops_type num_loops;
  using _start_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_name_type start_name;
  using _finish_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _finish_name_type finish_name;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__robot_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_type = _arg;
    return *this;
  }
  Type & set__num_loops(
    const uint32_t & _arg)
  {
    this->num_loops = _arg;
    return *this;
  }
  Type & set__start_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_name = _arg;
    return *this;
  }
  Type & set__finish_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->finish_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::Loop_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::Loop_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Loop_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Loop_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Loop_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Loop_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Loop_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Loop_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Loop_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Loop_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__Loop
    std::shared_ptr<rmf_task_msgs::msg::Loop_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__Loop
    std::shared_ptr<rmf_task_msgs::msg::Loop_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Loop_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->robot_type != other.robot_type) {
      return false;
    }
    if (this->num_loops != other.num_loops) {
      return false;
    }
    if (this->start_name != other.start_name) {
      return false;
    }
    if (this->finish_name != other.finish_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Loop_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Loop_

// alias to use template instance with default allocator
using Loop =
  rmf_task_msgs::msg::Loop_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__LOOP__STRUCT_HPP_
