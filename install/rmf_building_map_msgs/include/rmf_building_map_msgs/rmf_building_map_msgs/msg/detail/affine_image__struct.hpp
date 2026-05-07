// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_building_map_msgs:msg/AffineImage.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__STRUCT_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__msg__AffineImage __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__msg__AffineImage __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AffineImage_
{
  using Type = AffineImage_<ContainerAllocator>;

  explicit AffineImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x_offset = 0.0f;
      this->y_offset = 0.0f;
      this->yaw = 0.0f;
      this->scale = 0.0f;
      this->encoding = "";
    }
  }

  explicit AffineImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    encoding(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x_offset = 0.0f;
      this->y_offset = 0.0f;
      this->yaw = 0.0f;
      this->scale = 0.0f;
      this->encoding = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _x_offset_type =
    float;
  _x_offset_type x_offset;
  using _y_offset_type =
    float;
  _y_offset_type y_offset;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _scale_type =
    float;
  _scale_type scale;
  using _encoding_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _encoding_type encoding;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__x_offset(
    const float & _arg)
  {
    this->x_offset = _arg;
    return *this;
  }
  Type & set__y_offset(
    const float & _arg)
  {
    this->y_offset = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__encoding(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->encoding = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__msg__AffineImage
    std::shared_ptr<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__msg__AffineImage
    std::shared_ptr<rmf_building_map_msgs::msg::AffineImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AffineImage_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->x_offset != other.x_offset) {
      return false;
    }
    if (this->y_offset != other.y_offset) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->encoding != other.encoding) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const AffineImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AffineImage_

// alias to use template instance with default allocator
using AffineImage =
  rmf_building_map_msgs::msg::AffineImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__STRUCT_HPP_
