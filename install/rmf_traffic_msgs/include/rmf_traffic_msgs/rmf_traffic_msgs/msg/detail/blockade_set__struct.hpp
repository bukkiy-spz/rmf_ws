// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeSet.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_SET__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_SET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path'
#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeSet __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeSet __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlockadeSet_
{
  using Type = BlockadeSet_<ContainerAllocator>;

  explicit BlockadeSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->reservation = 0ull;
      this->radius = 0.0;
    }
  }

  explicit BlockadeSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->reservation = 0ull;
      this->radius = 0.0;
    }
  }

  // field types and members
  using _participant_type =
    uint64_t;
  _participant_type participant;
  using _reservation_type =
    uint64_t;
  _reservation_type reservation;
  using _radius_type =
    double;
  _radius_type radius;
  using _path_type =
    std::vector<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>>>;
  _path_type path;

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
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__path(
    const std::vector<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>>> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeSet
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeSet
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockadeSet_ & other) const
  {
    if (this->participant != other.participant) {
      return false;
    }
    if (this->reservation != other.reservation) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockadeSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockadeSet_

// alias to use template instance with default allocator
using BlockadeSet =
  rmf_traffic_msgs::msg::BlockadeSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_SET__STRUCT_HPP_
