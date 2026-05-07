// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_scheduler_msgs:msg/Schedule.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE__STRUCT_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'payload'
#include "rmf_scheduler_msgs/msg/detail/payload__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_scheduler_msgs__msg__Schedule __attribute__((deprecated))
#else
# define DEPRECATED__rmf_scheduler_msgs__msg__Schedule __declspec(deprecated)
#endif

namespace rmf_scheduler_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Schedule_
{
  using Type = Schedule_<ContainerAllocator>;

  explicit Schedule_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : payload(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->finish_at = 9223372036854775807ll;
      this->group = "default";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->name = "";
      this->created_at = 0ll;
      this->schedule = "";
      this->start_at = 0ll;
      this->finish_at = 0ll;
      this->group = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->created_at = 0ll;
      this->schedule = "";
      this->start_at = 0ll;
    }
  }

  explicit Schedule_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    schedule(_alloc),
    group(_alloc),
    payload(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->finish_at = 9223372036854775807ll;
      this->group = "default";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->name = "";
      this->created_at = 0ll;
      this->schedule = "";
      this->start_at = 0ll;
      this->finish_at = 0ll;
      this->group = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->created_at = 0ll;
      this->schedule = "";
      this->start_at = 0ll;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _created_at_type =
    int64_t;
  _created_at_type created_at;
  using _schedule_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _schedule_type schedule;
  using _start_at_type =
    int64_t;
  _start_at_type start_at;
  using _finish_at_type =
    int64_t;
  _finish_at_type finish_at;
  using _group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_type group;
  using _payload_type =
    rmf_scheduler_msgs::msg::Payload_<ContainerAllocator>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__created_at(
    const int64_t & _arg)
  {
    this->created_at = _arg;
    return *this;
  }
  Type & set__schedule(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->schedule = _arg;
    return *this;
  }
  Type & set__start_at(
    const int64_t & _arg)
  {
    this->start_at = _arg;
    return *this;
  }
  Type & set__finish_at(
    const int64_t & _arg)
  {
    this->finish_at = _arg;
    return *this;
  }
  Type & set__group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group = _arg;
    return *this;
  }
  Type & set__payload(
    const rmf_scheduler_msgs::msg::Payload_<ContainerAllocator> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_scheduler_msgs__msg__Schedule
    std::shared_ptr<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_scheduler_msgs__msg__Schedule
    std::shared_ptr<rmf_scheduler_msgs::msg::Schedule_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Schedule_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->created_at != other.created_at) {
      return false;
    }
    if (this->schedule != other.schedule) {
      return false;
    }
    if (this->start_at != other.start_at) {
      return false;
    }
    if (this->finish_at != other.finish_at) {
      return false;
    }
    if (this->group != other.group) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const Schedule_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Schedule_

// alias to use template instance with default allocator
using Schedule =
  rmf_scheduler_msgs::msg::Schedule_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE__STRUCT_HPP_
