// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationParticipantAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationParticipantAck __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationParticipantAck __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NegotiationParticipantAck_
{
  using Type = NegotiationParticipantAck_<ContainerAllocator>;

  explicit NegotiationParticipantAck_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->updating = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->participant = 0ull;
      this->updating = false;
      this->itinerary_version = 0ull;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->itinerary_version = 0ull;
    }
  }

  explicit NegotiationParticipantAck_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->updating = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->participant = 0ull;
      this->updating = false;
      this->itinerary_version = 0ull;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->itinerary_version = 0ull;
    }
  }

  // field types and members
  using _participant_type =
    uint64_t;
  _participant_type participant;
  using _updating_type =
    bool;
  _updating_type updating;
  using _itinerary_version_type =
    uint64_t;
  _itinerary_version_type itinerary_version;

  // setters for named parameter idiom
  Type & set__participant(
    const uint64_t & _arg)
  {
    this->participant = _arg;
    return *this;
  }
  Type & set__updating(
    const bool & _arg)
  {
    this->updating = _arg;
    return *this;
  }
  Type & set__itinerary_version(
    const uint64_t & _arg)
  {
    this->itinerary_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationParticipantAck
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationParticipantAck
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NegotiationParticipantAck_ & other) const
  {
    if (this->participant != other.participant) {
      return false;
    }
    if (this->updating != other.updating) {
      return false;
    }
    if (this->itinerary_version != other.itinerary_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const NegotiationParticipantAck_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NegotiationParticipantAck_

// alias to use template instance with default allocator
using NegotiationParticipantAck =
  rmf_traffic_msgs::msg::NegotiationParticipantAck_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__STRUCT_HPP_
