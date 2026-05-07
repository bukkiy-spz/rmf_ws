// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__Timespan __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__Timespan __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Timespan_
{
  using Type = Timespan_<ContainerAllocator>;

  explicit Timespan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_lower_bound = false;
      this->lower_bound = 0ll;
      this->has_upper_bound = false;
      this->upper_bound = 0ll;
    }
  }

  explicit Timespan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_lower_bound = false;
      this->lower_bound = 0ll;
      this->has_upper_bound = false;
      this->upper_bound = 0ll;
    }
  }

  // field types and members
  using _maps_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _maps_type maps;
  using _has_lower_bound_type =
    bool;
  _has_lower_bound_type has_lower_bound;
  using _lower_bound_type =
    int64_t;
  _lower_bound_type lower_bound;
  using _has_upper_bound_type =
    bool;
  _has_upper_bound_type has_upper_bound;
  using _upper_bound_type =
    int64_t;
  _upper_bound_type upper_bound;

  // setters for named parameter idiom
  Type & set__maps(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->maps = _arg;
    return *this;
  }
  Type & set__has_lower_bound(
    const bool & _arg)
  {
    this->has_lower_bound = _arg;
    return *this;
  }
  Type & set__lower_bound(
    const int64_t & _arg)
  {
    this->lower_bound = _arg;
    return *this;
  }
  Type & set__has_upper_bound(
    const bool & _arg)
  {
    this->has_upper_bound = _arg;
    return *this;
  }
  Type & set__upper_bound(
    const int64_t & _arg)
  {
    this->upper_bound = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::Timespan_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::Timespan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Timespan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Timespan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Timespan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Timespan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Timespan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Timespan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Timespan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Timespan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__Timespan
    std::shared_ptr<rmf_traffic_msgs::msg::Timespan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__Timespan
    std::shared_ptr<rmf_traffic_msgs::msg::Timespan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Timespan_ & other) const
  {
    if (this->maps != other.maps) {
      return false;
    }
    if (this->has_lower_bound != other.has_lower_bound) {
      return false;
    }
    if (this->lower_bound != other.lower_bound) {
      return false;
    }
    if (this->has_upper_bound != other.has_upper_bound) {
      return false;
    }
    if (this->upper_bound != other.upper_bound) {
      return false;
    }
    return true;
  }
  bool operator!=(const Timespan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Timespan_

// alias to use template instance with default allocator
using Timespan =
  rmf_traffic_msgs::msg::Timespan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__STRUCT_HPP_
