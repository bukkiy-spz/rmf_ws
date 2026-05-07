// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/NegotiationStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_traffic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NegotiationStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::NegotiationStates(_init);
}

void NegotiationStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::NegotiationStates *>(message_memory);
  typed_message->~NegotiationStates();
}

size_t size_function__NegotiationStates__negotiations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NegotiationStates__negotiations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationState> *>(untyped_member);
  return &member[index];
}

void * get_function__NegotiationStates__negotiations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationState> *>(untyped_member);
  return &member[index];
}

void fetch_function__NegotiationStates__negotiations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationState *>(
    get_const_function__NegotiationStates__negotiations(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationState *>(untyped_value);
  value = item;
}

void assign_function__NegotiationStates__negotiations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationState *>(
    get_function__NegotiationStates__negotiations(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationState *>(untyped_value);
  item = value;
}

void resize_function__NegotiationStates__negotiations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NegotiationStates_message_member_array[1] = {
  {
    "negotiations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationStates, negotiations),  // bytes offset in struct
    nullptr,  // default value
    size_function__NegotiationStates__negotiations,  // size() function pointer
    get_const_function__NegotiationStates__negotiations,  // get_const(index) function pointer
    get_function__NegotiationStates__negotiations,  // get(index) function pointer
    fetch_function__NegotiationStates__negotiations,  // fetch(index, &value) function pointer
    assign_function__NegotiationStates__negotiations,  // assign(index, value) function pointer
    resize_function__NegotiationStates__negotiations  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NegotiationStates_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "NegotiationStates",  // message name
  1,  // number of fields
  sizeof(rmf_traffic_msgs::msg::NegotiationStates),
  NegotiationStates_message_member_array,  // message members
  NegotiationStates_init_function,  // function to initialize message memory (memory has to be allocated)
  NegotiationStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NegotiationStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NegotiationStates_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationStates>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::NegotiationStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, NegotiationStates)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::NegotiationStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
