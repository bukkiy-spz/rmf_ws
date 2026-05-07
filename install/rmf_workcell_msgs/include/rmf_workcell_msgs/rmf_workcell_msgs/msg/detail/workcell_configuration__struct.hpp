// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__STRUCT_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__STRUCT_HPP_

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
// Member 'assets'
#include "rmf_workcell_msgs/msg/detail/asset__struct.hpp"
// Member 'traits'
#include "rmf_workcell_msgs/msg/detail/trait__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_workcell_msgs__msg__WorkcellConfiguration __attribute__((deprecated))
#else
# define DEPRECATED__rmf_workcell_msgs__msg__WorkcellConfiguration __declspec(deprecated)
#endif

namespace rmf_workcell_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorkcellConfiguration_
{
  using Type = WorkcellConfiguration_<ContainerAllocator>;

  explicit WorkcellConfiguration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guid = "";
      this->type = "";
    }
  }

  explicit WorkcellConfiguration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_alloc, _init),
    guid(_alloc),
    type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guid = "";
      this->type = "";
    }
  }

  // field types and members
  using _time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_type time;
  using _guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _guid_type guid;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _assets_type =
    std::vector<rmf_workcell_msgs::msg::Asset_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_workcell_msgs::msg::Asset_<ContainerAllocator>>>;
  _assets_type assets;
  using _traits_type =
    std::vector<rmf_workcell_msgs::msg::Trait_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_workcell_msgs::msg::Trait_<ContainerAllocator>>>;
  _traits_type traits;

  // setters for named parameter idiom
  Type & set__time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->guid = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__assets(
    const std::vector<rmf_workcell_msgs::msg::Asset_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_workcell_msgs::msg::Asset_<ContainerAllocator>>> & _arg)
  {
    this->assets = _arg;
    return *this;
  }
  Type & set__traits(
    const std::vector<rmf_workcell_msgs::msg::Trait_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_workcell_msgs::msg::Trait_<ContainerAllocator>>> & _arg)
  {
    this->traits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_workcell_msgs__msg__WorkcellConfiguration
    std::shared_ptr<rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_workcell_msgs__msg__WorkcellConfiguration
    std::shared_ptr<rmf_workcell_msgs::msg::WorkcellConfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorkcellConfiguration_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->guid != other.guid) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->assets != other.assets) {
      return false;
    }
    if (this->traits != other.traits) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorkcellConfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorkcellConfiguration_

// alias to use template instance with default allocator
using WorkcellConfiguration =
  rmf_workcell_msgs::msg::WorkcellConfiguration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_workcell_msgs

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__STRUCT_HPP_
