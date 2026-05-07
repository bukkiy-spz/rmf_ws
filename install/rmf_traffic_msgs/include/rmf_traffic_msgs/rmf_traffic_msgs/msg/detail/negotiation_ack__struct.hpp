// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_ACK__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_ACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'acknowledgments'
#include "rmf_traffic_msgs/msg/detail/negotiation_participant_ack__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationAck __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationAck __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NegotiationAck_
{
  using Type = NegotiationAck_<ContainerAllocator>;

  explicit NegotiationAck_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conflict_version = 0ull;
    }
  }

  explicit NegotiationAck_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conflict_version = 0ull;
    }
  }

  // field types and members
  using _conflict_version_type =
    uint64_t;
  _conflict_version_type conflict_version;
  using _acknowledgments_type =
    std::vector<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>>>;
  _acknowledgments_type acknowledgments;

  // setters for named parameter idiom
  Type & set__conflict_version(
    const uint64_t & _arg)
  {
    this->conflict_version = _arg;
    return *this;
  }
  Type & set__acknowledgments(
    const std::vector<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationParticipantAck_<ContainerAllocator>>> & _arg)
  {
    this->acknowledgments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationAck
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationAck
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationAck_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NegotiationAck_ & other) const
  {
    if (this->conflict_version != other.conflict_version) {
      return false;
    }
    if (this->acknowledgments != other.acknowledgments) {
      return false;
    }
    return true;
  }
  bool operator!=(const NegotiationAck_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NegotiationAck_

// alias to use template instance with default allocator
using NegotiationAck =
  rmf_traffic_msgs::msg::NegotiationAck_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_ACK__STRUCT_HPP_
