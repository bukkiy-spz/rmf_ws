// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:srv/RegisterParticipant.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__STRUCT_HPP_

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
#include "rmf_traffic_msgs/msg/detail/participant_description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__RegisterParticipant_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__RegisterParticipant_Request __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterParticipant_Request_
{
  using Type = RegisterParticipant_Request_<ContainerAllocator>;

  explicit RegisterParticipant_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_init)
  {
    (void)_init;
  }

  explicit RegisterParticipant_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _description_type =
    rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__description(
    const rmf_traffic_msgs::msg::ParticipantDescription_<ContainerAllocator> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__RegisterParticipant_Request
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__RegisterParticipant_Request
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterParticipant_Request_ & other) const
  {
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterParticipant_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterParticipant_Request_

// alias to use template instance with default allocator
using RegisterParticipant_Request =
  rmf_traffic_msgs::srv::RegisterParticipant_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__srv__RegisterParticipant_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__srv__RegisterParticipant_Response __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterParticipant_Response_
{
  using Type = RegisterParticipant_Response_<ContainerAllocator>;

  explicit RegisterParticipant_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant_id = 0ull;
      this->last_itinerary_version = 0ull;
      this->last_plan_id = 0ull;
      this->next_storage_base = 0ull;
      this->error = "";
    }
  }

  explicit RegisterParticipant_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant_id = 0ull;
      this->last_itinerary_version = 0ull;
      this->last_plan_id = 0ull;
      this->next_storage_base = 0ull;
      this->error = "";
    }
  }

  // field types and members
  using _participant_id_type =
    uint64_t;
  _participant_id_type participant_id;
  using _last_itinerary_version_type =
    uint64_t;
  _last_itinerary_version_type last_itinerary_version;
  using _last_plan_id_type =
    uint64_t;
  _last_plan_id_type last_plan_id;
  using _next_storage_base_type =
    uint64_t;
  _next_storage_base_type next_storage_base;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__participant_id(
    const uint64_t & _arg)
  {
    this->participant_id = _arg;
    return *this;
  }
  Type & set__last_itinerary_version(
    const uint64_t & _arg)
  {
    this->last_itinerary_version = _arg;
    return *this;
  }
  Type & set__last_plan_id(
    const uint64_t & _arg)
  {
    this->last_plan_id = _arg;
    return *this;
  }
  Type & set__next_storage_base(
    const uint64_t & _arg)
  {
    this->next_storage_base = _arg;
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
    rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__srv__RegisterParticipant_Response
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__srv__RegisterParticipant_Response
    std::shared_ptr<rmf_traffic_msgs::srv::RegisterParticipant_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterParticipant_Response_ & other) const
  {
    if (this->participant_id != other.participant_id) {
      return false;
    }
    if (this->last_itinerary_version != other.last_itinerary_version) {
      return false;
    }
    if (this->last_plan_id != other.last_plan_id) {
      return false;
    }
    if (this->next_storage_base != other.next_storage_base) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterParticipant_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterParticipant_Response_

// alias to use template instance with default allocator
using RegisterParticipant_Response =
  rmf_traffic_msgs::srv::RegisterParticipant_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_traffic_msgs

namespace rmf_traffic_msgs
{

namespace srv
{

struct RegisterParticipant
{
  using Request = rmf_traffic_msgs::srv::RegisterParticipant_Request;
  using Response = rmf_traffic_msgs::srv::RegisterParticipant_Response;
};

}  // namespace srv

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__STRUCT_HPP_
