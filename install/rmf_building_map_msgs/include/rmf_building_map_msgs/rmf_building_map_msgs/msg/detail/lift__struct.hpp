// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_building_map_msgs:msg/Lift.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__STRUCT_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'doors'
#include "rmf_building_map_msgs/msg/detail/door__struct.hpp"
// Member 'wall_graph'
#include "rmf_building_map_msgs/msg/detail/graph__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__msg__Lift __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__msg__Lift __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lift_
{
  using Type = Lift_<ContainerAllocator>;

  explicit Lift_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wall_graph(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->ref_x = 0.0f;
      this->ref_y = 0.0f;
      this->ref_yaw = 0.0f;
      this->width = 0.0f;
      this->depth = 0.0f;
    }
  }

  explicit Lift_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    wall_graph(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->ref_x = 0.0f;
      this->ref_y = 0.0f;
      this->ref_yaw = 0.0f;
      this->width = 0.0f;
      this->depth = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _levels_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _levels_type levels;
  using _doors_type =
    std::vector<rmf_building_map_msgs::msg::Door_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Door_<ContainerAllocator>>>;
  _doors_type doors;
  using _wall_graph_type =
    rmf_building_map_msgs::msg::Graph_<ContainerAllocator>;
  _wall_graph_type wall_graph;
  using _ref_x_type =
    float;
  _ref_x_type ref_x;
  using _ref_y_type =
    float;
  _ref_y_type ref_y;
  using _ref_yaw_type =
    float;
  _ref_yaw_type ref_yaw;
  using _width_type =
    float;
  _width_type width;
  using _depth_type =
    float;
  _depth_type depth;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__levels(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->levels = _arg;
    return *this;
  }
  Type & set__doors(
    const std::vector<rmf_building_map_msgs::msg::Door_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Door_<ContainerAllocator>>> & _arg)
  {
    this->doors = _arg;
    return *this;
  }
  Type & set__wall_graph(
    const rmf_building_map_msgs::msg::Graph_<ContainerAllocator> & _arg)
  {
    this->wall_graph = _arg;
    return *this;
  }
  Type & set__ref_x(
    const float & _arg)
  {
    this->ref_x = _arg;
    return *this;
  }
  Type & set__ref_y(
    const float & _arg)
  {
    this->ref_y = _arg;
    return *this;
  }
  Type & set__ref_yaw(
    const float & _arg)
  {
    this->ref_yaw = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__depth(
    const float & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::msg::Lift_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::msg::Lift_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Lift_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Lift_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Lift_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Lift_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Lift_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Lift_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Lift_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Lift_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__msg__Lift
    std::shared_ptr<rmf_building_map_msgs::msg::Lift_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__msg__Lift
    std::shared_ptr<rmf_building_map_msgs::msg::Lift_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lift_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->levels != other.levels) {
      return false;
    }
    if (this->doors != other.doors) {
      return false;
    }
    if (this->wall_graph != other.wall_graph) {
      return false;
    }
    if (this->ref_x != other.ref_x) {
      return false;
    }
    if (this->ref_y != other.ref_y) {
      return false;
    }
    if (this->ref_yaw != other.ref_yaw) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lift_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lift_

// alias to use template instance with default allocator
using Lift =
  rmf_building_map_msgs::msg::Lift_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__STRUCT_HPP_
