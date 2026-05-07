// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/Profile.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'footprint'
// Member 'vicinity'
#include "rmf_traffic_msgs/msg/detail/convex_shape__struct.hpp"
// Member 'shape_context'
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__Profile __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__Profile __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Profile_
{
  using Type = Profile_<ContainerAllocator>;

  explicit Profile_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : footprint(_init),
    vicinity(_init),
    shape_context(_init)
  {
    (void)_init;
  }

  explicit Profile_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : footprint(_alloc, _init),
    vicinity(_alloc, _init),
    shape_context(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _footprint_type =
    rmf_traffic_msgs::msg::ConvexShape_<ContainerAllocator>;
  _footprint_type footprint;
  using _vicinity_type =
    rmf_traffic_msgs::msg::ConvexShape_<ContainerAllocator>;
  _vicinity_type vicinity;
  using _shape_context_type =
    rmf_traffic_msgs::msg::ConvexShapeContext_<ContainerAllocator>;
  _shape_context_type shape_context;

  // setters for named parameter idiom
  Type & set__footprint(
    const rmf_traffic_msgs::msg::ConvexShape_<ContainerAllocator> & _arg)
  {
    this->footprint = _arg;
    return *this;
  }
  Type & set__vicinity(
    const rmf_traffic_msgs::msg::ConvexShape_<ContainerAllocator> & _arg)
  {
    this->vicinity = _arg;
    return *this;
  }
  Type & set__shape_context(
    const rmf_traffic_msgs::msg::ConvexShapeContext_<ContainerAllocator> & _arg)
  {
    this->shape_context = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::Profile_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::Profile_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Profile_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Profile_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Profile_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Profile_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Profile_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Profile_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Profile_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Profile_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__Profile
    std::shared_ptr<rmf_traffic_msgs::msg::Profile_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__Profile
    std::shared_ptr<rmf_traffic_msgs::msg::Profile_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Profile_ & other) const
  {
    if (this->footprint != other.footprint) {
      return false;
    }
    if (this->vicinity != other.vicinity) {
      return false;
    }
    if (this->shape_context != other.shape_context) {
      return false;
    }
    return true;
  }
  bool operator!=(const Profile_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Profile_

// alias to use template instance with default allocator
using Profile =
  rmf_traffic_msgs::msg::Profile_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__STRUCT_HPP_
