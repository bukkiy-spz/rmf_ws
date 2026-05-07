// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:srv/RegisterQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'query'
#include "rmf_traffic_msgs/msg/detail/schedule_query__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__RegisterQuery_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__RegisterQuery_Request __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterQuery_Request_
{
  using Type = RegisterQuery_Request_<ContainerAllocator>;

  explicit RegisterQuery_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : query(_init)
  {
    (void)_init;
  }

  explicit RegisterQuery_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : query(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _query_type =
    rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator>;
  _query_type query;

  // setters for named parameter idiom
  Type & set__query(
    const rmf_traffic_msgs::msg::ScheduleQuery_<ContainerAllocator> & _arg)
  {
    this->query = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__RegisterQuery_Request
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__RegisterQuery_Request
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterQuery_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterQuery_Request_ & other) const
  {
    if (this->query != other.query) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterQuery_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterQuery_Request_

// alias to use template instance with default allocator
using RegisterQuery_Request =
  rmf_traffic_msgs::srv::RegisterQuery_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs


// Include directives for member types
// Member 'node_id'
#include "rmf_traffic_msgs/msg/detail/schedule_identity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__RegisterQuery_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__RegisterQuery_Response __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterQuery_Response_
{
  using Type = RegisterQuery_Response_<ContainerAllocator>;

  explicit RegisterQuery_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
      this->error = "";
    }
  }

  explicit RegisterQuery_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_alloc, _init),
    error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
      this->error = "";
    }
  }

  // field types and members
  using _node_id_type =
    rmf_traffic_msgs::msg::ScheduleIdentity_<ContainerAllocator>;
  _node_id_type node_id;
  using _query_id_type =
    uint64_t;
  _query_id_type query_id;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__node_id(
    const rmf_traffic_msgs::msg::ScheduleIdentity_<ContainerAllocator> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__query_id(
    const uint64_t & _arg)
  {
    this->query_id = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__RegisterQuery_Response
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__RegisterQuery_Response
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterQuery_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterQuery_Response_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->query_id != other.query_id) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterQuery_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterQuery_Response_

// alias to use template instance with default allocator
using RegisterQuery_Response =
  rmf_traffic_msgs::srv::RegisterQuery_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs

namespace rmf_traffic_msgs
{

namespace srv
{

struct RegisterQuery
{
  using Request = rmf_traffic_msgs::srv::RegisterQuery_Request;
  using Response = rmf_traffic_msgs::srv::RegisterQuery_Response;
};

}  // namespace srv

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__STRUCT_HPP_
