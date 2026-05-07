// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/Delivery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'items'
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__struct.hpp"
// Member 'pickup_behavior'
// Member 'dropoff_behavior'
#include "rmf_task_msgs/msg/detail/behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__Delivery __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__Delivery __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Delivery_
{
  using Type = Delivery_<ContainerAllocator>;

  explicit Delivery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pickup_behavior(_init),
    dropoff_behavior(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->pickup_place_name = "";
      this->pickup_dispenser = "";
      this->dropoff_place_name = "";
      this->dropoff_ingestor = "";
    }
  }

  explicit Delivery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    pickup_place_name(_alloc),
    pickup_dispenser(_alloc),
    pickup_behavior(_alloc, _init),
    dropoff_place_name(_alloc),
    dropoff_ingestor(_alloc),
    dropoff_behavior(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->pickup_place_name = "";
      this->pickup_dispenser = "";
      this->dropoff_place_name = "";
      this->dropoff_ingestor = "";
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _items_type =
    std::vector<rmf_dispenser_msgs::msg::DispenserRequestItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_dispenser_msgs::msg::DispenserRequestItem_<ContainerAllocator>>>;
  _items_type items;
  using _pickup_place_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pickup_place_name_type pickup_place_name;
  using _pickup_dispenser_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pickup_dispenser_type pickup_dispenser;
  using _pickup_behavior_type =
    rmf_task_msgs::msg::Behavior_<ContainerAllocator>;
  _pickup_behavior_type pickup_behavior;
  using _dropoff_place_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dropoff_place_name_type dropoff_place_name;
  using _dropoff_ingestor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dropoff_ingestor_type dropoff_ingestor;
  using _dropoff_behavior_type =
    rmf_task_msgs::msg::Behavior_<ContainerAllocator>;
  _dropoff_behavior_type dropoff_behavior;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__items(
    const std::vector<rmf_dispenser_msgs::msg::DispenserRequestItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_dispenser_msgs::msg::DispenserRequestItem_<ContainerAllocator>>> & _arg)
  {
    this->items = _arg;
    return *this;
  }
  Type & set__pickup_place_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pickup_place_name = _arg;
    return *this;
  }
  Type & set__pickup_dispenser(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pickup_dispenser = _arg;
    return *this;
  }
  Type & set__pickup_behavior(
    const rmf_task_msgs::msg::Behavior_<ContainerAllocator> & _arg)
  {
    this->pickup_behavior = _arg;
    return *this;
  }
  Type & set__dropoff_place_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dropoff_place_name = _arg;
    return *this;
  }
  Type & set__dropoff_ingestor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dropoff_ingestor = _arg;
    return *this;
  }
  Type & set__dropoff_behavior(
    const rmf_task_msgs::msg::Behavior_<ContainerAllocator> & _arg)
  {
    this->dropoff_behavior = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::Delivery_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::Delivery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Delivery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Delivery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Delivery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Delivery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Delivery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Delivery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Delivery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Delivery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__Delivery
    std::shared_ptr<rmf_task_msgs::msg::Delivery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__Delivery
    std::shared_ptr<rmf_task_msgs::msg::Delivery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Delivery_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->items != other.items) {
      return false;
    }
    if (this->pickup_place_name != other.pickup_place_name) {
      return false;
    }
    if (this->pickup_dispenser != other.pickup_dispenser) {
      return false;
    }
    if (this->pickup_behavior != other.pickup_behavior) {
      return false;
    }
    if (this->dropoff_place_name != other.dropoff_place_name) {
      return false;
    }
    if (this->dropoff_ingestor != other.dropoff_ingestor) {
      return false;
    }
    if (this->dropoff_behavior != other.dropoff_behavior) {
      return false;
    }
    return true;
  }
  bool operator!=(const Delivery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Delivery_

// alias to use template instance with default allocator
using Delivery =
  rmf_task_msgs::msg::Delivery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__STRUCT_HPP_
