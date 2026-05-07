// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_task_msgs:msg/DispatchStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_task_msgs/msg/detail/dispatch_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_task_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DispatchStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_task_msgs::msg::DispatchStates(_init);
}

void DispatchStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_task_msgs::msg::DispatchStates *>(message_memory);
  typed_message->~DispatchStates();
}

size_t size_function__DispatchStates__active(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_task_msgs::msg::DispatchState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DispatchStates__active(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_task_msgs::msg::DispatchState> *>(untyped_member);
  return &member[index];
}

void * get_function__DispatchStates__active(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_task_msgs::msg::DispatchState> *>(untyped_member);
  return &member[index];
}

void fetch_function__DispatchStates__active(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_task_msgs::msg::DispatchState *>(
    get_const_function__DispatchStates__active(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_task_msgs::msg::DispatchState *>(untyped_value);
  value = item;
}

void assign_function__DispatchStates__active(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_task_msgs::msg::DispatchState *>(
    get_function__DispatchStates__active(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_task_msgs::msg::DispatchState *>(untyped_value);
  item = value;
}

void resize_function__DispatchStates__active(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_task_msgs::msg::DispatchState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DispatchStates__finished(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_task_msgs::msg::DispatchState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DispatchStates__finished(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_task_msgs::msg::DispatchState> *>(untyped_member);
  return &member[index];
}

void * get_function__DispatchStates__finished(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_task_msgs::msg::DispatchState> *>(untyped_member);
  return &member[index];
}

void fetch_function__DispatchStates__finished(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_task_msgs::msg::DispatchState *>(
    get_const_function__DispatchStates__finished(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_task_msgs::msg::DispatchState *>(untyped_value);
  value = item;
}

void assign_function__DispatchStates__finished(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_task_msgs::msg::DispatchState *>(
    get_function__DispatchStates__finished(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_task_msgs::msg::DispatchState *>(untyped_value);
  item = value;
}

void resize_function__DispatchStates__finished(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_task_msgs::msg::DispatchState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DispatchStates_message_member_array[2] = {
  {
    "active",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_task_msgs::msg::DispatchState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::DispatchStates, active),  // bytes offset in struct
    nullptr,  // default value
    size_function__DispatchStates__active,  // size() function pointer
    get_const_function__DispatchStates__active,  // get_const(index) function pointer
    get_function__DispatchStates__active,  // get(index) function pointer
    fetch_function__DispatchStates__active,  // fetch(index, &value) function pointer
    assign_function__DispatchStates__active,  // assign(index, value) function pointer
    resize_function__DispatchStates__active  // resize(index) function pointer
  },
  {
    "finished",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_task_msgs::msg::DispatchState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs::msg::DispatchStates, finished),  // bytes offset in struct
    nullptr,  // default value
    size_function__DispatchStates__finished,  // size() function pointer
    get_const_function__DispatchStates__finished,  // get_const(index) function pointer
    get_function__DispatchStates__finished,  // get(index) function pointer
    fetch_function__DispatchStates__finished,  // fetch(index, &value) function pointer
    assign_function__DispatchStates__finished,  // assign(index, value) function pointer
    resize_function__DispatchStates__finished  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DispatchStates_message_members = {
  "rmf_task_msgs::msg",  // message namespace
  "DispatchStates",  // message name
  2,  // number of fields
  sizeof(rmf_task_msgs::msg::DispatchStates),
  DispatchStates_message_member_array,  // message members
  DispatchStates_init_function,  // function to initialize message memory (memory has to be allocated)
  DispatchStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DispatchStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DispatchStates_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_task_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_task_msgs::msg::DispatchStates>()
{
  return &::rmf_task_msgs::msg::rosidl_typesupport_introspection_cpp::DispatchStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_task_msgs, msg, DispatchStates)() {
  return &::rmf_task_msgs::msg::rosidl_typesupport_introspection_cpp::DispatchStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
