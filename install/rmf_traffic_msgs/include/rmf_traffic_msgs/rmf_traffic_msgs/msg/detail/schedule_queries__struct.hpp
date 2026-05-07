// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQueries.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'node_id'
#include "rmf_traffic_msgs/msg/detail/schedule_identity__struct.hpp"
// Member 'queries'
#include "rmf_traffic_msgs/msg/detail/schedule_query__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleQueries __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ScheduleQueries __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduleQueries_
{
  using Type = ScheduleQueries_<ContainerAllocator>;

  explicit ScheduleQueries_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_init)
  {
    (void)_init;
  }

  explicit ScheduleQueries_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _node_id_type =
    rmf_traffic_msgs::msg::ScheduleIdentity_<ContainerAllocator>;
  _node_id_type node_id;
  using _queries_type =
    std::vector<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>>>;
  _queries_type queries;
  using _query_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _query_ids_type query_ids;

  // setters for named parameter idiom
  Type & set__node_id(
    const rmf_traffic_msgs::msg::ScheduleIdentity_<ContainerAllocator> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__queries(
    const std::vector<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>>> & _arg)
  {
    this->queries = _arg;
    return *this;
  }
  Type & set__query_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->query_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleQueries
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ScheduleQueries
    std::shared_ptr<rmf_traffic_msgs::msg::ScheduleQueries_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduleQueries_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->queries != other.queries) {
      return false;
    }
    if (this->query_ids != other.query_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduleQueries_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduleQueries_

// alias to use template instance with default allocator
using ScheduleQueries =
  rmf_traffic_msgs::msg::ScheduleQueries_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__STRUCT_HPP_
