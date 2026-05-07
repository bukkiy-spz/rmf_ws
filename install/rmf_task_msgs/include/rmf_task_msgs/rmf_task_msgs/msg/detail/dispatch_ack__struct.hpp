// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/DispatchAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__DispatchAck __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__DispatchAck __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DispatchAck_
{
  using Type = DispatchAck_<ContainerAllocator>;

  explicit DispatchAck_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dispatch_id = 0ull;
      this->success = false;
    }
  }

  explicit DispatchAck_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dispatch_id = 0ull;
      this->success = false;
    }
  }

  // field types and members
  using _dispatch_id_type =
    uint64_t;
  _dispatch_id_type dispatch_id;
  using _success_type =
    bool;
  _success_type success;
  using _errors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _errors_type errors;

  // setters for named parameter idiom
  Type & set__dispatch_id(
    const uint64_t & _arg)
  {
    this->dispatch_id = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__errors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->errors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::DispatchAck_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::DispatchAck_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::DispatchAck_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::DispatchAck_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::DispatchAck_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::DispatchAck_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::DispatchAck_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::DispatchAck_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::DispatchAck_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::DispatchAck_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__DispatchAck
    std::shared_ptr<rmf_task_msgs::msg::DispatchAck_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__DispatchAck
    std::shared_ptr<rmf_task_msgs::msg::DispatchAck_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DispatchAck_ & other) const
  {
    if (this->dispatch_id != other.dispatch_id) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->errors != other.errors) {
      return false;
    }
    return true;
  }
  bool operator!=(const DispatchAck_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DispatchAck_

// alias to use template instance with default allocator
using DispatchAck =
  rmf_task_msgs::msg::DispatchAck_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__STRUCT_HPP_
