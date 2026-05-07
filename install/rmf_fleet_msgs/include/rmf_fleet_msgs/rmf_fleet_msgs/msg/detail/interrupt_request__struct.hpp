// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/InterruptRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__INTERRUPT_REQUEST__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__INTERRUPT_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__InterruptRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__InterruptRequest __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InterruptRequest_
{
  using Type = InterruptRequest_<ContainerAllocator>;

  explicit InterruptRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->robot_name = "";
      this->interrupt_id = "";
      this->type = 0;
    }
  }

  explicit InterruptRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet_name(_alloc),
    robot_name(_alloc),
    interrupt_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
      this->robot_name = "";
      this->interrupt_id = "";
      this->type = 0;
    }
  }

  // field types and members
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _interrupt_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _interrupt_id_type interrupt_id;
  using _labels_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _labels_type labels;
  using _type_type =
    uint8_t;
  _type_type type;

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
  Type & set__interrupt_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->interrupt_id = _arg;
    return *this;
  }
  Type & set__labels(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->labels = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_INTERRUPT =
    0u;
  static constexpr uint8_t TYPE_RESUME =
    1u;

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__InterruptRequest
    std::shared_ptr<rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__InterruptRequest
    std::shared_ptr<rmf_fleet_msgs::msg::InterruptRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterruptRequest_ & other) const
  {
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->interrupt_id != other.interrupt_id) {
      return false;
    }
    if (this->labels != other.labels) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterruptRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterruptRequest_

// alias to use template instance with default allocator
using InterruptRequest =
  rmf_fleet_msgs::msg::InterruptRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InterruptRequest_<ContainerAllocator>::TYPE_INTERRUPT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InterruptRequest_<ContainerAllocator>::TYPE_RESUME;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__INTERRUPT_REQUEST__STRUCT_HPP_
