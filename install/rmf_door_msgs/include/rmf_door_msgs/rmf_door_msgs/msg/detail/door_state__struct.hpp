// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_door_msgs:msg/DoorState.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_STATE__STRUCT_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'door_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'current_mode'
#include "rmf_door_msgs/msg/detail/door_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_door_msgs__msg__DoorState __attribute__((deprecated))
#else
# define DEPRECATED__rmf_door_msgs__msg__DoorState __declspec(deprecated)
#endif

namespace rmf_door_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorState_
{
  using Type = DoorState_<ContainerAllocator>;

  explicit DoorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : door_time(_init),
    current_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->door_name = "";
    }
  }

  explicit DoorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : door_time(_alloc, _init),
    door_name(_alloc),
    current_mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->door_name = "";
    }
  }

  // field types and members
  using _door_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _door_time_type door_time;
  using _door_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _door_name_type door_name;
  using _current_mode_type =
    rmf_door_msgs::msg::DoorMode_<ContainerAllocator>;
  _current_mode_type current_mode;

  // setters for named parameter idiom
  Type & set__door_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->door_time = _arg;
    return *this;
  }
  Type & set__door_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->door_name = _arg;
    return *this;
  }
  Type & set__current_mode(
    const rmf_door_msgs::msg::DoorMode_<ContainerAllocator> & _arg)
  {
    this->current_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_door_msgs::msg::DoorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_door_msgs::msg::DoorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::DoorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::DoorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::DoorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::DoorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::DoorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::DoorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::DoorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::DoorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_door_msgs__msg__DoorState
    std::shared_ptr<rmf_door_msgs::msg::DoorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_door_msgs__msg__DoorState
    std::shared_ptr<rmf_door_msgs::msg::DoorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorState_ & other) const
  {
    if (this->door_time != other.door_time) {
      return false;
    }
    if (this->door_name != other.door_name) {
      return false;
    }
    if (this->current_mode != other.current_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorState_

// alias to use template instance with default allocator
using DoorState =
  rmf_door_msgs::msg::DoorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_STATE__STRUCT_HPP_
