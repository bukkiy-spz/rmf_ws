// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeCheckpoint.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CHECKPOINT__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CHECKPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeCheckpoint __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__BlockadeCheckpoint __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlockadeCheckpoint_
{
  using Type = BlockadeCheckpoint_<ContainerAllocator>;

  explicit BlockadeCheckpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      this->map_name = "";
      this->can_hold = false;
    }
  }

  explicit BlockadeCheckpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      this->map_name = "";
      this->can_hold = false;
    }
  }

  // field types and members
  using _position_type =
    std::array<double, 2>;
  _position_type position;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _can_hold_type =
    bool;
  _can_hold_type can_hold;

  // setters for named parameter idiom
  Type & set__position(
    const std::array<double, 2> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__can_hold(
    const bool & _arg)
  {
    this->can_hold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeCheckpoint
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__BlockadeCheckpoint
    std::shared_ptr<rmf_traffic_msgs::msg::BlockadeCheckpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockadeCheckpoint_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->can_hold != other.can_hold) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockadeCheckpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockadeCheckpoint_

// alias to use template instance with default allocator
using BlockadeCheckpoint =
  rmf_traffic_msgs::msg::BlockadeCheckpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CHECKPOINT__STRUCT_HPP_
