// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:srv/SubmitTask.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__STRUCT_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'description'
#include "rmf_task_msgs/msg/detail/task_description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__SubmitTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__SubmitTask_Request __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SubmitTask_Request_
{
  using Type = SubmitTask_Request_<ContainerAllocator>;

  explicit SubmitTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester = "";
    }
  }

  explicit SubmitTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : requester(_alloc),
    description(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requester = "";
    }
  }

  // field types and members
  using _requester_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _requester_type requester;
  using _description_type =
    rmf_task_msgs::msg::TaskDescription_<ContainerAllocator>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__requester(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->requester = _arg;
    return *this;
  }
  Type & set__description(
    const rmf_task_msgs::msg::TaskDescription_<ContainerAllocator> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__SubmitTask_Request
    std::shared_ptr<rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__SubmitTask_Request
    std::shared_ptr<rmf_task_msgs::srv::SubmitTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmitTask_Request_ & other) const
  {
    if (this->requester != other.requester) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmitTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmitTask_Request_

// alias to use template instance with default allocator
using SubmitTask_Request =
  rmf_task_msgs::srv::SubmitTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__SubmitTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__SubmitTask_Response __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SubmitTask_Response_
{
  using Type = SubmitTask_Response_<ContainerAllocator>;

  explicit SubmitTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->task_id = "";
      this->message = "";
    }
  }

  explicit SubmitTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->task_id = "";
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
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
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
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
    rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__SubmitTask_Response
    std::shared_ptr<rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__SubmitTask_Response
    std::shared_ptr<rmf_task_msgs::srv::SubmitTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmitTask_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmitTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmitTask_Response_

// alias to use template instance with default allocator
using SubmitTask_Response =
  rmf_task_msgs::srv::SubmitTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{

namespace srv
{

struct SubmitTask
{
  using Request = rmf_task_msgs::srv::SubmitTask_Request;
  using Response = rmf_task_msgs::srv::SubmitTask_Response;
};

}  // namespace srv

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__STRUCT_HPP_
