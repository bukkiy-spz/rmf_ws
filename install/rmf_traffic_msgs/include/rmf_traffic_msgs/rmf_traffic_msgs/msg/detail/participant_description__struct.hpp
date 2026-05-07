// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ParticipantDescription.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'profile'
#include "rmf_traffic_msgs/msg/detail/profile__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ParticipantDescription __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ParticipantDescription __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParticipantDescription_
{
  using Type = ParticipantDescription_<ContainerAllocator>;

  explicit ParticipantDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : profile(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->owner = "";
      this->responsiveness = 0;
    }
  }

  explicit ParticipantDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    owner(_alloc),
    profile(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->owner = "";
      this->responsiveness = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _owner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _owner_type owner;
  using _responsiveness_type =
    uint8_t;
  _responsiveness_type responsiveness;
  using _profile_type =
    rmf_traffic_msgs::msg::Profile_<ContainerAllocator>;
  _profile_type profile;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__owner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->owner = _arg;
    return *this;
  }
  Type & set__responsiveness(
    const uint8_t & _arg)
  {
    this->responsiveness = _arg;
    return *this;
  }
  Type & set__profile(
    const rmf_traffic_msgs::msg::Profile_<ContainerAllocator> & _arg)
  {
    this->profile = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RX_INVALID =
    0u;
  static constexpr uint8_t RX_UNRESPONSIVE =
    1u;
  static constexpr uint8_t RX_RESPONSIVE =
    2u;

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ParticipantDescription
    std::shared_ptr<rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ParticipantDescription
    std::shared_ptr<rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParticipantDescription_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->owner != other.owner) {
      return false;
    }
    if (this->responsiveness != other.responsiveness) {
      return false;
    }
    if (this->profile != other.profile) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParticipantDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParticipantDescription_

// alias to use template instance with default allocator
using ParticipantDescription =
  rmf_traffic_msgs::msg::ParticipantDescription_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParticipantDescription_<ContainerAllocator>::RX_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParticipantDescription_<ContainerAllocator>::RX_UNRESPONSIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ParticipantDescription_<ContainerAllocator>::RX_RESPONSIVE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__STRUCT_HPP_
