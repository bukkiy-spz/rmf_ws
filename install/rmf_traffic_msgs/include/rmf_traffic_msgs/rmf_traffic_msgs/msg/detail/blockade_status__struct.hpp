// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeStatus.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeStatus __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeStatus __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlockadeStatus_
{
  using Type = BlockadeStatus_<ContainerAllocator>;

  explicit BlockadeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->reservation = 0ull;
      this->any_ready = false;
      this->last_ready = 0ull;
      this->last_reached = 0ull;
      this->assignment_begin = 0ull;
      this->assignment_end = 0ull;
    }
  }

  explicit BlockadeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->reservation = 0ull;
      this->any_ready = false;
      this->last_ready = 0ull;
      this->last_reached = 0ull;
      this->assignment_begin = 0ull;
      this->assignment_end = 0ull;
    }
  }

  // field types and members
  using _participant_type =
    uint64_t;
  _participant_type participant;
  using _reservation_type =
    uint64_t;
  _reservation_type reservation;
  using _any_ready_type =
    bool;
  _any_ready_type any_ready;
  using _last_ready_type =
    uint64_t;
  _last_ready_type last_ready;
  using _last_reached_type =
    uint64_t;
  _last_reached_type last_reached;
  using _assignment_begin_type =
    uint64_t;
  _assignment_begin_type assignment_begin;
  using _assignment_end_type =
    uint64_t;
  _assignment_end_type assignment_end;

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
  Type & set__any_ready(
    const bool & _arg)
  {
    this->any_ready = _arg;
    return *this;
  }
  Type & set__last_ready(
    const uint64_t & _arg)
  {
    this->last_ready = _arg;
    return *this;
  }
  Type & set__last_reached(
    const uint64_t & _arg)
  {
    this->last_reached = _arg;
    return *this;
  }
  Type & set__assignment_begin(
    const uint64_t & _arg)
  {
    this->assignment_begin = _arg;
    return *this;
  }
  Type & set__assignment_end(
    const uint64_t & _arg)
  {
    this->assignment_end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeStatus
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeStatus
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockadeStatus_ & other) const
  {
    if (this->participant != other.participant) {
      return false;
    }
    if (this->reservation != other.reservation) {
      return false;
    }
    if (this->any_ready != other.any_ready) {
      return false;
    }
    if (this->last_ready != other.last_ready) {
      return false;
    }
    if (this->last_reached != other.last_reached) {
      return false;
    }
    if (this->assignment_begin != other.assignment_begin) {
      return false;
    }
    if (this->assignment_end != other.assignment_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockadeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockadeStatus_

// alias to use template instance with default allocator
using BlockadeStatus =
  rmf_traffic_msgs::msg::BlockadeStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__STRUCT_HPP_
