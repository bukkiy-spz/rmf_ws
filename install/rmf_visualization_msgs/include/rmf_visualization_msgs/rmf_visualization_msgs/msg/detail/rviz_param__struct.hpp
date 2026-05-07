// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_visualization_msgs:msg/RvizParam.idl
// generated code does not contain a copyright notice

#ifndef RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__STRUCT_HPP_
#define RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_visualization_msgs__msg__RvizParam __attribute__((deprecated))
#else
# define DEPRECATED__rmf_visualization_msgs__msg__RvizParam __declspec(deprecated)
#endif

namespace rmf_visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RvizParam_
{
  using Type = RvizParam_<ContainerAllocator>;

  explicit RvizParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->query_duration = 0ll;
      this->start_duration = 0ll;
    }
  }

  explicit RvizParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->query_duration = 0ll;
      this->start_duration = 0ll;
    }
  }

  // field types and members
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _query_duration_type =
    int64_t;
  _query_duration_type query_duration;
  using _start_duration_type =
    int64_t;
  _start_duration_type start_duration;

  // setters for named parameter idiom
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__query_duration(
    const int64_t & _arg)
  {
    this->query_duration = _arg;
    return *this;
  }
  Type & set__start_duration(
    const int64_t & _arg)
  {
    this->start_duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_visualization_msgs__msg__RvizParam
    std::shared_ptr<rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_visualization_msgs__msg__RvizParam
    std::shared_ptr<rmf_visualization_msgs::msg::RvizParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RvizParam_ & other) const
  {
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->query_duration != other.query_duration) {
      return false;
    }
    if (this->start_duration != other.start_duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const RvizParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RvizParam_

// alias to use template instance with default allocator
using RvizParam =
  rmf_visualization_msgs::msg::RvizParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_visualization_msgs

#endif  // RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__STRUCT_HPP_
