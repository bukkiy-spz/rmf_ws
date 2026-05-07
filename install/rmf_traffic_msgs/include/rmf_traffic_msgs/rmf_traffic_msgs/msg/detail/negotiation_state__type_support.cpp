// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/NegotiationState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_state__struct.hpp"
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

void NegotiationState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::NegotiationState(_init);
}

void NegotiationState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::NegotiationState *>(message_memory);
  typed_message->~NegotiationState();
}

size_t size_function__NegotiationState__tree(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationTreeNode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NegotiationState__tree(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationTreeNode> *>(untyped_member);
  return &member[index];
}

void * get_function__NegotiationState__tree(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationTreeNode> *>(untyped_member);
  return &member[index];
}

void fetch_function__NegotiationState__tree(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationTreeNode *>(
    get_const_function__NegotiationState__tree(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationTreeNode *>(untyped_value);
  value = item;
}

void assign_function__NegotiationState__tree(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationTreeNode *>(
    get_function__NegotiationState__tree(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationTreeNode *>(untyped_value);
  item = value;
}

void resize_function__NegotiationState__tree(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationTreeNode> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NegotiationState__orphan_proposals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationProposal> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NegotiationState__orphan_proposals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationProposal> *>(untyped_member);
  return &member[index];
}

void * get_function__NegotiationState__orphan_proposals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationProposal> *>(untyped_member);
  return &member[index];
}

void fetch_function__NegotiationState__orphan_proposals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationProposal *>(
    get_const_function__NegotiationState__orphan_proposals(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationProposal *>(untyped_value);
  value = item;
}

void assign_function__NegotiationState__orphan_proposals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationProposal *>(
    get_function__NegotiationState__orphan_proposals(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationProposal *>(untyped_value);
  item = value;
}

void resize_function__NegotiationState__orphan_proposals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationProposal> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NegotiationState__orphan_rejections(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationRejection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NegotiationState__orphan_rejections(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationRejection> *>(untyped_member);
  return &member[index];
}

void * get_function__NegotiationState__orphan_rejections(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationRejection> *>(untyped_member);
  return &member[index];
}

void fetch_function__NegotiationState__orphan_rejections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationRejection *>(
    get_const_function__NegotiationState__orphan_rejections(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationRejection *>(untyped_value);
  value = item;
}

void assign_function__NegotiationState__orphan_rejections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationRejection *>(
    get_function__NegotiationState__orphan_rejections(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationRejection *>(untyped_value);
  item = value;
}

void resize_function__NegotiationState__orphan_rejections(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationRejection> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NegotiationState__orphan_forfeits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationForfeit> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NegotiationState__orphan_forfeits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::NegotiationForfeit> *>(untyped_member);
  return &member[index];
}

void * get_function__NegotiationState__orphan_forfeits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationForfeit> *>(untyped_member);
  return &member[index];
}

void fetch_function__NegotiationState__orphan_forfeits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationForfeit *>(
    get_const_function__NegotiationState__orphan_forfeits(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationForfeit *>(untyped_value);
  value = item;
}

void assign_function__NegotiationState__orphan_forfeits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::NegotiationForfeit *>(
    get_function__NegotiationState__orphan_forfeits(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::NegotiationForfeit *>(untyped_value);
  item = value;
}

void resize_function__NegotiationState__orphan_forfeits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::NegotiationForfeit> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NegotiationState_message_member_array[5] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationState, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tree",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationTreeNode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationState, tree),  // bytes offset in struct
    nullptr,  // default value
    size_function__NegotiationState__tree,  // size() function pointer
    get_const_function__NegotiationState__tree,  // get_const(index) function pointer
    get_function__NegotiationState__tree,  // get(index) function pointer
    fetch_function__NegotiationState__tree,  // fetch(index, &value) function pointer
    assign_function__NegotiationState__tree,  // assign(index, value) function pointer
    resize_function__NegotiationState__tree  // resize(index) function pointer
  },
  {
    "orphan_proposals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationProposal>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationState, orphan_proposals),  // bytes offset in struct
    nullptr,  // default value
    size_function__NegotiationState__orphan_proposals,  // size() function pointer
    get_const_function__NegotiationState__orphan_proposals,  // get_const(index) function pointer
    get_function__NegotiationState__orphan_proposals,  // get(index) function pointer
    fetch_function__NegotiationState__orphan_proposals,  // fetch(index, &value) function pointer
    assign_function__NegotiationState__orphan_proposals,  // assign(index, value) function pointer
    resize_function__NegotiationState__orphan_proposals  // resize(index) function pointer
  },
  {
    "orphan_rejections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationRejection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationState, orphan_rejections),  // bytes offset in struct
    nullptr,  // default value
    size_function__NegotiationState__orphan_rejections,  // size() function pointer
    get_const_function__NegotiationState__orphan_rejections,  // get_const(index) function pointer
    get_function__NegotiationState__orphan_rejections,  // get(index) function pointer
    fetch_function__NegotiationState__orphan_rejections,  // fetch(index, &value) function pointer
    assign_function__NegotiationState__orphan_rejections,  // assign(index, value) function pointer
    resize_function__NegotiationState__orphan_rejections  // resize(index) function pointer
  },
  {
    "orphan_forfeits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationForfeit>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::NegotiationState, orphan_forfeits),  // bytes offset in struct
    nullptr,  // default value
    size_function__NegotiationState__orphan_forfeits,  // size() function pointer
    get_const_function__NegotiationState__orphan_forfeits,  // get_const(index) function pointer
    get_function__NegotiationState__orphan_forfeits,  // get(index) function pointer
    fetch_function__NegotiationState__orphan_forfeits,  // fetch(index, &value) function pointer
    assign_function__NegotiationState__orphan_forfeits,  // assign(index, value) function pointer
    resize_function__NegotiationState__orphan_forfeits  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NegotiationState_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "NegotiationState",  // message name
  5,  // number of fields
  sizeof(rmf_traffic_msgs::msg::NegotiationState),
  NegotiationState_message_member_array,  // message members
  NegotiationState_init_function,  // function to initialize message memory (memory has to be allocated)
  NegotiationState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NegotiationState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NegotiationState_message_members,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::NegotiationState>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::NegotiationState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, NegotiationState)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::NegotiationState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
