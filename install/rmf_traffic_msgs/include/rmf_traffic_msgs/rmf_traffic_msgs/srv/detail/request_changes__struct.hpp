// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:srv/RequestChanges.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REQUEST_CHANGES__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REQUEST_CHANGES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__RequestChanges_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__RequestChanges_Request __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestChanges_Request_
{
  using Type = RequestChanges_Request_<ContainerAllocator>;

  explicit RequestChanges_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->full_update = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->query_id = 0ull;
      this->version = 0ull;
      this->full_update = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
      this->version = 0ull;
    }
  }

  explicit RequestChanges_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->full_update = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->query_id = 0ull;
      this->version = 0ull;
      this->full_update = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_id = 0ull;
      this->version = 0ull;
    }
  }

  // field types and members
  using _query_id_type =
    uint64_t;
  _query_id_type query_id;
  using _version_type =
    uint64_t;
  _version_type version;
  using _full_update_type =
    bool;
  _full_update_type full_update;

  // setters for named parameter idiom
  Type & set__query_id(
    const uint64_t & _arg)
  {
    this->query_id = _arg;
    return *this;
  }
  Type & set__version(
    const uint64_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__full_update(
    const bool & _arg)
  {
    this->full_update = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__RequestChanges_Request
    std::shared_ptr<rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__RequestChanges_Request
    std::shared_ptr<rmf_traffic_msgs::srv::RequestChanges_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestChanges_Request_ & other) const
  {
    if (this->query_id != other.query_id) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->full_update != other.full_update) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestChanges_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestChanges_Request_

// alias to use template instance with default allocator
using RequestChanges_Request =
  rmf_traffic_msgs::srv::RequestChanges_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs


// Include directives for member types
// Member 'node_id'
#include "rmf_traffic_msgs/msg/detail/schedule_identity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__RequestChanges_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__RequestChanges_Response __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestChanges_Response_
{
  using Type = RequestChanges_Response_<ContainerAllocator>;

  explicit RequestChanges_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->error = "";
    }
  }

  explicit RequestChanges_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_alloc, _init),
    error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->error = "";
    }
  }

  // field types and members
  using _node_id_type =
    rmf_traffic_msgs::msg::ScheduleIdentity_<ContainerAllocator>;
  _node_id_type node_id;
  using _result_type =
    uint8_t;
  _result_type result;
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
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t REQUEST_ACCEPTED =
    1u;
  static constexpr uint8_t UNKNOWN_QUERY_ID =
    2u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    3u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__RequestChanges_Response
    std::shared_ptr<rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__RequestChanges_Response
    std::shared_ptr<rmf_traffic_msgs::srv::RequestChanges_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestChanges_Response_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestChanges_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestChanges_Response_

// alias to use template instance with default allocator
using RequestChanges_Response =
  rmf_traffic_msgs::srv::RequestChanges_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RequestChanges_Response_<ContainerAllocator>::REQUEST_ACCEPTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RequestChanges_Response_<ContainerAllocator>::UNKNOWN_QUERY_ID;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RequestChanges_Response_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace srv

}  // namespace rmf_traffic_msgs

namespace rmf_traffic_msgs
{

namespace srv
{

struct RequestChanges
{
  using Request = rmf_traffic_msgs::srv::RequestChanges_Request;
  using Response = rmf_traffic_msgs::srv::RequestChanges_Response;
};

}  // namespace srv

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REQUEST_CHANGES__STRUCT_HPP_
