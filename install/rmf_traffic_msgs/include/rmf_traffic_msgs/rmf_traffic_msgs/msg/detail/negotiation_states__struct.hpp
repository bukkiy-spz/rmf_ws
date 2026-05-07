// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATES__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'negotiations'
#include "rmf_traffic_msgs/msg/detail/negotiation_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationStates __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationStates __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NegotiationStates_
{
  using Type = NegotiationStates_<ContainerAllocator>;

  explicit NegotiationStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NegotiationStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _negotiations_type =
    std::vector<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>>>;
  _negotiations_type negotiations;

  // setters for named parameter idiom
  Type & set__negotiations(
    const std::vector<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationState_<ContainerAllocator>>> & _arg)
  {
    this->negotiations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationStates
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationStates
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NegotiationStates_ & other) const
  {
    if (this->negotiations != other.negotiations) {
      return false;
    }
    return true;
  }
  bool operator!=(const NegotiationStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NegotiationStates_

// alias to use template instance with default allocator
using NegotiationStates =
  rmf_traffic_msgs::msg::NegotiationStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATES__STRUCT_HPP_
