// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/PauseRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__PAUSE_REQUEST__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__PAUSE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__PauseRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__PauseRequest __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PauseRequest_
{
  using Type = PauseRequest_<ContainerAllocator>;

  explicit PauseRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->robot_name = "";
      this->mode_request_id = 0ull;
      this->type = 0ul;
      this->at_checkpoint = 0ul;
    }
  }

  explicit PauseRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet_name(_alloc),
    robot_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->robot_name = "";
      this->mode_request_id = 0ull;
      this->type = 0ul;
      this->at_checkpoint = 0ul;
    }
  }

  // field types and members
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _mode_request_id_type =
    uint64_t;
  _mode_request_id_type mode_request_id;
  using _type_type =
    uint32_t;
  _type_type type;
  using _at_checkpoint_type =
    uint32_t;
  _at_checkpoint_type at_checkpoint;

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
  Type & set__mode_request_id(
    const uint64_t & _arg)
  {
    this->mode_request_id = _arg;
    return *this;
  }
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__at_checkpoint(
    const uint32_t & _arg)
  {
    this->at_checkpoint = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t TYPE_PAUSE_IMMEDIATELY =
    0u;
  static constexpr uint32_t TYPE_PAUSE_AT_CHECKPOINT =
    1u;
  static constexpr uint32_t TYPE_RESUME =
    2u;

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__PauseRequest
    std::shared_ptr<rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__PauseRequest
    std::shared_ptr<rmf_fleet_msgs::msg::PauseRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PauseRequest_ & other) const
  {
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->mode_request_id != other.mode_request_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->at_checkpoint != other.at_checkpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const PauseRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PauseRequest_

// alias to use template instance with default allocator
using PauseRequest =
  rmf_fleet_msgs::msg::PauseRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PauseRequest_<ContainerAllocator>::TYPE_PAUSE_IMMEDIATELY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PauseRequest_<ContainerAllocator>::TYPE_PAUSE_AT_CHECKPOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PauseRequest_<ContainerAllocator>::TYPE_RESUME;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__PAUSE_REQUEST__STRUCT_HPP_
