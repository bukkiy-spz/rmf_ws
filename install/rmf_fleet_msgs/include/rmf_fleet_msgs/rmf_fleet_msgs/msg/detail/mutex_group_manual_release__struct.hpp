// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupManualRelease.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__MutexGroupManualRelease __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__MutexGroupManualRelease __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MutexGroupManualRelease_
{
  using Type = MutexGroupManualRelease_<ContainerAllocator>;

  explicit MutexGroupManualRelease_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet = "";
      this->robot = "";
    }
  }

  explicit MutexGroupManualRelease_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet(_alloc),
    robot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet = "";
      this->robot = "";
    }
  }

  // field types and members
  using _release_mutex_groups_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _release_mutex_groups_type release_mutex_groups;
  using _fleet_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_type fleet;
  using _robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type robot;

  // setters for named parameter idiom
  Type & set__release_mutex_groups(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->release_mutex_groups = _arg;
    return *this;
  }
  Type & set__fleet(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fleet = _arg;
    return *this;
  }
  Type & set__robot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__MutexGroupManualRelease
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__MutexGroupManualRelease
    std::shared_ptr<rmf_fleet_msgs::msg::MutexGroupManualRelease_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MutexGroupManualRelease_ & other) const
  {
    if (this->release_mutex_groups != other.release_mutex_groups) {
      return false;
    }
    if (this->fleet != other.fleet) {
      return false;
    }
    if (this->robot != other.robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const MutexGroupManualRelease_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MutexGroupManualRelease_

// alias to use template instance with default allocator
using MutexGroupManualRelease =
  rmf_fleet_msgs::msg::MutexGroupManualRelease_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__STRUCT_HPP_
