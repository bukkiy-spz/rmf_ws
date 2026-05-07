// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_door_msgs/msg/detail/door_sessions__struct.hpp"
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

void DoorSessions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_door_msgs::msg::DoorSessions(_init);
}

void DoorSessions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_door_msgs::msg::DoorSessions *>(message_memory);
  typed_message->~DoorSessions();
}

size_t size_function__DoorSessions__sessions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_door_msgs::msg::Session> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DoorSessions__sessions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_door_msgs::msg::Session> *>(untyped_member);
  return &member[index];
}

void * get_function__DoorSessions__sessions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_door_msgs::msg::Session> *>(untyped_member);
  return &member[index];
}

void fetch_function__DoorSessions__sessions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_door_msgs::msg::Session *>(
    get_const_function__DoorSessions__sessions(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_door_msgs::msg::Session *>(untyped_value);
  value = item;
}

void assign_function__DoorSessions__sessions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_door_msgs::msg::Session *>(
    get_function__DoorSessions__sessions(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_door_msgs::msg::Session *>(untyped_value);
  item = value;
}

void resize_function__DoorSessions__sessions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_door_msgs::msg::Session> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoorSessions_message_member_array[2] = {
  {
    "door_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs::msg::DoorSessions, door_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sessions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_door_msgs::msg::Session>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs::msg::DoorSessions, sessions),  // bytes offset in struct
    nullptr,  // default value
    size_function__DoorSessions__sessions,  // size() function pointer
    get_const_function__DoorSessions__sessions,  // get_const(index) function pointer
    get_function__DoorSessions__sessions,  // get(index) function pointer
    fetch_function__DoorSessions__sessions,  // fetch(index, &value) function pointer
    assign_function__DoorSessions__sessions,  // assign(index, value) function pointer
    resize_function__DoorSessions__sessions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoorSessions_message_members = {
  "rmf_door_msgs::msg",  // message namespace
  "DoorSessions",  // message name
  2,  // number of fields
  sizeof(rmf_door_msgs::msg::DoorSessions),
  DoorSessions_message_member_array,  // message members
  DoorSessions_init_function,  // function to initialize message memory (memory has to be allocated)
  DoorSessions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoorSessions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoorSessions_message_members,
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
get_message_type_support_handle<rmf_door_msgs::msg::DoorSessions>()
{
  return &::rmf_door_msgs::msg::rosidl_typesupport_introspection_cpp::DoorSessions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_door_msgs, msg, DoorSessions)() {
  return &::rmf_door_msgs::msg::rosidl_typesupport_introspection_cpp::DoorSessions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
