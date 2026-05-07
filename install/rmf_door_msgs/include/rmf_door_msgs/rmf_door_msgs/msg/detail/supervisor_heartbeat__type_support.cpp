// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_door_msgs:msg/SupervisorHeartbeat.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_door_msgs/msg/detail/supervisor_heartbeat__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_door_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SupervisorHeartbeat_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_door_msgs::msg::SupervisorHeartbeat(_init);
}

void SupervisorHeartbeat_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_door_msgs::msg::SupervisorHeartbeat *>(message_memory);
  typed_message->~SupervisorHeartbeat();
}

size_t size_function__SupervisorHeartbeat__all_sessions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_door_msgs::msg::DoorSessions> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SupervisorHeartbeat__all_sessions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_door_msgs::msg::DoorSessions> *>(untyped_member);
  return &member[index];
}

void * get_function__SupervisorHeartbeat__all_sessions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_door_msgs::msg::DoorSessions> *>(untyped_member);
  return &member[index];
}

void fetch_function__SupervisorHeartbeat__all_sessions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_door_msgs::msg::DoorSessions *>(
    get_const_function__SupervisorHeartbeat__all_sessions(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_door_msgs::msg::DoorSessions *>(untyped_value);
  value = item;
}

void assign_function__SupervisorHeartbeat__all_sessions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_door_msgs::msg::DoorSessions *>(
    get_function__SupervisorHeartbeat__all_sessions(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_door_msgs::msg::DoorSessions *>(untyped_value);
  item = value;
}

void resize_function__SupervisorHeartbeat__all_sessions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_door_msgs::msg::DoorSessions> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SupervisorHeartbeat_message_member_array[1] = {
  {
    "all_sessions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_door_msgs::msg::DoorSessions>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs::msg::SupervisorHeartbeat, all_sessions),  // bytes offset in struct
    nullptr,  // default value
    size_function__SupervisorHeartbeat__all_sessions,  // size() function pointer
    get_const_function__SupervisorHeartbeat__all_sessions,  // get_const(index) function pointer
    get_function__SupervisorHeartbeat__all_sessions,  // get(index) function pointer
    fetch_function__SupervisorHeartbeat__all_sessions,  // fetch(index, &value) function pointer
    assign_function__SupervisorHeartbeat__all_sessions,  // assign(index, value) function pointer
    resize_function__SupervisorHeartbeat__all_sessions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SupervisorHeartbeat_message_members = {
  "rmf_door_msgs::msg",  // message namespace
  "SupervisorHeartbeat",  // message name
  1,  // number of fields
  sizeof(rmf_door_msgs::msg::SupervisorHeartbeat),
  SupervisorHeartbeat_message_member_array,  // message members
  SupervisorHeartbeat_init_function,  // function to initialize message memory (memory has to be allocated)
  SupervisorHeartbeat_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SupervisorHeartbeat_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SupervisorHeartbeat_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_door_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_door_msgs::msg::SupervisorHeartbeat>()
{
  return &::rmf_door_msgs::msg::rosidl_typesupport_introspection_cpp::SupervisorHeartbeat_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_door_msgs, msg, SupervisorHeartbeat)() {
  return &::rmf_door_msgs::msg::rosidl_typesupport_introspection_cpp::SupervisorHeartbeat_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
