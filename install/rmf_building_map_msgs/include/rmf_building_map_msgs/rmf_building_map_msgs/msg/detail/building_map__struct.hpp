// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_building_map_msgs:msg/BuildingMap.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__STRUCT_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'levels'
#include "rmf_building_map_msgs/msg/detail/level__struct.hpp"
// Member 'lifts'
#include "rmf_building_map_msgs/msg/detail/lift__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__msg__BuildingMap __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__msg__BuildingMap __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BuildingMap_
{
  using Type = BuildingMap_<ContainerAllocator>;

  explicit BuildingMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit BuildingMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _levels_type =
    std::vector<rmf_building_map_msgs::msg::Level_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Level_<ContainerAllocator>>>;
  _levels_type levels;
  using _lifts_type =
    std::vector<rmf_building_map_msgs::msg::Lift_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Lift_<ContainerAllocator>>>;
  _lifts_type lifts;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__levels(
    const std::vector<rmf_building_map_msgs::msg::Level_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Level_<ContainerAllocator>>> & _arg)
  {
    this->levels = _arg;
    return *this;
  }
  Type & set__lifts(
    const std::vector<rmf_building_map_msgs::msg::Lift_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Lift_<ContainerAllocator>>> & _arg)
  {
    this->lifts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__msg__BuildingMap
    std::shared_ptr<rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__msg__BuildingMap
    std::shared_ptr<rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BuildingMap_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->levels != other.levels) {
      return false;
    }
    if (this->lifts != other.lifts) {
      return false;
    }
    return true;
  }
  bool operator!=(const BuildingMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BuildingMap_

// alias to use template instance with default allocator
using BuildingMap =
  rmf_building_map_msgs::msg::BuildingMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__STRUCT_HPP_
