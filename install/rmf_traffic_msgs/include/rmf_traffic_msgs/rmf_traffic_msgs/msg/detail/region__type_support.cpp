// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/Region.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/region__struct.hpp"
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

void Region_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::Region(_init);
}

void Region_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::Region *>(message_memory);
  typed_message->~Region();
}

size_t size_function__Region__spaces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::Space> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Region__spaces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::Space> *>(untyped_member);
  return &member[index];
}

void * get_function__Region__spaces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::Space> *>(untyped_member);
  return &member[index];
}

void fetch_function__Region__spaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::Space *>(
    get_const_function__Region__spaces(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::Space *>(untyped_value);
  value = item;
}

void assign_function__Region__spaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::Space *>(
    get_function__Region__spaces(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::Space *>(untyped_value);
  item = value;
}

void resize_function__Region__spaces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::Space> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Region_message_member_array[3] = {
  {
    "map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::Region, map),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "spaces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::Space>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::Region, spaces),  // bytes offset in struct
    nullptr,  // default value
    size_function__Region__spaces,  // size() function pointer
    get_const_function__Region__spaces,  // get_const(index) function pointer
    get_function__Region__spaces,  // get(index) function pointer
    fetch_function__Region__spaces,  // fetch(index, &value) function pointer
    assign_function__Region__spaces,  // assign(index, value) function pointer
    resize_function__Region__spaces  // resize(index) function pointer
  },
  {
    "timespan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::Timespan>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::Region, timespan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Region_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "Region",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs::msg::Region),
  Region_message_member_array,  // message members
  Region_init_function,  // function to initialize message memory (memory has to be allocated)
  Region_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Region_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Region_message_members,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::Region>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::Region_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, Region)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::Region_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
