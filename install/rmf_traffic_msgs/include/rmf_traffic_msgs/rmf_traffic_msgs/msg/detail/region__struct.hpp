// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/Region.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'spaces'
#include "rmf_traffic_msgs/msg/detail/space__struct.hpp"
// Member 'timespan'
#include "rmf_traffic_msgs/msg/detail/timespan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__Region __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__Region __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Region_
{
  using Type = Region_<ContainerAllocator>;

  explicit Region_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timespan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map = "";
    }
  }

  explicit Region_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_alloc),
    timespan(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map = "";
    }
  }

  // field types and members
  using _map_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_type map;
  using _spaces_type =
    std::vector<rmf_traffic_msgs::msg::Space_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Space_<ContainerAllocator>>>;
  _spaces_type spaces;
  using _timespan_type =
    rmf_traffic_msgs::msg::Timespan_<ContainerAllocator>;
  _timespan_type timespan;

  // setters for named parameter idiom
  Type & set__map(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map = _arg;
    return *this;
  }
  Type & set__spaces(
    const std::vector<rmf_traffic_msgs::msg::Space_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Space_<ContainerAllocator>>> & _arg)
  {
    this->spaces = _arg;
    return *this;
  }
  Type & set__timespan(
    const rmf_traffic_msgs::msg::Timespan_<ContainerAllocator> & _arg)
  {
    this->timespan = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::Region_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::Region_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Region_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Region_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Region_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Region_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Region_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Region_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Region_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Region_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__Region
    std::shared_ptr<rmf_traffic_msgs::msg::Region_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__Region
    std::shared_ptr<rmf_traffic_msgs::msg::Region_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Region_ & other) const
  {
    if (this->map != other.map) {
      return false;
    }
    if (this->spaces != other.spaces) {
      return false;
    }
    if (this->timespan != other.timespan) {
      return false;
    }
    return true;
  }
  bool operator!=(const Region_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Region_

// alias to use template instance with default allocator
using Region =
  rmf_traffic_msgs::msg::Region_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__STRUCT_HPP_
