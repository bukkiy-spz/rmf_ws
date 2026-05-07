// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeCancel.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CANCEL__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CANCEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeCancel __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeCancel __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlockadeCancel_
{
  using Type = BlockadeCancel_<ContainerAllocator>;

  explicit BlockadeCancel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->all_reservations = false;
      this->reservation = 0ull;
    }
  }

  explicit BlockadeCancel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->all_reservations = false;
      this->reservation = 0ull;
    }
  }

  // field types and members
  using _participant_type =
    uint64_t;
  _participant_type participant;
  using _all_reservations_type =
    bool;
  _all_reservations_type all_reservations;
  using _reservation_type =
    uint64_t;
  _reservation_type reservation;

  // setters for named parameter idiom
  Type & set__participant(
    const uint64_t & _arg)
  {
    this->participant = _arg;
    return *this;
  }
  Type & set__all_reservations(
    const bool & _arg)
  {
    this->all_reservations = _arg;
    return *this;
  }
  Type & set__reservation(
    const uint64_t & _arg)
  {
    this->reservation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeCancel
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeCancel
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeCancel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockadeCancel_ & other) const
  {
    if (this->participant != other.participant) {
      return false;
    }
    if (this->all_reservations != other.all_reservations) {
      return false;
    }
    if (this->reservation != other.reservation) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockadeCancel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockadeCancel_

// alias to use template instance with default allocator
using BlockadeCancel =
  rmf_traffic_msgs::msg::BlockadeCancel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CANCEL__STRUCT_HPP_
