// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeRelease.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_RELEASE__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_RELEASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeRelease __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeRelease __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlockadeRelease_
{
  using Type = BlockadeRelease_<ContainerAllocator>;

  explicit BlockadeRelease_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->reservation = 0ull;
      this->checkpoint = 0ull;
    }
  }

  explicit BlockadeRelease_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->reservation = 0ull;
      this->checkpoint = 0ull;
    }
  }

  // field types and members
  using _participant_type =
    uint64_t;
  _participant_type participant;
  using _reservation_type =
    uint64_t;
  _reservation_type reservation;
  using _checkpoint_type =
    uint64_t;
  _checkpoint_type checkpoint;

  // setters for named parameter idiom
  Type & set__participant(
    const uint64_t & _arg)
  {
    this->participant = _arg;
    return *this;
  }
  Type & set__reservation(
    const uint64_t & _arg)
  {
    this->reservation = _arg;
    return *this;
  }
  Type & set__checkpoint(
    const uint64_t & _arg)
  {
    this->checkpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeRelease
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeRelease
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeRelease_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockadeRelease_ & other) const
  {
    if (this->participant != other.participant) {
      return false;
    }
    if (this->reservation != other.reservation) {
      return false;
    }
    if (this->checkpoint != other.checkpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockadeRelease_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockadeRelease_

// alias to use template instance with default allocator
using BlockadeRelease =
  rmf_traffic_msgs::msg::BlockadeRelease_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_RELEASE__STRUCT_HPP_
