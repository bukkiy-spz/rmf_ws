// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationState.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "rmf_traffic_msgs/msg/detail/negotiation_status__struct.hpp"
// Member 'tree'
#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__struct.hpp"
// Member 'orphan_proposals'
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__struct.hpp"
// Member 'orphan_rejections'
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__struct.hpp"
// Member 'orphan_forfeits'
#include "rmf_traffic_msgs/msg/detail/negotiation_forfeit__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationState __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationState __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NegotiationState_
{
  using Type = NegotiationState_<ContainerAllocator>;

  explicit NegotiationState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit NegotiationState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    rmf_traffic_msgs::msg::NegotiationStatus_<ContainerAllocator>;
  _status_type status;
  using _tree_type =
    std::vector<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>>>;
  _tree_type tree;
  using _orphan_proposals_type =
    std::vector<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>>>;
  _orphan_proposals_type orphan_proposals;
  using _orphan_rejections_type =
    std::vector<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>>>;
  _orphan_rejections_type orphan_rejections;
  using _orphan_forfeits_type =
    std::vector<rmf_traffic_msgs::msg::NegotiationForfeit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationForfeit_<ContainerAllocator>>>;
  _orphan_forfeits_type orphan_forfeits;

  // setters for named parameter idiom
  Type & set__status(
    const rmf_traffic_msgs::msg::NegotiationStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__tree(
    const std::vector<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>>> & _arg)
  {
    this->tree = _arg;
    return *this;
  }
  Type & set__orphan_proposals(
    const std::vector<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationProposal_<ContainerAllocator>>> & _arg)
  {
    this->orphan_proposals = _arg;
    return *this;
  }
  Type & set__orphan_rejections(
    const std::vector<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>>> & _arg)
  {
    this->orphan_rejections = _arg;
    return *this;
  }
  Type & set__orphan_forfeits(
    const std::vector<rmf_traffic_msgs::msg::NegotiationForfeit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationForfeit_<ContainerAllocator>>> & _arg)
  {
    this->orphan_forfeits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationState
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationState
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NegotiationState_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->tree != other.tree) {
      return false;
    }
    if (this->orphan_proposals != other.orphan_proposals) {
      return false;
    }
    if (this->orphan_rejections != other.orphan_rejections) {
      return false;
    }
    if (this->orphan_forfeits != other.orphan_forfeits) {
      return false;
    }
    return true;
  }
  bool operator!=(const NegotiationState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NegotiationState_

// alias to use template instance with default allocator
using NegotiationState =
  rmf_traffic_msgs::msg::NegotiationState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__STRUCT_HPP_
