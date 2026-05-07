// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_workcell_msgs/msg/detail/workcell_configuration__struct.hpp"
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

void WorkcellConfiguration_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_workcell_msgs::msg::WorkcellConfiguration(_init);
}

void WorkcellConfiguration_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_workcell_msgs::msg::WorkcellConfiguration *>(message_memory);
  typed_message->~WorkcellConfiguration();
}

size_t size_function__WorkcellConfiguration__assets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_workcell_msgs::msg::Asset> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WorkcellConfiguration__assets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_workcell_msgs::msg::Asset> *>(untyped_member);
  return &member[index];
}

void * get_function__WorkcellConfiguration__assets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_workcell_msgs::msg::Asset> *>(untyped_member);
  return &member[index];
}

void fetch_function__WorkcellConfiguration__assets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_workcell_msgs::msg::Asset *>(
    get_const_function__WorkcellConfiguration__assets(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_workcell_msgs::msg::Asset *>(untyped_value);
  value = item;
}

void assign_function__WorkcellConfiguration__assets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_workcell_msgs::msg::Asset *>(
    get_function__WorkcellConfiguration__assets(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_workcell_msgs::msg::Asset *>(untyped_value);
  item = value;
}

void resize_function__WorkcellConfiguration__assets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_workcell_msgs::msg::Asset> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WorkcellConfiguration__traits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_workcell_msgs::msg::Trait> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WorkcellConfiguration__traits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_workcell_msgs::msg::Trait> *>(untyped_member);
  return &member[index];
}

void * get_function__WorkcellConfiguration__traits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_workcell_msgs::msg::Trait> *>(untyped_member);
  return &member[index];
}

void fetch_function__WorkcellConfiguration__traits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_workcell_msgs::msg::Trait *>(
    get_const_function__WorkcellConfiguration__traits(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_workcell_msgs::msg::Trait *>(untyped_value);
  value = item;
}

void assign_function__WorkcellConfiguration__traits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_workcell_msgs::msg::Trait *>(
    get_function__WorkcellConfiguration__traits(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_workcell_msgs::msg::Trait *>(untyped_value);
  item = value;
}

void resize_function__WorkcellConfiguration__traits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_workcell_msgs::msg::Trait> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WorkcellConfiguration_message_member_array[5] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::WorkcellConfiguration, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "guid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::WorkcellConfiguration, guid),  // bytes offset in struct
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
    offsetof(rmf_workcell_msgs::msg::WorkcellConfiguration, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "assets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_workcell_msgs::msg::Asset>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::WorkcellConfiguration, assets),  // bytes offset in struct
    nullptr,  // default value
    size_function__WorkcellConfiguration__assets,  // size() function pointer
    get_const_function__WorkcellConfiguration__assets,  // get_const(index) function pointer
    get_function__WorkcellConfiguration__assets,  // get(index) function pointer
    fetch_function__WorkcellConfiguration__assets,  // fetch(index, &value) function pointer
    assign_function__WorkcellConfiguration__assets,  // assign(index, value) function pointer
    resize_function__WorkcellConfiguration__assets  // resize(index) function pointer
  },
  {
    "traits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_workcell_msgs::msg::Trait>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs::msg::WorkcellConfiguration, traits),  // bytes offset in struct
    nullptr,  // default value
    size_function__WorkcellConfiguration__traits,  // size() function pointer
    get_const_function__WorkcellConfiguration__traits,  // get_const(index) function pointer
    get_function__WorkcellConfiguration__traits,  // get(index) function pointer
    fetch_function__WorkcellConfiguration__traits,  // fetch(index, &value) function pointer
    assign_function__WorkcellConfiguration__traits,  // assign(index, value) function pointer
    resize_function__WorkcellConfiguration__traits  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WorkcellConfiguration_message_members = {
  "rmf_workcell_msgs::msg",  // message namespace
  "WorkcellConfiguration",  // message name
  5,  // number of fields
  sizeof(rmf_workcell_msgs::msg::WorkcellConfiguration),
  WorkcellConfiguration_message_member_array,  // message members
  WorkcellConfiguration_init_function,  // function to initialize message memory (memory has to be allocated)
  WorkcellConfiguration_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WorkcellConfiguration_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WorkcellConfiguration_message_members,
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
get_message_type_support_handle<rmf_workcell_msgs::msg::WorkcellConfiguration>()
{
  return &::rmf_workcell_msgs::msg::rosidl_typesupport_introspection_cpp::WorkcellConfiguration_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_workcell_msgs, msg, WorkcellConfiguration)() {
  return &::rmf_workcell_msgs::msg::rosidl_typesupport_introspection_cpp::WorkcellConfiguration_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
