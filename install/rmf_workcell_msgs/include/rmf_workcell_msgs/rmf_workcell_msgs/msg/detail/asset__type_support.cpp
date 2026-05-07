// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_workcell_msgs:msg/Asset.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_workcell_msgs/msg/detail/asset__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_workcell_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Asset_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_workcell_msgs::msg::Asset(_init);
}

void Asset_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_workcell_msgs::msg::Asset *>(message_memory);
  typed_message->~Asset();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Asset_message_member_array[2] = {
  {
    "guid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::Asset, guid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::Asset, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Asset_message_members = {
  "rmf_workcell_msgs::msg",  // message namespace
  "Asset",  // message name
  2,  // number of fields
  sizeof(rmf_workcell_msgs::msg::Asset),
  Asset_message_member_array,  // message members
  Asset_init_function,  // function to initialize message memory (memory has to be allocated)
  Asset_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Asset_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Asset_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_workcell_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_workcell_msgs::msg::Asset>()
{
  return &::rmf_workcell_msgs::msg::rosidl_typesupport_introspection_cpp::Asset_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_workcell_msgs, msg, Asset)() {
  return &::rmf_workcell_msgs::msg::rosidl_typesupport_introspection_cpp::Asset_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
