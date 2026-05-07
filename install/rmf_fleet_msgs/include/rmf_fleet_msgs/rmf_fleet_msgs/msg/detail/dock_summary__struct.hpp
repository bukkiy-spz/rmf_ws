// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/DockSummary.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'docks'
#include "rmf_fleet_msgs/msg/detail/dock__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__DockSummary __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__DockSummary __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockSummary_
{
  using Type = DockSummary_<ContainerAllocator>;

  explicit DockSummary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DockSummary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _docks_type =
    std::vector<rmf_fleet_msgs::msg::Dock_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::Dock_<ContainerAllocator>>>;
  _docks_type docks;

  // setters for named parameter idiom
  Type & set__docks(
    const std::vector<rmf_fleet_msgs::msg::Dock_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::Dock_<ContainerAllocator>>> & _arg)
  {
    this->docks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__DockSummary
    std::shared_ptr<rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__DockSummary
    std::shared_ptr<rmf_fleet_msgs::msg::DockSummary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockSummary_ & other) const
  {
    if (this->docks != other.docks) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockSummary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockSummary_

// alias to use template instance with default allocator
using DockSummary =
  rmf_fleet_msgs::msg::DockSummary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__STRUCT_HPP_
