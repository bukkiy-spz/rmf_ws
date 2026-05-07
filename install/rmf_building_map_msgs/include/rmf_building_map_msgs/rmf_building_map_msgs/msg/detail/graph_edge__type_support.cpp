// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_building_map_msgs:msg/GraphEdge.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_building_map_msgs/msg/detail/graph_edge__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_building_map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GraphEdge_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_building_map_msgs::msg::GraphEdge(_init);
}

void GraphEdge_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_building_map_msgs::msg::GraphEdge *>(message_memory);
  typed_message->~GraphEdge();
}

size_t size_function__GraphEdge__params(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Param> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraphEdge__params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Param> *>(untyped_member);
  return &member[index];
}

void * get_function__GraphEdge__params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Param> *>(untyped_member);
  return &member[index];
}

void fetch_function__GraphEdge__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_building_map_msgs::msg::Param *>(
    get_const_function__GraphEdge__params(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_building_map_msgs::msg::Param *>(untyped_value);
  value = item;
}

void assign_function__GraphEdge__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_building_map_msgs::msg::Param *>(
    get_function__GraphEdge__params(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_building_map_msgs::msg::Param *>(untyped_value);
  item = value;
}

void resize_function__GraphEdge__params(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Param> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraphEdge_message_member_array[4] = {
  {
    "v1_idx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::GraphEdge, v1_idx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "v2_idx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::GraphEdge, v2_idx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_building_map_msgs::msg::Param>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::GraphEdge, params),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraphEdge__params,  // size() function pointer
    get_const_function__GraphEdge__params,  // get_const(index) function pointer
    get_function__GraphEdge__params,  // get(index) function pointer
    fetch_function__GraphEdge__params,  // fetch(index, &value) function pointer
    assign_function__GraphEdge__params,  // assign(index, value) function pointer
    resize_function__GraphEdge__params  // resize(index) function pointer
  },
  {
    "edge_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::GraphEdge, edge_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraphEdge_message_members = {
  "rmf_building_map_msgs::msg",  // message namespace
  "GraphEdge",  // message name
  4,  // number of fields
  sizeof(rmf_building_map_msgs::msg::GraphEdge),
  GraphEdge_message_member_array,  // message members
  GraphEdge_init_function,  // function to initialize message memory (memory has to be allocated)
  GraphEdge_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GraphEdge_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraphEdge_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_building_map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_building_map_msgs::msg::GraphEdge>()
{
  return &::rmf_building_map_msgs::msg::rosidl_typesupport_introspection_cpp::GraphEdge_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_building_map_msgs, msg, GraphEdge)() {
  return &::rmf_building_map_msgs::msg::rosidl_typesupport_introspection_cpp::GraphEdge_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
