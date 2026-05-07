// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/DestinationRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DESTINATION_REQUEST__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DESTINATION_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'destination'
#include "rmf_fleet_msgs/msg/detail/location__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__DestinationRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__DestinationRequest __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DestinationRequest_
{
  using Type = DestinationRequest_<ContainerAllocator>;

  explicit DestinationRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : destination(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->robot_name = "";
      this->task_id = "";
    }
  }

  explicit DestinationRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet_name(_alloc),
    robot_name(_alloc),
    destination(_alloc, _init),
    task_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->robot_name = "";
      this->task_id = "";
    }
  }

  // field types and members
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _destination_type =
    rmf_fleet_msgs::msg::Location_<ContainerAllocator>;
  _destination_type destination;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;

  // setters for named parameter idiom
  Type & set__fleet_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fleet_name = _arg;
    return *this;
  }
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__destination(
    const rmf_fleet_msgs::msg::Location_<ContainerAllocator> & _arg)
  {
    this->destination = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__DestinationRequest
    std::shared_ptr<rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__DestinationRequest
    std::shared_ptr<rmf_fleet_msgs::msg::DestinationRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DestinationRequest_ & other) const
  {
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->destination != other.destination) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DestinationRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DestinationRequest_

// alias to use template instance with default allocator
using DestinationRequest =
  rmf_fleet_msgs::msg::DestinationRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DESTINATION_REQUEST__STRUCT_HPP_
