// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertAction.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_ACTION__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlertAction __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlertAction __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeliveryAlertAction_
{
  using Type = DeliveryAlertAction_<ContainerAllocator>;

  explicit DeliveryAlertAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0ul;
    }
  }

  explicit DeliveryAlertAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t WAITING =
    0u;
  static constexpr uint32_t CANCEL =
    1u;
  static constexpr uint32_t OVERRIDE =
    2u;
  static constexpr uint32_t RESUME =
    3u;

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlertAction
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlertAction
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryAlertAction_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryAlertAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryAlertAction_

// alias to use template instance with default allocator
using DeliveryAlertAction =
  rmf_fleet_msgs::msg::DeliveryAlertAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DeliveryAlertAction_<ContainerAllocator>::WAITING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DeliveryAlertAction_<ContainerAllocator>::CANCEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DeliveryAlertAction_<ContainerAllocator>::OVERRIDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t DeliveryAlertAction_<ContainerAllocator>::RESUME;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_ACTION__STRUCT_HPP_
