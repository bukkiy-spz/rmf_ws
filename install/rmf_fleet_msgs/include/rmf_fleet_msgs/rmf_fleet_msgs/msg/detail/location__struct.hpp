// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 't'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__Location __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__Location __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Location_
{
  using Type = Location_<ContainerAllocator>;

  explicit Location_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->obey_approach_speed_limit = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->x = 0.0f;
      this->y = 0.0f;
      this->yaw = 0.0f;
      this->obey_approach_speed_limit = false;
      this->approach_speed_limit = 0.0f;
      this->level_name = "";
      this->index = 0ull;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->yaw = 0.0f;
      this->approach_speed_limit = 0.0f;
      this->level_name = "";
      this->index = 0ull;
    }
  }

  explicit Location_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t(_alloc, _init),
    level_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->obey_approach_speed_limit = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->x = 0.0f;
      this->y = 0.0f;
      this->yaw = 0.0f;
      this->obey_approach_speed_limit = false;
      this->approach_speed_limit = 0.0f;
      this->level_name = "";
      this->index = 0ull;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->yaw = 0.0f;
      this->approach_speed_limit = 0.0f;
      this->level_name = "";
      this->index = 0ull;
    }
  }

  // field types and members
  using _t_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _t_type t;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _obey_approach_speed_limit_type =
    bool;
  _obey_approach_speed_limit_type obey_approach_speed_limit;
  using _approach_speed_limit_type =
    float;
  _approach_speed_limit_type approach_speed_limit;
  using _level_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _level_name_type level_name;
  using _index_type =
    uint64_t;
  _index_type index;

  // setters for named parameter idiom
  Type & set__t(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__obey_approach_speed_limit(
    const bool & _arg)
  {
    this->obey_approach_speed_limit = _arg;
    return *this;
  }
  Type & set__approach_speed_limit(
    const float & _arg)
  {
    this->approach_speed_limit = _arg;
    return *this;
  }
  Type & set__level_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->level_name = _arg;
    return *this;
  }
  Type & set__index(
    const uint64_t & _arg)
  {
    this->index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::Location_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::Location_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::Location_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::Location_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::Location_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::Location_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::Location_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::Location_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::Location_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::Location_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__Location
    std::shared_ptr<rmf_fleet_msgs::msg::Location_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__Location
    std::shared_ptr<rmf_fleet_msgs::msg::Location_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Location_ & other) const
  {
    if (this->t != other.t) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->obey_approach_speed_limit != other.obey_approach_speed_limit) {
      return false;
    }
    if (this->approach_speed_limit != other.approach_speed_limit) {
      return false;
    }
    if (this->level_name != other.level_name) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    return true;
  }
  bool operator!=(const Location_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Location_

// alias to use template instance with default allocator
using Location =
  rmf_fleet_msgs::msg::Location_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__STRUCT_HPP_
