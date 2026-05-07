// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'statuses'
#include "rmf_traffic_msgs/msg/detail/blockade_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeHeartbeat __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeHeartbeat __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlockadeHeartbeat_
{
  using Type = BlockadeHeartbeat_<ContainerAllocator>;

  explicit BlockadeHeartbeat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_gridlock = false;
    }
  }

  explicit BlockadeHeartbeat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_gridlock = false;
    }
  }

  // field types and members
  using _statuses_type =
    std::vector<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>>>;
  _statuses_type statuses;
  using _has_gridlock_type =
    bool;
  _has_gridlock_type has_gridlock;

  // setters for named parameter idiom
  Type & set__statuses(
    const std::vector<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::BlockadeStatus_<ContainerAllocator>>> & _arg)
  {
    this->statuses = _arg;
    return *this;
  }
  Type & set__has_gridlock(
    const bool & _arg)
  {
    this->has_gridlock = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeHeartbeat
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeHeartbeat
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeHeartbeat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockadeHeartbeat_ & other) const
  {
    if (this->statuses != other.statuses) {
      return false;
    }
    if (this->has_gridlock != other.has_gridlock) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockadeHeartbeat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockadeHeartbeat_

// alias to use template instance with default allocator
using BlockadeHeartbeat =
  rmf_traffic_msgs::msg::BlockadeHeartbeat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__STRUCT_HPP_
