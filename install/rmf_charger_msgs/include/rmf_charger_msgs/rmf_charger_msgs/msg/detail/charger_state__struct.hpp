// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_charger_msgs:msg/ChargerState.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__STRUCT_HPP_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'charger_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'time_to_fully_charged'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_charger_msgs__msg__ChargerState __attribute__((deprecated))
#else
# define DEPRECATED__rmf_charger_msgs__msg__ChargerState __declspec(deprecated)
#endif

namespace rmf_charger_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargerState_
{
  using Type = ChargerState_<ContainerAllocator>;

  explicit ChargerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : charger_time(_init),
    time_to_fully_charged(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0ul;
      this->charger_name = "";
      this->error_message = "";
      this->request_id = "";
      this->robot_fleet = "";
      this->robot_name = "";
    }
  }

  explicit ChargerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : charger_time(_alloc, _init),
    charger_name(_alloc),
    error_message(_alloc),
    request_id(_alloc),
    robot_fleet(_alloc),
    robot_name(_alloc),
    time_to_fully_charged(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0ul;
      this->charger_name = "";
      this->error_message = "";
      this->request_id = "";
      this->robot_fleet = "";
      this->robot_name = "";
    }
  }

  // field types and members
  using _charger_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _charger_time_type charger_time;
  using _state_type =
    uint32_t;
  _state_type state;
  using _charger_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _charger_name_type charger_name;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _request_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_id_type request_id;
  using _robot_fleet_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_fleet_type robot_fleet;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _time_to_fully_charged_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_to_fully_charged_type time_to_fully_charged;

  // setters for named parameter idiom
  Type & set__charger_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->charger_time = _arg;
    return *this;
  }
  Type & set__state(
    const uint32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__charger_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->charger_name = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__request_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_id = _arg;
    return *this;
  }
  Type & set__robot_fleet(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_fleet = _arg;
    return *this;
  }
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__time_to_fully_charged(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_to_fully_charged = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t CHARGER_IDLE =
    1u;
  static constexpr uint32_t CHARGER_ASSIGNED =
    2u;
  static constexpr uint32_t CHARGER_CHARGING =
    3u;
  static constexpr uint32_t CHARGER_RELEASED =
    4u;
  static constexpr uint32_t CHARGER_ERROR =
    200u;

  // pointer types
  using RawPtr =
    rmf_charger_msgs::msg::ChargerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_charger_msgs::msg::ChargerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_charger_msgs::msg::ChargerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_charger_msgs::msg::ChargerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_charger_msgs::msg::ChargerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_charger_msgs::msg::ChargerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_charger_msgs::msg::ChargerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_charger_msgs::msg::ChargerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_charger_msgs::msg::ChargerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_charger_msgs::msg::ChargerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_charger_msgs__msg__ChargerState
    std::shared_ptr<rmf_charger_msgs::msg::ChargerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_charger_msgs__msg__ChargerState
    std::shared_ptr<rmf_charger_msgs::msg::ChargerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargerState_ & other) const
  {
    if (this->charger_time != other.charger_time) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->charger_name != other.charger_name) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->robot_fleet != other.robot_fleet) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->time_to_fully_charged != other.time_to_fully_charged) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargerState_

// alias to use template instance with default allocator
using ChargerState =
  rmf_charger_msgs::msg::ChargerState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargerState_<ContainerAllocator>::CHARGER_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargerState_<ContainerAllocator>::CHARGER_ASSIGNED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargerState_<ContainerAllocator>::CHARGER_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargerState_<ContainerAllocator>::CHARGER_RELEASED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ChargerState_<ContainerAllocator>::CHARGER_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_charger_msgs

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__STRUCT_HPP_
