// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/DockParameter.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path'
#include "rmf_fleet_msgs/msg/detail/location__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__DockParameter __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__DockParameter __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockParameter_
{
  using Type = DockParameter_<ContainerAllocator>;

  explicit DockParameter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = "";
      this->finish = "";
    }
  }

  explicit DockParameter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc),
    finish(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = "";
      this->finish = "";
    }
  }

  // field types and members
  using _start_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_type start;
  using _finish_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _finish_type finish;
  using _path_type =
    std::vector<rmf_fleet_msgs::msg::Location_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::Location_<ContainerAllocator>>>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__start(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__finish(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->finish = _arg;
    return *this;
  }
  Type & set__path(
    const std::vector<rmf_fleet_msgs::msg::Location_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::Location_<ContainerAllocator>>> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__DockParameter
    std::shared_ptr<rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__DockParameter
    std::shared_ptr<rmf_fleet_msgs::msg::DockParameter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockParameter_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->finish != other.finish) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockParameter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockParameter_

// alias to use template instance with default allocator
using DockParameter =
  rmf_fleet_msgs::msg::DockParameter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__STRUCT_HPP_
