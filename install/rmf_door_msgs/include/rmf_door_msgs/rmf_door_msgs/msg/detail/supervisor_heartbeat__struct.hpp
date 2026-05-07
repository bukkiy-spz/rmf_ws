// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_door_msgs:msg/SupervisorHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__STRUCT_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'all_sessions'
#include "rmf_door_msgs/msg/detail/door_sessions__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_door_msgs__msg__SupervisorHeartbeat __attribute__((deprecated))
#else
# define DEPRECATED__rmf_door_msgs__msg__SupervisorHeartbeat __declspec(deprecated)
#endif

namespace rmf_door_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SupervisorHeartbeat_
{
  using Type = SupervisorHeartbeat_<ContainerAllocator>;

  explicit SupervisorHeartbeat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SupervisorHeartbeat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _all_sessions_type =
    std::vector<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>>>;
  _all_sessions_type all_sessions;

  // setters for named parameter idiom
  Type & set__all_sessions(
    const std::vector<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>>> & _arg)
  {
    this->all_sessions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_door_msgs__msg__SupervisorHeartbeat
    std::shared_ptr<rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_door_msgs__msg__SupervisorHeartbeat
    std::shared_ptr<rmf_door_msgs::msg::SupervisorHeartbeat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SupervisorHeartbeat_ & other) const
  {
    if (this->all_sessions != other.all_sessions) {
      return false;
    }
    return true;
  }
  bool operator!=(const SupervisorHeartbeat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SupervisorHeartbeat_

// alias to use template instance with default allocator
using SupervisorHeartbeat =
  rmf_door_msgs::msg::SupervisorHeartbeat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__STRUCT_HPP_
