// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_site_map_msgs:msg/SiteMap.idl
// generated code does not contain a copyright notice

#ifndef RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__STRUCT_HPP_
#define RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_site_map_msgs__msg__SiteMap __attribute__((deprecated))
#else
# define DEPRECATED__rmf_site_map_msgs__msg__SiteMap __declspec(deprecated)
#endif

namespace rmf_site_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SiteMap_
{
  using Type = SiteMap_<ContainerAllocator>;

  explicit SiteMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->encoding = 0ul;
    }
  }

  explicit SiteMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->encoding = 0ul;
    }
  }

  // field types and members
  using _encoding_type =
    uint32_t;
  _encoding_type encoding;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__encoding(
    const uint32_t & _arg)
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
  static constexpr uint32_t MAP_DATA_UNDEFINED =
    0u;
  static constexpr uint32_t MAP_DATA_GPKG =
    1u;
  static constexpr uint32_t MAP_DATA_GPKG_GZ =
    2u;
  static constexpr uint32_t MAP_DATA_GEOJSON =
    3u;
  static constexpr uint32_t MAP_DATA_GEOJSON_GZ =
    4u;

  // pointer types
  using RawPtr =
    rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_site_map_msgs__msg__SiteMap
    std::shared_ptr<rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_site_map_msgs__msg__SiteMap
    std::shared_ptr<rmf_site_map_msgs::msg::SiteMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SiteMap_ & other) const
  {
    if (this->encoding != other.encoding) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SiteMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SiteMap_

// alias to use template instance with default allocator
using SiteMap =
  rmf_site_map_msgs::msg::SiteMap_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SiteMap_<ContainerAllocator>::MAP_DATA_UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SiteMap_<ContainerAllocator>::MAP_DATA_GPKG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SiteMap_<ContainerAllocator>::MAP_DATA_GPKG_GZ;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SiteMap_<ContainerAllocator>::MAP_DATA_GEOJSON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SiteMap_<ContainerAllocator>::MAP_DATA_GEOJSON_GZ;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_site_map_msgs

#endif  // RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__STRUCT_HPP_
