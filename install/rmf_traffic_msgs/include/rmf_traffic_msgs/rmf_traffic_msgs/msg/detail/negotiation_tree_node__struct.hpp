// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationTreeNode.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'key'
#include "rmf_traffic_msgs/msg/detail/negotiation_key__struct.hpp"
// Member 'itinerary'
#include "rmf_traffic_msgs/msg/detail/route__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationTreeNode __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationTreeNode __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NegotiationTreeNode_
{
  using Type = NegotiationTreeNode_<ContainerAllocator>;

  explicit NegotiationTreeNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent = 0ll;
      this->rejected = false;
    }
  }

  explicit NegotiationTreeNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent = 0ll;
      this->rejected = false;
    }
  }

  // field types and members
  using _parent_type =
    int64_t;
  _parent_type parent;
  using _key_type =
    rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator>;
  _key_type key;
  using _rejected_type =
    bool;
  _rejected_type rejected;
  using _itinerary_type =
    std::vector<rmf_traffic_msgs::msg::Route_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>>;
  _itinerary_type itinerary;

  // setters for named parameter idiom
  Type & set__parent(
    const int64_t & _arg)
  {
    this->parent = _arg;
    return *this;
  }
  Type & set__key(
    const rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__rejected(
    const bool & _arg)
  {
    this->rejected = _arg;
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
    rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationTreeNode
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationTreeNode
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationTreeNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NegotiationTreeNode_ & other) const
  {
    if (this->parent != other.parent) {
      return false;
    }
    if (this->key != other.key) {
      return false;
    }
    if (this->rejected != other.rejected) {
      return false;
    }
    if (this->itinerary != other.itinerary) {
      return false;
    }
    return true;
  }
  bool operator!=(const NegotiationTreeNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NegotiationTreeNode_

// alias to use template instance with default allocator
using NegotiationTreeNode =
  rmf_traffic_msgs::msg::NegotiationTreeNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__STRUCT_HPP_
