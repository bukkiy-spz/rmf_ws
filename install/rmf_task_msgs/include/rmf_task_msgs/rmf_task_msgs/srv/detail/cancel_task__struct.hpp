// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:srv/CancelTask.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__CANCEL_TASK__STRUCT_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__CANCEL_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__CancelTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__CancelTask_Request __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CancelTask_Request_
{
  using Type = CancelTask_Request_<ContainerAllocator>;

  explicit CancelTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester = "";
      this->task_id = "";
    }
  }

  explicit CancelTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requester(_alloc),
    task_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester = "";
      this->task_id = "";
    }
  }

  // field types and members
  using _requester_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _requester_type requester;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;

  // setters for named parameter idiom
  Type & set__requester(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->requester = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__CancelTask_Request
    std::shared_ptr<rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__CancelTask_Request
    std::shared_ptr<rmf_task_msgs::srv::CancelTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CancelTask_Request_ & other) const
  {
    if (this->requester != other.requester) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CancelTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CancelTask_Request_

// alias to use template instance with default allocator
using CancelTask_Request =
  rmf_task_msgs::srv::CancelTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__CancelTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__CancelTask_Response __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CancelTask_Response_
{
  using Type = CancelTask_Response_<ContainerAllocator>;

  explicit CancelTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CancelTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__CancelTask_Response
    std::shared_ptr<rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__CancelTask_Response
    std::shared_ptr<rmf_task_msgs::srv::CancelTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CancelTask_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CancelTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CancelTask_Response_

// alias to use template instance with default allocator
using CancelTask_Response =
  rmf_task_msgs::srv::CancelTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{

namespace srv
{

struct CancelTask
{
  using Request = rmf_task_msgs::srv::CancelTask_Request;
  using Response = rmf_task_msgs::srv::CancelTask_Response;
};

}  // namespace srv

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__CANCEL_TASK__STRUCT_HPP_
