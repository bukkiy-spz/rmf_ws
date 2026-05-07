// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__STRUCT_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'images'
#include "rmf_building_map_msgs/msg/detail/affine_image__struct.hpp"
// Member 'places'
#include "rmf_building_map_msgs/msg/detail/place__struct.hpp"
// Member 'doors'
#include "rmf_building_map_msgs/msg/detail/door__struct.hpp"
// Member 'nav_graphs'
// Member 'wall_graph'
#include "rmf_building_map_msgs/msg/detail/graph__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__msg__Level __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__msg__Level __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Level_
{
  using Type = Level_<ContainerAllocator>;

  explicit Level_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wall_graph(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->elevation = 0.0f;
    }
  }

  explicit Level_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    wall_graph(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->elevation = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _elevation_type =
    float;
  _elevation_type elevation;
  using _images_type =
    std::vector<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>>>;
  _images_type images;
  using _places_type =
    std::vector<rmf_building_map_msgs::msg::Place_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Place_<ContainerAllocator>>>;
  _places_type places;
  using _doors_type =
    std::vector<rmf_building_map_msgs::msg::Door_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Door_<ContainerAllocator>>>;
  _doors_type doors;
  using _nav_graphs_type =
    std::vector<rmf_building_map_msgs::msg::Graph_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Graph_<ContainerAllocator>>>;
  _nav_graphs_type nav_graphs;
  using _wall_graph_type =
    rmf_building_map_msgs::msg::Graph_<ContainerAllocator>;
  _wall_graph_type wall_graph;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__elevation(
    const float & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__images(
    const std::vector<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>>> & _arg)
  {
    this->images = _arg;
    return *this;
  }
  Type & set__places(
    const std::vector<rmf_building_map_msgs::msg::Place_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Place_<ContainerAllocator>>> & _arg)
  {
    this->places = _arg;
    return *this;
  }
  Type & set__doors(
    const std::vector<rmf_building_map_msgs::msg::Door_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Door_<ContainerAllocator>>> & _arg)
  {
    this->doors = _arg;
    return *this;
  }
  Type & set__nav_graphs(
    const std::vector<rmf_building_map_msgs::msg::Graph_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Graph_<ContainerAllocator>>> & _arg)
  {
    this->nav_graphs = _arg;
    return *this;
  }
  Type & set__wall_graph(
    const rmf_building_map_msgs::msg::Graph_<ContainerAllocator> & _arg)
  {
    this->wall_graph = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::msg::Level_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::msg::Level_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Level_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Level_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Level_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Level_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Level_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Level_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Level_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Level_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__msg__Level
    std::shared_ptr<rmf_building_map_msgs::msg::Level_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__msg__Level
    std::shared_ptr<rmf_building_map_msgs::msg::Level_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Level_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->images != other.images) {
      return false;
    }
    if (this->places != other.places) {
      return false;
    }
    if (this->doors != other.doors) {
      return false;
    }
    if (this->nav_graphs != other.nav_graphs) {
      return false;
    }
    if (this->wall_graph != other.wall_graph) {
      return false;
    }
    return true;
  }
  bool operator!=(const Level_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Level_

// alias to use template instance with default allocator
using Level =
  rmf_building_map_msgs::msg::Level_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__STRUCT_HPP_
