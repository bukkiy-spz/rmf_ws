// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/BlockadeCheckpoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__struct.hpp"
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

void BlockadeCheckpoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::BlockadeCheckpoint(_init);
}

void BlockadeCheckpoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::BlockadeCheckpoint *>(message_memory);
  typed_message->~BlockadeCheckpoint();
}

size_t size_function__BlockadeCheckpoint__position(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__BlockadeCheckpoint__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__BlockadeCheckpoint__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__BlockadeCheckpoint__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BlockadeCheckpoint__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BlockadeCheckpoint__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BlockadeCheckpoint__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BlockadeCheckpoint_message_member_array[3] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::BlockadeCheckpoint, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__BlockadeCheckpoint__position,  // size() function pointer
    get_const_function__BlockadeCheckpoint__position,  // get_const(index) function pointer
    get_function__BlockadeCheckpoint__position,  // get(index) function pointer
    fetch_function__BlockadeCheckpoint__position,  // fetch(index, &value) function pointer
    assign_function__BlockadeCheckpoint__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::BlockadeCheckpoint, map_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_hold",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::BlockadeCheckpoint, can_hold),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BlockadeCheckpoint_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "BlockadeCheckpoint",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs::msg::BlockadeCheckpoint),
  BlockadeCheckpoint_message_member_array,  // message members
  BlockadeCheckpoint_init_function,  // function to initialize message memory (memory has to be allocated)
  BlockadeCheckpoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BlockadeCheckpoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BlockadeCheckpoint_message_members,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::BlockadeCheckpoint>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::BlockadeCheckpoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, BlockadeCheckpoint)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::BlockadeCheckpoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
