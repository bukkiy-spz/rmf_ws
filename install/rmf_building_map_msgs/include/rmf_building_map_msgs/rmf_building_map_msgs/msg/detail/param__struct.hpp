// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_building_map_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__STRUCT_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__msg__Param __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__msg__Param __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Param_
{
  using Type = Param_<ContainerAllocator>;

  explicit Param_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = 0ul;
      this->value_int = 0l;
      this->value_float = 0.0f;
      this->value_string = "";
      this->value_bool = false;
    }
  }

  explicit Param_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    value_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = 0ul;
      this->value_int = 0l;
      this->value_float = 0.0f;
      this->value_string = "";
      this->value_bool = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    uint32_t;
  _type_type type;
  using _value_int_type =
    int32_t;
  _value_int_type value_int;
  using _value_float_type =
    float;
  _value_float_type value_float;
  using _value_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_string_type value_string;
  using _value_bool_type =
    bool;
  _value_bool_type value_bool;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__value_int(
    const int32_t & _arg)
  {
    this->value_int = _arg;
    return *this;
  }
  Type & set__value_float(
    const float & _arg)
  {
    this->value_float = _arg;
    return *this;
  }
  Type & set__value_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value_string = _arg;
    return *this;
  }
  Type & set__value_bool(
    const bool & _arg)
  {
    this->value_bool = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t TYPE_UNDEFINED =
    0u;
  static constexpr uint32_t TYPE_STRING =
    1u;
  static constexpr uint32_t TYPE_INT =
    2u;
  static constexpr uint32_t TYPE_DOUBLE =
    3u;
  static constexpr uint32_t TYPE_BOOL =
    4u;

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::msg::Param_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::msg::Param_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Param_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::Param_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Param_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Param_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::Param_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::Param_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Param_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::Param_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__msg__Param
    std::shared_ptr<rmf_building_map_msgs::msg::Param_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__msg__Param
    std::shared_ptr<rmf_building_map_msgs::msg::Param_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Param_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->value_int != other.value_int) {
      return false;
    }
    if (this->value_float != other.value_float) {
      return false;
    }
    if (this->value_string != other.value_string) {
      return false;
    }
    if (this->value_bool != other.value_bool) {
      return false;
    }
    return true;
  }
  bool operator!=(const Param_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Param_

// alias to use template instance with default allocator
using Param =
  rmf_building_map_msgs::msg::Param_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Param_<ContainerAllocator>::TYPE_UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Param_<ContainerAllocator>::TYPE_STRING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Param_<ContainerAllocator>::TYPE_INT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Param_<ContainerAllocator>::TYPE_DOUBLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Param_<ContainerAllocator>::TYPE_BOOL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__STRUCT_HPP_
