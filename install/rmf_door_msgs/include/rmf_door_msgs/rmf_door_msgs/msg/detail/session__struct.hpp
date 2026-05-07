// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_door_msgs:msg/Session.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__SESSION__STRUCT_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__SESSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_door_msgs__msg__Session __attribute__((deprecated))
#else
# define DEPRECATED__rmf_door_msgs__msg__Session __declspec(deprecated)
#endif

namespace rmf_door_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Session_
{
  using Type = Session_<ContainerAllocator>;

  explicit Session_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester_id = "";
    }
  }

  explicit Session_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_time(_alloc, _init),
    requester_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester_id = "";
    }
  }

  // field types and members
  using _request_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _request_time_type request_time;
  using _requester_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _requester_id_type requester_id;

  // setters for named parameter idiom
  Type & set__request_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->request_time = _arg;
    return *this;
  }
  Type & set__requester_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->requester_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_door_msgs::msg::Session_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_door_msgs::msg::Session_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::Session_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::Session_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::Session_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::Session_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::Session_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::Session_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::Session_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::Session_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_door_msgs__msg__Session
    std::shared_ptr<rmf_door_msgs::msg::Session_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_door_msgs__msg__Session
    std::shared_ptr<rmf_door_msgs::msg::Session_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Session_ & other) const
  {
    if (this->request_time != other.request_time) {
      return false;
    }
    if (this->requester_id != other.requester_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Session_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Session_

// alias to use template instance with default allocator
using Session =
  rmf_door_msgs::msg::Session_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__SESSION__STRUCT_HPP_
