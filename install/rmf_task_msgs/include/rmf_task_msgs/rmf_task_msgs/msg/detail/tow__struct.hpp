// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/Tow.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TOW__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TOW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__Tow __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__Tow __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tow_
{
  using Type = Tow_<ContainerAllocator>;

  explicit Tow_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->object_type = "";
      this->is_object_id_known = false;
      this->object_id = "";
      this->pickup_place_name = "";
      this->is_dropoff_place_known = false;
      this->dropoff_place_name = "";
    }
  }

  explicit Tow_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    object_type(_alloc),
    object_id(_alloc),
    pickup_place_name(_alloc),
    dropoff_place_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->object_type = "";
      this->is_object_id_known = false;
      this->object_id = "";
      this->pickup_place_name = "";
      this->is_dropoff_place_known = false;
      this->dropoff_place_name = "";
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _object_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_type_type object_type;
  using _is_object_id_known_type =
    bool;
  _is_object_id_known_type is_object_id_known;
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _pickup_place_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pickup_place_name_type pickup_place_name;
  using _is_dropoff_place_known_type =
    bool;
  _is_dropoff_place_known_type is_dropoff_place_known;
  using _dropoff_place_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dropoff_place_name_type dropoff_place_name;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__object_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_type = _arg;
    return *this;
  }
  Type & set__is_object_id_known(
    const bool & _arg)
  {
    this->is_object_id_known = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__pickup_place_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pickup_place_name = _arg;
    return *this;
  }
  Type & set__is_dropoff_place_known(
    const bool & _arg)
  {
    this->is_dropoff_place_known = _arg;
    return *this;
  }
  Type & set__dropoff_place_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dropoff_place_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::Tow_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::Tow_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Tow_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Tow_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Tow_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Tow_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Tow_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Tow_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Tow_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Tow_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__Tow
    std::shared_ptr<rmf_task_msgs::msg::Tow_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__Tow
    std::shared_ptr<rmf_task_msgs::msg::Tow_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tow_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->object_type != other.object_type) {
      return false;
    }
    if (this->is_object_id_known != other.is_object_id_known) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->pickup_place_name != other.pickup_place_name) {
      return false;
    }
    if (this->is_dropoff_place_known != other.is_dropoff_place_known) {
      return false;
    }
    if (this->dropoff_place_name != other.dropoff_place_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tow_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tow_

// alias to use template instance with default allocator
using Tow =
  rmf_task_msgs::msg::Tow_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TOW__STRUCT_HPP_
