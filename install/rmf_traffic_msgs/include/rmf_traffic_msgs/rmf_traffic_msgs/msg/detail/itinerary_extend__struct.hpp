// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryExtend.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__STRUCT_HPP_

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
# define DEPRECATED__rmf_traffic_msgs__msg__ItineraryExtend __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ItineraryExtend __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ItineraryExtend_
{
  using Type = ItineraryExtend_<ContainerAllocator>;

  explicit ItineraryExtend_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->itinerary_version = 0ull;
    }
  }

  explicit ItineraryExtend_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->itinerary_version = 0ull;
    }
  }

  // field types and members
  using _participant_type =
    uint64_t;
  _participant_type participant;
  using _routes_type =
    std::vector<rmf_traffic_msgs::msg::Route_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>>;
  _routes_type routes;
  using _itinerary_version_type =
    uint64_t;
  _itinerary_version_type itinerary_version;

  // setters for named parameter idiom
  Type & set__participant(
    const uint64_t & _arg)
  {
    this->participant = _arg;
    return *this;
  }
  Type & set__routes(
    const std::vector<rmf_traffic_msgs::msg::Route_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Route_<ContainerAllocator>>> & _arg)
  {
    this->routes = _arg;
    return *this;
  }
  Type & set__itinerary_version(
    const uint64_t & _arg)
  {
    this->itinerary_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ItineraryExtend
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ItineraryExtend
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryExtend_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItineraryExtend_ & other) const
  {
    if (this->participant != other.participant) {
      return false;
    }
    if (this->routes != other.routes) {
      return false;
    }
    if (this->itinerary_version != other.itinerary_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItineraryExtend_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItineraryExtend_

// alias to use template instance with default allocator
using ItineraryExtend =
  rmf_traffic_msgs::msg::ItineraryExtend_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__STRUCT_HPP_
