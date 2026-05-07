// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_lift_msgs:msg/LiftRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_LIFT_MSGS__MSG__DETAIL__LIFT_REQUEST__STRUCT_HPP_
#define RMF_LIFT_MSGS__MSG__DETAIL__LIFT_REQUEST__STRUCT_HPP_

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
# define DEPRECATED__rmf_lift_msgs__msg__LiftRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_lift_msgs__msg__LiftRequest __declspec(deprecated)
#endif

namespace rmf_lift_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LiftRequest_
{
  using Type = LiftRequest_<ContainerAllocator>;

  explicit LiftRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lift_name = "";
      this->session_id = "";
      this->request_type = 0;
      this->destination_floor = "";
      this->door_state = 0;
    }
  }

  explicit LiftRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lift_name(_alloc),
    request_time(_alloc, _init),
    session_id(_alloc),
    destination_floor(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lift_name = "";
      this->session_id = "";
      this->request_type = 0;
      this->destination_floor = "";
      this->door_state = 0;
    }
  }

  // field types and members
  using _lift_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lift_name_type lift_name;
  using _request_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _request_time_type request_time;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;
  using _request_type_type =
    uint8_t;
  _request_type_type request_type;
  using _destination_floor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _destination_floor_type destination_floor;
  using _door_state_type =
    uint8_t;
  _door_state_type door_state;

  // setters for named parameter idiom
  Type & set__lift_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lift_name = _arg;
    return *this;
  }
  Type & set__request_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->request_time = _arg;
    return *this;
  }
  Type & set__session_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->session_id = _arg;
    return *this;
  }
  Type & set__request_type(
    const uint8_t & _arg)
  {
    this->request_type = _arg;
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

  // constant declarations
  static constexpr uint8_t REQUEST_END_SESSION =
    0u;
  static constexpr uint8_t REQUEST_AGV_MODE =
    1u;
  static constexpr uint8_t REQUEST_HUMAN_MODE =
    2u;
  static constexpr uint8_t DOOR_CLOSED =
    0u;
  static constexpr uint8_t DOOR_OPEN =
    2u;

  // pointer types
  using RawPtr =
    rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_lift_msgs__msg__LiftRequest
    std::shared_ptr<rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_lift_msgs__msg__LiftRequest
    std::shared_ptr<rmf_lift_msgs::msg::LiftRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LiftRequest_ & other) const
  {
    if (this->lift_name != other.lift_name) {
      return false;
    }
    if (this->request_time != other.request_time) {
      return false;
    }
    if (this->session_id != other.session_id) {
      return false;
    }
    if (this->request_type != other.request_type) {
      return false;
    }
    if (this->destination_floor != other.destination_floor) {
      return false;
    }
    if (this->door_state != other.door_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LiftRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LiftRequest_

// alias to use template instance with default allocator
using LiftRequest =
  rmf_lift_msgs::msg::LiftRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftRequest_<ContainerAllocator>::REQUEST_END_SESSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftRequest_<ContainerAllocator>::REQUEST_AGV_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftRequest_<ContainerAllocator>::REQUEST_HUMAN_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftRequest_<ContainerAllocator>::DOOR_CLOSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LiftRequest_<ContainerAllocator>::DOOR_OPEN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_lift_msgs

#endif  // RMF_LIFT_MSGS__MSG__DETAIL__LIFT_REQUEST__STRUCT_HPP_
