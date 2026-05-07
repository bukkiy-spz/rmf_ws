// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:msg/DeliveryAlert.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__STRUCT_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'category'
#include "rmf_fleet_msgs/msg/detail/delivery_alert_category__struct.hpp"
// Member 'tier'
#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__struct.hpp"
// Member 'action'
#include "rmf_fleet_msgs/msg/detail/delivery_alert_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlert __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlert __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeliveryAlert_
{
  using Type = DeliveryAlert_<ContainerAllocator>;

  explicit DeliveryAlert_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : category(_init),
    tier(_init),
    action(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->task_id = "";
      this->message = "";
    }
  }

  explicit DeliveryAlert_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    category(_alloc, _init),
    tier(_alloc, _init),
    task_id(_alloc),
    action(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->task_id = "";
      this->message = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _category_type =
    rmf_fleet_msgs::msg::DeliveryAlertCategory_<ContainerAllocator>;
  _category_type category;
  using _tier_type =
    rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator>;
  _tier_type tier;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _action_type =
    rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator>;
  _action_type action;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__category(
    const rmf_fleet_msgs::msg::DeliveryAlertCategory_<ContainerAllocator> & _arg)
  {
    this->category = _arg;
    return *this;
  }
  Type & set__tier(
    const rmf_fleet_msgs::msg::DeliveryAlertTier_<ContainerAllocator> & _arg)
  {
    this->tier = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__action(
    const rmf_fleet_msgs::msg::DeliveryAlertAction_<ContainerAllocator> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlert
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__msg__DeliveryAlert
    std::shared_ptr<rmf_fleet_msgs::msg::DeliveryAlert_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryAlert_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->category != other.category) {
      return false;
    }
    if (this->tier != other.tier) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryAlert_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryAlert_

// alias to use template instance with default allocator
using DeliveryAlert =
  rmf_fleet_msgs::msg::DeliveryAlert_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__STRUCT_HPP_
