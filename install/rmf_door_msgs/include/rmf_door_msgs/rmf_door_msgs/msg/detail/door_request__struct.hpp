// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_door_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__STRUCT_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__STRUCT_HPP_

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
// Member 'requested_mode'
#include "rmf_door_msgs/msg/detail/door_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_door_msgs__msg__DoorRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_door_msgs__msg__DoorRequest __declspec(deprecated)
#endif

namespace rmf_door_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorRequest_
{
  using Type = DoorRequest_<ContainerAllocator>;

  explicit DoorRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_time(_init),
    requested_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester_id = "";
      this->door_name = "";
    }
  }

  explicit DoorRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_time(_alloc, _init),
    requester_id(_alloc),
    door_name(_alloc),
    requested_mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester_id = "";
      this->door_name = "";
    }
  }

  // field types and members
  using _request_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _request_time_type request_time;
  using _requester_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _requester_id_type requester_id;
  using _door_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _door_name_type door_name;
  using _requested_mode_type =
    rmf_door_msgs::msg::DoorMode_<ContainerAllocator>;
  _requested_mode_type requested_mode;

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
  Type & set__door_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->door_name = _arg;
    return *this;
  }
  Type & set__requested_mode(
    const rmf_door_msgs::msg::DoorMode_<ContainerAllocator> & _arg)
  {
    this->requested_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_door_msgs::msg::DoorRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_door_msgs::msg::DoorRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::DoorRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_door_msgs::msg::DoorRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::DoorRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::DoorRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_door_msgs::msg::DoorRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_door_msgs::msg::DoorRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::DoorRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_door_msgs::msg::DoorRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_door_msgs__msg__DoorRequest
    std::shared_ptr<rmf_door_msgs::msg::DoorRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_door_msgs__msg__DoorRequest
    std::shared_ptr<rmf_door_msgs::msg::DoorRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorRequest_ & other) const
  {
    if (this->request_time != other.request_time) {
      return false;
    }
    if (this->requester_id != other.requester_id) {
      return false;
    }
    if (this->door_name != other.door_name) {
      return false;
    }
    if (this->requested_mode != other.requested_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorRequest_

// alias to use template instance with default allocator
using DoorRequest =
  rmf_door_msgs::msg::DoorRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__STRUCT_HPP_
