// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:srv/ApiService.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__STRUCT_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__ApiService_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__ApiService_Request __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApiService_Request_
{
  using Type = ApiService_Request_<ContainerAllocator>;

  explicit ApiService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->json_msg = "";
    }
  }

  explicit ApiService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : json_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->json_msg = "";
    }
  }

  // field types and members
  using _json_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _json_msg_type json_msg;

  // setters for named parameter idiom
  Type & set__json_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->json_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__ApiService_Request
    std::shared_ptr<rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__ApiService_Request
    std::shared_ptr<rmf_task_msgs::srv::ApiService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApiService_Request_ & other) const
  {
    if (this->json_msg != other.json_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApiService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApiService_Request_

// alias to use template instance with default allocator
using ApiService_Request =
  rmf_task_msgs::srv::ApiService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__ApiService_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__ApiService_Response __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApiService_Response_
{
  using Type = ApiService_Response_<ContainerAllocator>;

  explicit ApiService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->json_msg = "";
    }
  }

  explicit ApiService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : json_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->json_msg = "";
    }
  }

  // field types and members
  using _json_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _json_msg_type json_msg;

  // setters for named parameter idiom
  Type & set__json_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->json_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__ApiService_Response
    std::shared_ptr<rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__ApiService_Response
    std::shared_ptr<rmf_task_msgs::srv::ApiService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApiService_Response_ & other) const
  {
    if (this->json_msg != other.json_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApiService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApiService_Response_

// alias to use template instance with default allocator
using ApiService_Response =
  rmf_task_msgs::srv::ApiService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{

namespace srv
{

struct ApiService
{
  using Request = rmf_task_msgs::srv::ApiService_Request;
  using Response = rmf_task_msgs::srv::ApiService_Response;
};

}  // namespace srv

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__STRUCT_HPP_
