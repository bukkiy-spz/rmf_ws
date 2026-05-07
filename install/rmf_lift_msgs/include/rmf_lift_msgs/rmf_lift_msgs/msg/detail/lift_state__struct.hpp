// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_lift_msgs:msg/LiftState.idl
// generated code does not contain a copyright notice

#ifndef RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__STRUCT_HPP_
#define RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lift_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_lift_msgs__msg__LiftState __attribute__((deprecated))
#else
# define DEPRECATED__rmf_lift_msgs__msg__LiftState __declspec(deprecated)
#endif

namespace rmf_lift_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LiftState_
{
  using Type = LiftState_<ContainerAllocator>;

  explicit LiftState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lift_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lift_name = "";
      this->current_floor = "";
      this->destination_floor = "";
      this->door_state = 0;
      this->motion_state = 0;
      this->current_mode = 0;
      this->session_id = "";
    }
  }

  explicit LiftState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lift_time(_alloc, _init),
    lift_name(_alloc),
    current_floor(_alloc),
    destination_floor(_alloc),
    session_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lift_name = "";
      this->current_floor = "";
      this->destination_floor = "";
      this->door_state = 0;
      this->motion_state = 0;
      this->current_mode = 0;
      this->session_id = "";
    }
  }

  // field types and members
  using _lift_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _lift_time_type lift_time;
  using _lift_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lift_name_type lift_name;
  using _available_floors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _available_floors_type available_floors;
  using _current_floor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_floor_type current_floor;
  using _destination_floor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _destination_floor_type destination_floor;
  using _door_state_type =
    uint8_t;
  _door_state_type door_state;
  using _motion_state_type =
    uint8_t;
  _motion_state_type motion_state;
  using _available_modes_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _available_modes_type available_modes;
  using _current_mode_type =
    uint8_t;
  _current_mode_type current_mode;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;

  // setters for named parameter idiom
  Type & set__lift_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->lift_time = _arg;
    return *this;
  }
  Type & set__lift_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lift_name = _arg;
    return *this;
  }
  Type & set__available_floors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->available_floors = _arg;
    return *this;
  }
  Type & set__current_floor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_floor = _arg;
    return *this;
  }
  Type & set__destination_floor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->destination_floor = _arg;
    return *this;
  }
  Type & set__door_state(
    const uint8_t & _arg)
  {
    this->door_state = _arg;
    return *this;
  }
  Type & set__motion_state(
    const uint8_t & _arg)
  {
    this->motion_state = _arg;
    return *this;
  }
  Type & set__available_modes(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->available_modes = _arg;
    return *this;
  }
  Type & set__current_mode(
    const uint8_t & _arg)
  {
    this->current_mode = _arg;
    return *this;
  }
  Type & set__session_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->session_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DOOR_CLOSED =
    0u;
  static constexpr uint8_t DOOR_MOVING =
    1u;
  static constexpr uint8_t DOOR_OPEN =
    2u;
  static constexpr uint8_t MOTION_STOPPED =
    0u;
  static constexpr uint8_t MOTION_UP =
    1u;
  static constexpr uint8_t MOTION_DOWN =
    2u;
  static constexpr uint8_t MOTION_UNKNOWN =
    3u;
  static constexpr uint8_t MODE_UNKNOWN =
    0u;
  static constexpr uint8_t MODE_HUMAN =
    1u;
  static constexpr uint8_t MODE_AGV =
    2u;
  static constexpr uint8_t MODE_FIRE =
    3u;
  static constexpr uint8_t MODE_OFFLINE =
    4u;
  static constexpr uint8_t MODE_EMERGENCY =
    5u;

  // pointer types
  using RawPtr =
    rmf_lift_msgs::msg::LiftState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_lift_msgs::msg::LiftState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_lift_msgs::msg::LiftState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_lift_msgs::msg::LiftState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_lift_msgs::msg::LiftState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_lift_msgs::msg::LiftState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_lift_msgs::msg::LiftState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_lift_msgs::msg::LiftState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_lift_msgs::msg::LiftState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_lift_msgs::msg::LiftState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_lift_msgs__msg__LiftState
    std::shared_ptr<rmf_lift_msgs::msg::LiftState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_lift_msgs__msg__LiftState
    std::shared_ptr<rmf_lift_msgs::msg::LiftState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LiftState_ & other) const
  {
    if (this->lift_time != other.lift_time) {
      return false;
    }
    if (this->lift_name != other.lift_name) {
      return false;
    }
    if (this->available_floors != other.available_floors) {
      return false;
    }
    if (this->current_floor != other.current_floor) {
      return false;
    }
    if (this->destination_floor != other.destination_floor) {
      return false;
    }
    if (this->door_state != other.door_state) {
      return false;
    }
    if (this->motion_state != other.motion_state) {
      return false;
    }
    if (this->available_modes != other.available_modes) {
      return false;
    }
    if (this->current_mode != other.current_mode) {
      return false;
    }
    if (this->session_id != other.session_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LiftState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LiftState_

// alias to use template instance with default allocator
using LiftState =
  rmf_lift_msgs::msg::LiftState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::DOOR_CLOSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::DOOR_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::DOOR_OPEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MOTION_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MOTION_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MOTION_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MOTION_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MODE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MODE_HUMAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MODE_AGV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MODE_FIRE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MODE_OFFLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftState_<ContainerAllocator>::MODE_EMERGENCY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_lift_msgs

#endif  // RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__STRUCT_HPP_
