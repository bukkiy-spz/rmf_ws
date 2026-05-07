// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__STRUCT_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sessions'
#include "rmf_door_msgs/msg/detail/session__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_door_msgs__msg__DoorSessions __attribute__((deprecated))
#else
# define DEPRECATED__rmf_door_msgs__msg__DoorSessions __declspec(deprecated)
#endif

namespace rmf_door_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorSessions_
{
  using Type = DoorSessions_<ContainerAllocator>;

  explicit DoorSessions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->door_name = "";
    }
  }

  explicit DoorSessions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : door_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->door_name = "";
    }
  }

  // field types and members
  using _door_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _door_name_type door_name;
  using _sessions_type =
    std::vector<rmf_door_msgs::msg::Session_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_door_msgs::msg::Session_<ContainerAllocator>>>;
  _sessions_type sessions;

  // setters for named parameter idiom
  Type & set__door_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->door_name = _arg;
    return *this;
  }
  Type & set__sessions(
    const std::vector<rmf_door_msgs::msg::Session_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_door_msgs::msg::Session_<ContainerAllocator>>> & _arg)
  {
    this->sessions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_door_msgs::msg::DoorSessions_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_door_msgs::msg::DoorSessions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_door_msgs__msg__DoorSessions
    std::shared_ptr<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_door_msgs__msg__DoorSessions
    std::shared_ptr<rmf_door_msgs::msg::DoorSessions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorSessions_ & other) const
  {
    if (this->door_name != other.door_name) {
      return false;
    }
    if (this->sessions != other.sessions) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorSessions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorSessions_

// alias to use template instance with default allocator
using DoorSessions =
  rmf_door_msgs::msg::DoorSessions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__STRUCT_HPP_
