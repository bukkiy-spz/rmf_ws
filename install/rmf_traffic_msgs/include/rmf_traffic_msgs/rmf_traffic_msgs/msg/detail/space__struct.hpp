// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/Space.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'shape'
#include "rmf_traffic_msgs/msg/detail/shape__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__Space __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__Space __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Space_
{
  using Type = Space_<ContainerAllocator>;

  explicit Space_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shape(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit Space_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shape(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _shape_type =
    rmf_traffic_msgs::msg::Shape_<ContainerAllocator>;
  _shape_type shape;
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__shape(
    const rmf_traffic_msgs::msg::Shape_<ContainerAllocator> & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::Space_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::Space_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Space_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Space_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Space_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Space_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Space_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Space_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Space_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Space_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__Space
    std::shared_ptr<rmf_traffic_msgs::msg::Space_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__Space
    std::shared_ptr<rmf_traffic_msgs::msg::Space_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Space_ & other) const
  {
    if (this->shape != other.shape) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Space_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Space_

// alias to use template instance with default allocator
using Space =
  rmf_traffic_msgs::msg::Space_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__STRUCT_HPP_
