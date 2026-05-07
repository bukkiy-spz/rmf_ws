// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory'
#include "rmf_traffic_msgs/msg/detail/trajectory__struct.hpp"
// Member 'dependencies'
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__Route __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__Route __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Route_
{
  using Type = Route_<ContainerAllocator>;

  explicit Route_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map = "";
    }
  }

  explicit Route_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_alloc),
    trajectory(_alloc, _init)
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
  using _trajectory_type =
    rmf_traffic_msgs::msg::Trajectory_<ContainerAllocator>;
  _trajectory_type trajectory;
  using _checkpoints_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _checkpoints_type checkpoints;
  using _dependencies_type =
    std::vector<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>>>;
  _dependencies_type dependencies;

  // setters for named parameter idiom
  Type & set__map(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map = _arg;
    return *this;
  }
  Type & set__trajectory(
    const rmf_traffic_msgs::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__checkpoints(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->checkpoints = _arg;
    return *this;
  }
  Type & set__dependencies(
    const std::vector<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::TrafficDependency_<ContainerAllocator>>> & _arg)
  {
    this->dependencies = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::Route_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::Route_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Route_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Route_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Route_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Route_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Route_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Route_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__Route
    std::shared_ptr<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__Route
    std::shared_ptr<rmf_traffic_msgs::msg::Route_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Route_ & other) const
  {
    if (this->map != other.map) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->checkpoints != other.checkpoints) {
      return false;
    }
    if (this->dependencies != other.dependencies) {
      return false;
    }
    return true;
  }
  bool operator!=(const Route_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Route_

// alias to use template instance with default allocator
using Route =
  rmf_traffic_msgs::msg::Route_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
