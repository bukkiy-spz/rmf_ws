// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_building_map_msgs:msg/Door.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__STRUCT_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__msg__Door __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__msg__Door __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Door_
{
  using Type = Door_<ContainerAllocator>;

  explicit Door_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->v1_x = 0.0f;
      this->v1_y = 0.0f;
      this->v2_x = 0.0f;
      this->v2_y = 0.0f;
      this->door_type = 0;
      this->motion_range = 0.0f;
      this->motion_direction = 0l;
    }
  }

  explicit Door_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->v1_x = 0.0f;
      this->v1_y = 0.0f;
      this->v2_x = 0.0f;
      this->v2_y = 0.0f;
      this->door_type = 0;
      this->motion_range = 0.0f;
      this->motion_direction = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _v1_x_type =
    float;
  _v1_x_type v1_x;
  using _v1_y_type =
    float;
  _v1_y_type v1_y;
  using _v2_x_type =
    float;
  _v2_x_type v2_x;
  using _v2_y_type =
    float;
  _v2_y_type v2_y;
  using _door_type_type =
    uint8_t;
  _door_type_type door_type;
  using _motion_range_type =
    float;
  _motion_range_type motion_range;
  using _motion_direction_type =
    int32_t;
  _motion_direction_type motion_direction;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__v1_x(
    const float & _arg)
  {
    this->v1_x = _arg;
    return *this;
  }
  Type & set__v1_y(
    const float & _arg)
  {
    this->v1_y = _arg;
    return *this;
  }
  Type & set__v2_x(
    const float & _arg)
  {
    this->v2_x = _arg;
    return *this;
  }
  Type & set__v2_y(
    const float & _arg)
  {
    this->v2_y = _arg;
    return *this;
  }
  Type & set__door_type(
    const uint8_t & _arg)
  {
    this->door_type = _arg;
    return *this;
  }
  Type & set__motion_range(
    const float & _arg)
  {
    this->motion_range = _arg;
    return *this;
  }
  Type & set__motion_direction(
    const int32_t & _arg)
  {
    this->motion_direction = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DOOR_TYPE_UNDEFINED =
    0u;
  static constexpr uint8_t DOOR_TYPE_SINGLE_SLIDING =
    1u;
  static constexpr uint8_t DOOR_TYPE_DOUBLE_SLIDING =
    2u;
  static constexpr uint8_t DOOR_TYPE_SINGLE_TELESCOPE =
    3u;
  static constexpr uint8_t DOOR_TYPE_DOUBLE_TELESCOPE =
    4u;
  static constexpr uint8_t DOOR_TYPE_SINGLE_SWING =
    5u;
  static constexpr uint8_t DOOR_TYPE_DOUBLE_SWING =
    6u;

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::msg::Door_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::msg::Door_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Door_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Door_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Door_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Door_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Door_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Door_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Door_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Door_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__msg__Door
    std::shared_ptr<rmf_building_map_msgs::msg::Door_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__msg__Door
    std::shared_ptr<rmf_building_map_msgs::msg::Door_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Door_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->v1_x != other.v1_x) {
      return false;
    }
    if (this->v1_y != other.v1_y) {
      return false;
    }
    if (this->v2_x != other.v2_x) {
      return false;
    }
    if (this->v2_y != other.v2_y) {
      return false;
    }
    if (this->door_type != other.door_type) {
      return false;
    }
    if (this->motion_range != other.motion_range) {
      return false;
    }
    if (this->motion_direction != other.motion_direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const Door_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Door_

// alias to use template instance with default allocator
using Door =
  rmf_building_map_msgs::msg::Door_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Door_<ContainerAllocator>::DOOR_TYPE_UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Door_<ContainerAllocator>::DOOR_TYPE_SINGLE_SLIDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Door_<ContainerAllocator>::DOOR_TYPE_DOUBLE_SLIDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Door_<ContainerAllocator>::DOOR_TYPE_SINGLE_TELESCOPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Door_<ContainerAllocator>::DOOR_TYPE_DOUBLE_TELESCOPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Door_<ContainerAllocator>::DOOR_TYPE_SINGLE_SWING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Door_<ContainerAllocator>::DOOR_TYPE_DOUBLE_SWING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__STRUCT_HPP_
