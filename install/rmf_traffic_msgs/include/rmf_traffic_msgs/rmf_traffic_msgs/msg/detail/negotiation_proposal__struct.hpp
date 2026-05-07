// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PROPOSAL__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PROPOSAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'to_accommodate'
#include "rmf_traffic_msgs/msg/detail/negotiation_key__struct.hpp"
// Member 'itinerary'
#include "rmf_traffic_msgs/msg/detail/route__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationProposal __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationProposal __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NegotiationProposal_
{
  using Type = NegotiationProposal_<ContainerAllocator>;

  explicit NegotiationProposal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conflict_version = 0ull;
      this->proposal_version = 0ull;
      this->for_participant = 0ull;
      this->plan_id = 0ull;
    }
  }

  explicit NegotiationProposal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conflict_version = 0ull;
      this->proposal_version = 0ull;
      this->for_participant = 0ull;
      this->plan_id = 0ull;
    }
  }

  // field types and members
  using _conflict_version_type =
    uint64_t;
  _conflict_version_type conflict_version;
  using _proposal_version_type =
    uint64_t;
  _proposal_version_type proposal_version;
  using _for_participant_type =
    uint64_t;
  _for_participant_type for_participant;
  using _to_accommodate_type =
    std::vector<rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator>>>;
  _to_accommodate_type to_accommodate;
  using _plan_id_type =
    uint64_t;
  _plan_id_type plan_id;
  using _itinerary_type =
    std::vector<rmf_traffic_msgs::msg::Route_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>>;
  _itinerary_type itinerary;

  // setters for named parameter idiom
  Type & set__conflict_version(
    const uint64_t & _arg)
  {
    this->conflict_version = _arg;
    return *this;
  }
  Type & set__proposal_version(
    const uint64_t & _arg)
  {
    this->proposal_version = _arg;
    return *this;
  }
  Type & set__for_participant(
    const uint64_t & _arg)
  {
    this->for_participant = _arg;
    return *this;
  }
  Type & set__to_accommodate(
    const std::vector<rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator>>> & _arg)
  {
    this->to_accommodate = _arg;
    return *this;
  }
  Type & set__plan_id(
    const uint64_t & _arg)
  {
    this->plan_id = _arg;
    return *this;
  }
  Type & set__itinerary(
    const std::vector<rmf_traffic_msgs::msg::Route_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>> & _arg)
  {
    this->itinerary = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationProposal
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationProposal
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NegotiationProposal_ & other) const
  {
    if (this->conflict_version != other.conflict_version) {
      return false;
    }
    if (this->proposal_version != other.proposal_version) {
      return false;
    }
    if (this->for_participant != other.for_participant) {
      return false;
    }
    if (this->to_accommodate != other.to_accommodate) {
      return false;
    }
    if (this->plan_id != other.plan_id) {
      return false;
    }
    if (this->itinerary != other.itinerary) {
      return false;
    }
    return true;
  }
  bool operator!=(const NegotiationProposal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NegotiationProposal_

// alias to use template instance with default allocator
using NegotiationProposal =
  rmf_traffic_msgs::msg::NegotiationProposal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PROPOSAL__STRUCT_HPP_
