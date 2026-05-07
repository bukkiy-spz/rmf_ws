// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/ChargingAssignments.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENTS__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'assignments'
#include "rmf_fleet_msgs/msg/detail/charging_assignment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__ChargingAssignments __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__ChargingAssignments __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargingAssignments_
{
  using Type = ChargingAssignments_<ContainerAllocator>;

  explicit ChargingAssignments_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
    }
  }

  explicit ChargingAssignments_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fleet_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_name = "";
    }
  }

  // field types and members
  using _fleet_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fleet_name_type fleet_name;
  using _assignments_type =
    std::vector<rmf_fleet_msgs::msg::ChargingAssignment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::ChargingAssignment_<ContainerAllocator>>>;
  _assignments_type assignments;

  // setters for named parameter idiom
  Type & set__fleet_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fleet_name = _arg;
    return *this;
  }
  Type & set__assignments(
    const std::vector<rmf_fleet_msgs::msg::ChargingAssignment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_fleet_msgs::msg::ChargingAssignment_<ContainerAllocator>>> & _arg)
  {
    this->assignments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__ChargingAssignments
    std::shared_ptr<rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__ChargingAssignments
    std::shared_ptr<rmf_fleet_msgs::msg::ChargingAssignments_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargingAssignments_ & other) const
  {
    if (this->fleet_name != other.fleet_name) {
      return false;
    }
    if (this->assignments != other.assignments) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargingAssignments_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargingAssignments_

// alias to use template instance with default allocator
using ChargingAssignments =
  rmf_fleet_msgs::msg::ChargingAssignments_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENTS__STRUCT_HPP_
