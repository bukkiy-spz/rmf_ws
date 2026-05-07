// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__STRUCT_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'items'
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_ingestor_msgs__msg__IngestorRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_ingestor_msgs__msg__IngestorRequest __declspec(deprecated)
#endif

namespace rmf_ingestor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IngestorRequest_
{
  using Type = IngestorRequest_<ContainerAllocator>;

  explicit IngestorRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_guid = "";
      this->target_guid = "";
      this->transporter_type = "";
    }
  }

  explicit IngestorRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_alloc, _init),
    request_guid(_alloc),
    target_guid(_alloc),
    transporter_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_guid = "";
      this->target_guid = "";
      this->transporter_type = "";
    }
  }

  // field types and members
  using _time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_type time;
  using _request_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_guid_type request_guid;
  using _target_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_guid_type target_guid;
  using _transporter_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _transporter_type_type transporter_type;
  using _items_type =
    std::vector<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>>>;
  _items_type items;

  // setters for named parameter idiom
  Type & set__time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__request_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_guid = _arg;
    return *this;
  }
  Type & set__target_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_guid = _arg;
    return *this;
  }
  Type & set__transporter_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->transporter_type = _arg;
    return *this;
  }
  Type & set__items(
    const std::vector<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>>> & _arg)
  {
    this->items = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_ingestor_msgs__msg__IngestorRequest
    std::shared_ptr<rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_ingestor_msgs__msg__IngestorRequest
    std::shared_ptr<rmf_ingestor_msgs::msg::IngestorRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IngestorRequest_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->request_guid != other.request_guid) {
      return false;
    }
    if (this->target_guid != other.target_guid) {
      return false;
    }
    if (this->transporter_type != other.transporter_type) {
      return false;
    }
    if (this->items != other.items) {
      return false;
    }
    return true;
  }
  bool operator!=(const IngestorRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IngestorRequest_

// alias to use template instance with default allocator
using IngestorRequest =
  rmf_ingestor_msgs::msg::IngestorRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_ingestor_msgs

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__STRUCT_HPP_
