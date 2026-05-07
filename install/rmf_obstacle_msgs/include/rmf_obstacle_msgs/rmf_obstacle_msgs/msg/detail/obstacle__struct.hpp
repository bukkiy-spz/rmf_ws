// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_obstacle_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_HPP_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'bbox'
#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__struct.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_obstacle_msgs__msg__Obstacle __attribute__((deprecated))
#else
# define DEPRECATED__rmf_obstacle_msgs__msg__Obstacle __declspec(deprecated)
#endif

namespace rmf_obstacle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Obstacle_
{
  using Type = Obstacle_<ContainerAllocator>;

  explicit Obstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    bbox(_init),
    lifetime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->source = "";
      this->level_name = "";
      this->classification = "";
      this->data_resolution = 0.0;
      this->action = 0l;
    }
  }

  explicit Obstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    source(_alloc),
    level_name(_alloc),
    classification(_alloc),
    bbox(_alloc, _init),
    lifetime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->source = "";
      this->level_name = "";
      this->classification = "";
      this->data_resolution = 0.0;
      this->action = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    int32_t;
  _id_type id;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _level_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _level_name_type level_name;
  using _classification_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _classification_type classification;
  using _bbox_type =
    rmf_obstacle_msgs::msg::BoundingBox3D_<ContainerAllocator>;
  _bbox_type bbox;
  using _data_resolution_type =
    double;
  _data_resolution_type data_resolution;
  using _data_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _data_type data;
  using _lifetime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _lifetime_type lifetime;
  using _action_type =
    int32_t;
  _action_type action;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__level_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->level_name = _arg;
    return *this;
  }
  Type & set__classification(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__bbox(
    const rmf_obstacle_msgs::msg::BoundingBox3D_<ContainerAllocator> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }
  Type & set__data_resolution(
    const double & _arg)
  {
    this->data_resolution = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->lifetime = _arg;
    return *this;
  }
  Type & set__action(
    const int32_t & _arg)
  {
    this->action = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t ACTION_ADD =
    1;
  static constexpr int32_t ACTION_DELETE =
    2;
  static constexpr int32_t ACTION_DELETEALL =
    3;

  // pointer types
  using RawPtr =
    rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_obstacle_msgs__msg__Obstacle
    std::shared_ptr<rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_obstacle_msgs__msg__Obstacle
    std::shared_ptr<rmf_obstacle_msgs::msg::Obstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Obstacle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->level_name != other.level_name) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    if (this->data_resolution != other.data_resolution) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    return true;
  }
  bool operator!=(const Obstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Obstacle_

// alias to use template instance with default allocator
using Obstacle =
  rmf_obstacle_msgs::msg::Obstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Obstacle_<ContainerAllocator>::ACTION_ADD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Obstacle_<ContainerAllocator>::ACTION_DELETE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Obstacle_<ContainerAllocator>::ACTION_DELETEALL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_obstacle_msgs

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_HPP_
