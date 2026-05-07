// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQueries.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/schedule_queries__struct.hpp"
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

void ScheduleQueries_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::ScheduleQueries(_init);
}

void ScheduleQueries_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::ScheduleQueries *>(message_memory);
  typed_message->~ScheduleQueries();
}

size_t size_function__ScheduleQueries__queries(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::ScheduleQuery> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ScheduleQueries__queries(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::ScheduleQuery> *>(untyped_member);
  return &member[index];
}

void * get_function__ScheduleQueries__queries(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::ScheduleQuery> *>(untyped_member);
  return &member[index];
}

void fetch_function__ScheduleQueries__queries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::ScheduleQuery *>(
    get_const_function__ScheduleQueries__queries(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::ScheduleQuery *>(untyped_value);
  value = item;
}

void assign_function__ScheduleQueries__queries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::ScheduleQuery *>(
    get_function__ScheduleQueries__queries(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::ScheduleQuery *>(untyped_value);
  item = value;
}

void resize_function__ScheduleQueries__queries(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::ScheduleQuery> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ScheduleQueries__query_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ScheduleQueries__query_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ScheduleQueries__query_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ScheduleQueries__query_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__ScheduleQueries__query_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__ScheduleQueries__query_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__ScheduleQueries__query_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__ScheduleQueries__query_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ScheduleQueries_message_member_array[3] = {
  {
    "node_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleIdentity>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleQueries, node_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "queries",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleQuery>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleQueries, queries),  // bytes offset in struct
    nullptr,  // default value
    size_function__ScheduleQueries__queries,  // size() function pointer
    get_const_function__ScheduleQueries__queries,  // get_const(index) function pointer
    get_function__ScheduleQueries__queries,  // get(index) function pointer
    fetch_function__ScheduleQueries__queries,  // fetch(index, &value) function pointer
    assign_function__ScheduleQueries__queries,  // assign(index, value) function pointer
    resize_function__ScheduleQueries__queries  // resize(index) function pointer
  },
  {
    "query_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleQueries, query_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__ScheduleQueries__query_ids,  // size() function pointer
    get_const_function__ScheduleQueries__query_ids,  // get_const(index) function pointer
    get_function__ScheduleQueries__query_ids,  // get(index) function pointer
    fetch_function__ScheduleQueries__query_ids,  // fetch(index, &value) function pointer
    assign_function__ScheduleQueries__query_ids,  // assign(index, value) function pointer
    resize_function__ScheduleQueries__query_ids  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ScheduleQueries_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "ScheduleQueries",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs::msg::ScheduleQueries),
  ScheduleQueries_message_member_array,  // message members
  ScheduleQueries_init_function,  // function to initialize message memory (memory has to be allocated)
  ScheduleQueries_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ScheduleQueries_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ScheduleQueries_message_members,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleQueries>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleQueries_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, ScheduleQueries)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleQueries_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
