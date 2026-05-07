// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/BeaconState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__BeaconState __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__BeaconState __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BeaconState_
{
  using Type = BeaconState_<ContainerAllocator>;

  explicit BeaconState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->online = false;
      this->category = "";
      this->activated = false;
      this->level = "";
    }
  }

  explicit BeaconState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    category(_alloc),
    level(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->online = false;
      this->category = "";
      this->activated = false;
      this->level = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _online_type =
    bool;
  _online_type online;
  using _category_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _category_type category;
  using _activated_type =
    bool;
  _activated_type activated;
  using _level_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _level_type level;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__online(
    const bool & _arg)
  {
    this->online = _arg;
    return *this;
  }
  Type & set__category(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->category = _arg;
    return *this;
  }
  Type & set__activated(
    const bool & _arg)
  {
    this->activated = _arg;
    return *this;
  }
  Type & set__level(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__BeaconState
    std::shared_ptr<rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__BeaconState
    std::shared_ptr<rmf_fleet_msgs::msg::BeaconState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BeaconState_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->online != other.online) {
      return false;
    }
    if (this->category != other.category) {
      return false;
    }
    if (this->activated != other.activated) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    return true;
  }
  bool operator!=(const BeaconState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BeaconState_

// alias to use template instance with default allocator
using BeaconState =
  rmf_fleet_msgs::msg::BeaconState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__STRUCT_HPP_
