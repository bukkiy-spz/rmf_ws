// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAddItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'route'
#include "rmf_traffic_msgs/msg/detail/route__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeAddItem __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeAddItem __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleChangeAddItem_
{
  using Type = ScheduleChangeAddItem_<ContainerAllocator>;

  explicit ScheduleChangeAddItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = 0ull;
      this->storage_id = 0ull;
    }
  }

  explicit ScheduleChangeAddItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = 0ull;
      this->storage_id = 0ull;
    }
  }

  // field types and members
  using _route_id_type =
    uint64_t;
  _route_id_type route_id;
  using _storage_id_type =
    uint64_t;
  _storage_id_type storage_id;
  using _route_type =
    rmf_traffic_msgs::msg::Route_<ContainerAllocator>;
  _route_type route;

  // setters for named parameter idiom
  Type & set__route_id(
    const uint64_t & _arg)
  {
    this->route_id = _arg;
    return *this;
  }
  Type & set__storage_id(
    const uint64_t & _arg)
  {
    this->storage_id = _arg;
    return *this;
  }
  Type & set__route(
    const rmf_traffic_msgs::msg::Route_<ContainerAllocator> & _arg)
  {
    this->route = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeAddItem
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeAddItem
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleChangeAddItem_ & other) const
  {
    if (this->route_id != other.route_id) {
      return false;
    }
    if (this->storage_id != other.storage_id) {
      return false;
    }
    if (this->route != other.route) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleChangeAddItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleChangeAddItem_

// alias to use template instance with default allocator
using ScheduleChangeAddItem =
  rmf_traffic_msgs::msg::ScheduleChangeAddItem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__STRUCT_HPP_
