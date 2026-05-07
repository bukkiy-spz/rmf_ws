// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/Itinerary.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'routes'
#include "rmf_traffic_msgs/msg/detail/route__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__Itinerary __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__Itinerary __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Itinerary_
{
  using Type = Itinerary_<ContainerAllocator>;

  explicit Itinerary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Itinerary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _routes_type =
    std::vector<rmf_traffic_msgs::msg::Route_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>>;
  _routes_type routes;

  // setters for named parameter idiom
  Type & set__routes(
    const std::vector<rmf_traffic_msgs::msg::Route_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>> & _arg)
  {
    this->routes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__Itinerary
    std::shared_ptr<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__Itinerary
    std::shared_ptr<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Itinerary_ & other) const
  {
    if (this->routes != other.routes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Itinerary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Itinerary_

// alias to use template instance with default allocator
using Itinerary =
  rmf_traffic_msgs::msg::Itinerary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY__STRUCT_HPP_
