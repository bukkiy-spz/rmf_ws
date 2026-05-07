// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserState.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__STRUCT_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_dispenser_msgs__msg__DispenserState __attribute__((deprecated))
#else
# define DEPRECATED__rmf_dispenser_msgs__msg__DispenserState __declspec(deprecated)
#endif

namespace rmf_dispenser_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DispenserState_
{
  using Type = DispenserState_<ContainerAllocator>;

  explicit DispenserState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guid = "";
      this->mode = 0l;
      this->seconds_remaining = 0.0f;
    }
  }

  explicit DispenserState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_alloc, _init),
    guid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guid = "";
      this->mode = 0l;
      this->seconds_remaining = 0.0f;
    }
  }

  // field types and members
  using _time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_type time;
  using _guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _guid_type guid;
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _request_guid_queue_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _request_guid_queue_type request_guid_queue;
  using _seconds_remaining_type =
    float;
  _seconds_remaining_type seconds_remaining;

  // setters for named parameter idiom
  Type & set__time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->guid = _arg;
    return *this;
  }
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__request_guid_queue(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->request_guid_queue = _arg;
    return *this;
  }
  Type & set__seconds_remaining(
    const float & _arg)
  {
    this->seconds_remaining = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t IDLE =
    0;
  static constexpr int32_t BUSY =
    1;
  static constexpr int32_t OFFLINE =
    2;

  // pointer types
  using RawPtr =
    rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_dispenser_msgs__msg__DispenserState
    std::shared_ptr<rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_dispenser_msgs__msg__DispenserState
    std::shared_ptr<rmf_dispenser_msgs::msg::DispenserState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DispenserState_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->guid != other.guid) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->request_guid_queue != other.request_guid_queue) {
      return false;
    }
    if (this->seconds_remaining != other.seconds_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const DispenserState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DispenserState_

// alias to use template instance with default allocator
using DispenserState =
  rmf_dispenser_msgs::msg::DispenserState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DispenserState_<ContainerAllocator>::IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DispenserState_<ContainerAllocator>::BUSY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DispenserState_<ContainerAllocator>::OFFLINE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_dispenser_msgs

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__STRUCT_HPP_
