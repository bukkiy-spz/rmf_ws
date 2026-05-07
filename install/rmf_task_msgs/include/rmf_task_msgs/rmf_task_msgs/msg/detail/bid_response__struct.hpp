// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/BidResponse.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_RESPONSE__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'proposal'
#include "rmf_task_msgs/msg/detail/bid_proposal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__BidResponse __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__BidResponse __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BidResponse_
{
  using Type = BidResponse_<ContainerAllocator>;

  explicit BidResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : proposal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->has_proposal = false;
    }
  }

  explicit BidResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    proposal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->has_proposal = false;
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _has_proposal_type =
    bool;
  _has_proposal_type has_proposal;
  using _proposal_type =
    rmf_task_msgs::msg::BidProposal_<ContainerAllocator>;
  _proposal_type proposal;
  using _errors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _errors_type errors;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__has_proposal(
    const bool & _arg)
  {
    this->has_proposal = _arg;
    return *this;
  }
  Type & set__proposal(
    const rmf_task_msgs::msg::BidProposal_<ContainerAllocator> & _arg)
  {
    this->proposal = _arg;
    return *this;
  }
  Type & set__errors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->errors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::BidResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::BidResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::BidResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::BidResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::BidResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::BidResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::BidResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::BidResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::BidResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::BidResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__BidResponse
    std::shared_ptr<rmf_task_msgs::msg::BidResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__BidResponse
    std::shared_ptr<rmf_task_msgs::msg::BidResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BidResponse_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->has_proposal != other.has_proposal) {
      return false;
    }
    if (this->proposal != other.proposal) {
      return false;
    }
    if (this->errors != other.errors) {
      return false;
    }
    return true;
  }
  bool operator!=(const BidResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BidResponse_

// alias to use template instance with default allocator
using BidResponse =
  rmf_task_msgs::msg::BidResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_RESPONSE__STRUCT_HPP_
