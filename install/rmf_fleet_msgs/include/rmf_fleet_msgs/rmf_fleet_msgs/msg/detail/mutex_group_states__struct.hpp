// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'assignments'
#include "rmf_fleet_msgs/msg/detail/mutex_group_assignment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__MutexGroupStates __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__MutexGroupStates __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MutexGroupStates_
{
  using Type = MutexGroupStates_<ContainerAllocator>;

  explicit MutexGroupStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MutexGroupStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _assignments_type =
    std::vector<rmf_fleet_msgs::msg::MutexGroupAssignment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::MutexGroupAssignment_<ContainerAllocator>>>;
  _assignments_type assignments;

  // setters for named parameter idiom
  Type & set__assignments(
    const std::vector<rmf_fleet_msgs::msg::MutexGroupAssignment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::MutexGroupAssignment_<ContainerAllocator>>> & _arg)
  {
    this->assignments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__MutexGroupStates
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__MutexGroupStates
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MutexGroupStates_ & other) const
  {
    if (this->assignments != other.assignments) {
      return false;
    }
    return true;
  }
  bool operator!=(const MutexGroupStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MutexGroupStates_

// alias to use template instance with default allocator
using MutexGroupStates =
  rmf_fleet_msgs::msg::MutexGroupStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__STRUCT_HPP_
