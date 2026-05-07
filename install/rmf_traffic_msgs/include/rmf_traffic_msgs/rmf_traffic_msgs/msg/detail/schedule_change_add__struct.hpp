// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAdd.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'items'
#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeAdd __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeAdd __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleChangeAdd_
{
  using Type = ScheduleChangeAdd_<ContainerAllocator>;

  explicit ScheduleChangeAdd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_id = 0ull;
    }
  }

  explicit ScheduleChangeAdd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_id = 0ull;
    }
  }

  // field types and members
  using _plan_id_type =
    uint64_t;
  _plan_id_type plan_id;
  using _items_type =
    std::vector<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>>>;
  _items_type items;

  // setters for named parameter idiom
  Type & set__plan_id(
    const uint64_t & _arg)
  {
    this->plan_id = _arg;
    return *this;
  }
  Type & set__items(
    const std::vector<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleChangeAddItem_<ContainerAllocator>>> & _arg)
  {
    this->items = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeAdd
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleChangeAdd
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleChangeAdd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleChangeAdd_ & other) const
  {
    if (this->plan_id != other.plan_id) {
      return false;
    }
    if (this->items != other.items) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleChangeAdd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleChangeAdd_

// alias to use template instance with default allocator
using ScheduleChangeAdd =
  rmf_traffic_msgs::msg::ScheduleChangeAdd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__STRUCT_HPP_
