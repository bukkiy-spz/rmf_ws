// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__STRUCT_HPP_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_timeout'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_charger_msgs__msg__ChargerRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_charger_msgs__msg__ChargerRequest __declspec(deprecated)
#endif

namespace rmf_charger_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargerRequest_
{
  using Type = ChargerRequest_<ContainerAllocator>;

  explicit ChargerRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_timeout(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charger_name = "";
      this->fleet_name = "";
      this->robot_name = "";
      this->request_id = "";
    }
  }

  explicit ChargerRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : charger_name(_alloc),
    fleet_name(_alloc),
    robot_name(_alloc),
    start_timeout(_alloc, _init),
    request_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charger_name = "";
      this->fleet_name = "";
      this->robot_name = "";
      this->request_id = "";
    }
  }

  // field types and members
  using _charger_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _charger_name_type charger_name;
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _start_timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _start_timeout_type start_timeout;
  using _request_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_id_type request_id;

  // setters for named parameter idiom
  Type & set__charger_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->charger_name = _arg;
    return *this;
  }
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
  Type & set__start_timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->start_timeout = _arg;
    return *this;
  }
  Type & set__request_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_charger_msgs__msg__ChargerRequest
    std::shared_ptr<rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_charger_msgs__msg__ChargerRequest
    std::shared_ptr<rmf_charger_msgs::msg::ChargerRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargerRequest_ & other) const
  {
    if (this->charger_name != other.charger_name) {
      return false;
    }
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->start_timeout != other.start_timeout) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargerRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargerRequest_

// alias to use template instance with default allocator
using ChargerRequest =
  rmf_charger_msgs::msg::ChargerRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_charger_msgs

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__STRUCT_HPP_
