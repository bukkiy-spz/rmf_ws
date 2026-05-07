// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_fleet_msgs:srv/LiftClearance.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__STRUCT_HPP_
#define RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__srv__LiftClearance_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__srv__LiftClearance_Request __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LiftClearance_Request_
{
  using Type = LiftClearance_Request_<ContainerAllocator>;

  explicit LiftClearance_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->lift_name = "";
    }
  }

  explicit LiftClearance_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_name(_alloc),
    lift_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->lift_name = "";
    }
  }

  // field types and members
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _lift_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lift_name_type lift_name;

  // setters for named parameter idiom
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__lift_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lift_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__srv__LiftClearance_Request
    std::shared_ptr<rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__srv__LiftClearance_Request
    std::shared_ptr<rmf_fleet_msgs::srv::LiftClearance_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LiftClearance_Request_ & other) const
  {
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->lift_name != other.lift_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const LiftClearance_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LiftClearance_Request_

// alias to use template instance with default allocator
using LiftClearance_Request =
  rmf_fleet_msgs::srv::LiftClearance_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_fleet_msgs


#ifndef _WIN32
# define DEPRECATED__rmf_fleet_msgs__srv__LiftClearance_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_fleet_msgs__srv__LiftClearance_Response __declspec(deprecated)
#endif

namespace rmf_fleet_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LiftClearance_Response_
{
  using Type = LiftClearance_Response_<ContainerAllocator>;

  explicit LiftClearance_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->decision = 0ul;
    }
  }

  explicit LiftClearance_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->decision = 0ul;
    }
  }

  // field types and members
  using _decision_type =
    uint32_t;
  _decision_type decision;

  // setters for named parameter idiom
  Type & set__decision(
    const uint32_t & _arg)
  {
    this->decision = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t DECISION_CLEAR =
    1u;
  static constexpr uint32_t DECISION_CROWDED =
    2u;

  // pointer types
  using RawPtr =
    rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_fleet_msgs__srv__LiftClearance_Response
    std::shared_ptr<rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_fleet_msgs__srv__LiftClearance_Response
    std::shared_ptr<rmf_fleet_msgs::srv::LiftClearance_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LiftClearance_Response_ & other) const
  {
    if (this->decision != other.decision) {
      return false;
    }
    return true;
  }
  bool operator!=(const LiftClearance_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LiftClearance_Response_

// alias to use template instance with default allocator
using LiftClearance_Response =
  rmf_fleet_msgs::srv::LiftClearance_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LiftClearance_Response_<ContainerAllocator>::DECISION_CLEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LiftClearance_Response_<ContainerAllocator>::DECISION_CROWDED;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace rmf_fleet_msgs

namespace rmf_fleet_msgs
{

namespace srv
{

struct LiftClearance
{
  using Request = rmf_fleet_msgs::srv::LiftClearance_Request;
  using Response = rmf_fleet_msgs::srv::LiftClearance_Response;
};

}  // namespace srv

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__STRUCT_HPP_
