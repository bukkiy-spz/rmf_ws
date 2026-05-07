// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationRejection.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'table'
#include "rmf_traffic_msgs/msg/detail/negotiation_key__struct.hpp"
// Member 'alternatives'
#include "rmf_traffic_msgs/msg/detail/itinerary__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationRejection __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__NegotiationRejection __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NegotiationRejection_
{
  using Type = NegotiationRejection_<ContainerAllocator>;

  explicit NegotiationRejection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conflict_version = 0ull;
      this->rejected_by = 0ull;
    }
  }

  explicit NegotiationRejection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conflict_version = 0ull;
      this->rejected_by = 0ull;
    }
  }

  // field types and members
  using _conflict_version_type =
    uint64_t;
  _conflict_version_type conflict_version;
  using _table_type =
    std::vector<rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator>>>;
  _table_type table;
  using _rejected_by_type =
    uint64_t;
  _rejected_by_type rejected_by;
  using _alternatives_type =
    std::vector<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>>>;
  _alternatives_type alternatives;

  // setters for named parameter idiom
  Type & set__conflict_version(
    const uint64_t & _arg)
  {
    this->conflict_version = _arg;
    return *this;
  }
  Type & set__table(
    const std::vector<rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::NegotiationKey_<ContainerAllocator>>> & _arg)
  {
    this->table = _arg;
    return *this;
  }
  Type & set__rejected_by(
    const uint64_t & _arg)
  {
    this->rejected_by = _arg;
    return *this;
  }
  Type & set__alternatives(
    const std::vector<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_traffic_msgs::msg::Itinerary_<ContainerAllocator>>> & _arg)
  {
    this->alternatives = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationRejection
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__NegotiationRejection
    std::shared_ptr<rmf_traffic_msgs::msg::NegotiationRejection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NegotiationRejection_ & other) const
  {
    if (this->conflict_version != other.conflict_version) {
      return false;
    }
    if (this->table != other.table) {
      return false;
    }
    if (this->rejected_by != other.rejected_by) {
      return false;
    }
    if (this->alternatives != other.alternatives) {
      return false;
    }
    return true;
  }
  bool operator!=(const NegotiationRejection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NegotiationRejection_

// alias to use template instance with default allocator
using NegotiationRejection =
  rmf_traffic_msgs::msg::NegotiationRejection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__STRUCT_HPP_
