// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__struct.hpp"
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

void NegotiationProposal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::NegotiationProposal(_init);
}

void NegotiationProposal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::NegotiationProposal *>(message_memory);
  typed_message->~NegotiationProposal();
}

size_t size_function__NegotiationProposal__to_accommodate(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationKey> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NegotiationProposal__to_accommodate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationKey> *>(untyped_member);
  return &member[index];
}

void * get_function__NegotiationProposal__to_accommodate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationKey> *>(untyped_member);
  return &member[index];
}

void fetch_function__NegotiationProposal__to_accommodate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationKey *>(
    get_const_function__NegotiationProposal__to_accommodate(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationKey *>(untyped_value);
  value = item;
}

void assign_function__NegotiationProposal__to_accommodate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationKey *>(
    get_function__NegotiationProposal__to_accommodate(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationKey *>(untyped_value);
  item = value;
}

void resize_function__NegotiationProposal__to_accommodate(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationKey> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NegotiationProposal__itinerary(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::Route> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NegotiationProposal__itinerary(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::Route> *>(untyped_member);
  return &member[index];
}

void * get_function__NegotiationProposal__itinerary(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::Route> *>(untyped_member);
  return &member[index];
}

void fetch_function__NegotiationProposal__itinerary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::Route *>(
    get_const_function__NegotiationProposal__itinerary(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::Route *>(untyped_value);
  value = item;
}

void assign_function__NegotiationProposal__itinerary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::Route *>(
    get_function__NegotiationProposal__itinerary(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::Route *>(untyped_value);
  item = value;
}

void resize_function__NegotiationProposal__itinerary(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::Route> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NegotiationProposal_message_member_array[6] = {
  {
    "conflict_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationProposal, conflict_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "proposal_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationProposal, proposal_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "for_participant",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationProposal, for_participant),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "to_accommodate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationKey>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationProposal, to_accommodate),  // bytes offset in struct
    nullptr,  // default value
    size_function__NegotiationProposal__to_accommodate,  // size() function pointer
    get_const_function__NegotiationProposal__to_accommodate,  // get_const(index) function pointer
    get_function__NegotiationProposal__to_accommodate,  // get(index) function pointer
    fetch_function__NegotiationProposal__to_accommodate,  // fetch(index, &value) function pointer
    assign_function__NegotiationProposal__to_accommodate,  // assign(index, value) function pointer
    resize_function__NegotiationProposal__to_accommodate  // resize(index) function pointer
  },
  {
    "plan_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationProposal, plan_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "itinerary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::Route>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationProposal, itinerary),  // bytes offset in struct
    nullptr,  // default value
    size_function__NegotiationProposal__itinerary,  // size() function pointer
    get_const_function__NegotiationProposal__itinerary,  // get_const(index) function pointer
    get_function__NegotiationProposal__itinerary,  // get(index) function pointer
    fetch_function__NegotiationProposal__itinerary,  // fetch(index, &value) function pointer
    assign_function__NegotiationProposal__itinerary,  // assign(index, value) function pointer
    resize_function__NegotiationProposal__itinerary  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NegotiationProposal_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "NegotiationProposal",  // message name
  6,  // number of fields
  sizeof(rmf_traffic_msgs::msg::NegotiationProposal),
  NegotiationProposal_message_member_array,  // message members
  NegotiationProposal_init_function,  // function to initialize message memory (memory has to be allocated)
  NegotiationProposal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NegotiationProposal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NegotiationProposal_message_members,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationProposal>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::NegotiationProposal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, NegotiationProposal)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::NegotiationProposal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
