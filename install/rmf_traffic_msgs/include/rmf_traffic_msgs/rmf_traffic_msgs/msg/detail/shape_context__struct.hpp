// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ShapeContext.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'convex_shapes'
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ShapeContext __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ShapeContext __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShapeContext_
{
  using Type = ShapeContext_<ContainerAllocator>;

  explicit ShapeContext_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : convex_shapes(_init)
  {
    (void)_init;
  }

  explicit ShapeContext_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : convex_shapes(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _convex_shapes_type =
    rmf_traffic_msgs::msg::ConvexShapeContext_<ContainerAllocator>;
  _convex_shapes_type convex_shapes;

  // setters for named parameter idiom
  Type & set__convex_shapes(
    const rmf_traffic_msgs::msg::ConvexShapeContext_<ContainerAllocator> & _arg)
  {
    this->convex_shapes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ShapeContext
    std::shared_ptr<rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ShapeContext
    std::shared_ptr<rmf_traffic_msgs::msg::ShapeContext_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShapeContext_ & other) const
  {
    if (this->convex_shapes != other.convex_shapes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShapeContext_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShapeContext_

// alias to use template instance with default allocator
using ShapeContext =
  rmf_traffic_msgs::msg::ShapeContext_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__STRUCT_HPP_
