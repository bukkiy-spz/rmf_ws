// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertTier.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_TIER__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_TIER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlertTier __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlertTier __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeliveryAlertTier_
{
  using Type = DeliveryAlertTier_<ContainerAllocator>;

  explicit DeliveryAlertTier_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0ul;
    }
  }

  explicit DeliveryAlertTier_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0ul;
    }
  }

  // field types and members
  using _value_type =
    uint32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const uint32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t WARNING =
    0u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint32_t ERROR =
    1u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlertTier
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlertTier
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryAlertTier_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryAlertTier_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryAlertTier_

// alias to use template instance with default allocator
using DeliveryAlertTier =
  rmf_fleet_msgs::msg::DeliveryAlertTier_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DeliveryAlertTier_<ContainerAllocator>::WARNING;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DeliveryAlertTier_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_TIER__STRUCT_HPP_
