// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:srv/GetDispatchStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__STRUCT_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__GetDispatchStates_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__GetDispatchStates_Request __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDispatchStates_Request_
{
  using Type = GetDispatchStates_Request_<ContainerAllocator>;

  explicit GetDispatchStates_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetDispatchStates_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _task_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _task_ids_type task_ids;

  // setters for named parameter idiom
  Type & set__task_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->task_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__GetDispatchStates_Request
    std::shared_ptr<rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__GetDispatchStates_Request
    std::shared_ptr<rmf_task_msgs::srv::GetDispatchStates_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDispatchStates_Request_ & other) const
  {
    if (this->task_ids != other.task_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDispatchStates_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDispatchStates_Request_

// alias to use template instance with default allocator
using GetDispatchStates_Request =
  rmf_task_msgs::srv::GetDispatchStates_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs


// Include directives for member types
// Member 'states'
#include "rmf_task_msgs/msg/detail/dispatch_states__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__srv__GetDispatchStates_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__srv__GetDispatchStates_Response __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDispatchStates_Response_
{
  using Type = GetDispatchStates_Response_<ContainerAllocator>;

  explicit GetDispatchStates_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : states(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GetDispatchStates_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : states(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _states_type =
    rmf_task_msgs::msg::DispatchStates_<ContainerAllocator>;
  _states_type states;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__states(
    const rmf_task_msgs::msg::DispatchStates_<ContainerAllocator> & _arg)
  {
    this->states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__srv__GetDispatchStates_Response
    std::shared_ptr<rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__srv__GetDispatchStates_Response
    std::shared_ptr<rmf_task_msgs::srv::GetDispatchStates_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDispatchStates_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->states != other.states) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDispatchStates_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDispatchStates_Response_

// alias to use template instance with default allocator
using GetDispatchStates_Response =
  rmf_task_msgs::srv::GetDispatchStates_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_task_msgs

namespace rmf_task_msgs
{

namespace srv
{

struct GetDispatchStates
{
  using Request = rmf_task_msgs::srv::GetDispatchStates_Request;
  using Response = rmf_task_msgs::srv::GetDispatchStates_Response;
};

}  // namespace srv

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__STRUCT_HPP_
