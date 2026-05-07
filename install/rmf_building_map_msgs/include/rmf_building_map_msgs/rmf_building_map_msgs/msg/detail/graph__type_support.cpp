// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_building_map_msgs/msg/detail/graph__struct.hpp"
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

void Graph_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_building_map_msgs::msg::Graph(_init);
}

void Graph_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_building_map_msgs::msg::Graph *>(message_memory);
  typed_message->~Graph();
}

size_t size_function__Graph__vertices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::GraphNode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Graph__vertices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::GraphNode> *>(untyped_member);
  return &member[index];
}

void * get_function__Graph__vertices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_building_map_msgs::msg::GraphNode> *>(untyped_member);
  return &member[index];
}

void fetch_function__Graph__vertices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_building_map_msgs::msg::GraphNode *>(
    get_const_function__Graph__vertices(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_building_map_msgs::msg::GraphNode *>(untyped_value);
  value = item;
}

void assign_function__Graph__vertices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_building_map_msgs::msg::GraphNode *>(
    get_function__Graph__vertices(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_building_map_msgs::msg::GraphNode *>(untyped_value);
  item = value;
}

void resize_function__Graph__vertices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_building_map_msgs::msg::GraphNode> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Graph__edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::GraphEdge> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Graph__edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::GraphEdge> *>(untyped_member);
  return &member[index];
}

void * get_function__Graph__edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_building_map_msgs::msg::GraphEdge> *>(untyped_member);
  return &member[index];
}

void fetch_function__Graph__edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_building_map_msgs::msg::GraphEdge *>(
    get_const_function__Graph__edges(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_building_map_msgs::msg::GraphEdge *>(untyped_value);
  value = item;
}

void assign_function__Graph__edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_building_map_msgs::msg::GraphEdge *>(
    get_function__Graph__edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_building_map_msgs::msg::GraphEdge *>(untyped_value);
  item = value;
}

void resize_function__Graph__edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_building_map_msgs::msg::GraphEdge> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Graph__params(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Param> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Graph__params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Param> *>(untyped_member);
  return &member[index];
}

void * get_function__Graph__params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Param> *>(untyped_member);
  return &member[index];
}

void fetch_function__Graph__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_building_map_msgs::msg::Param *>(
    get_const_function__Graph__params(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_building_map_msgs::msg::Param *>(untyped_value);
  value = item;
}

void assign_function__Graph__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_building_map_msgs::msg::Param *>(
    get_function__Graph__params(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_building_map_msgs::msg::Param *>(untyped_value);
  item = value;
}

void resize_function__Graph__params(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Param> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Graph_message_member_array[4] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Graph, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vertices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_building_map_msgs::msg::GraphNode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Graph, vertices),  // bytes offset in struct
    nullptr,  // default value
    size_function__Graph__vertices,  // size() function pointer
    get_const_function__Graph__vertices,  // get_const(index) function pointer
    get_function__Graph__vertices,  // get(index) function pointer
    fetch_function__Graph__vertices,  // fetch(index, &value) function pointer
    assign_function__Graph__vertices,  // assign(index, value) function pointer
    resize_function__Graph__vertices  // resize(index) function pointer
  },
  {
    "edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_building_map_msgs::msg::GraphEdge>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Graph, edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__Graph__edges,  // size() function pointer
    get_const_function__Graph__edges,  // get_const(index) function pointer
    get_function__Graph__edges,  // get(index) function pointer
    fetch_function__Graph__edges,  // fetch(index, &value) function pointer
    assign_function__Graph__edges,  // assign(index, value) function pointer
    resize_function__Graph__edges  // resize(index) function pointer
  },
  {
    "params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_building_map_msgs::msg::Param>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Graph, params),  // bytes offset in struct
    nullptr,  // default value
    size_function__Graph__params,  // size() function pointer
    get_const_function__Graph__params,  // get_const(index) function pointer
    get_function__Graph__params,  // get(index) function pointer
    fetch_function__Graph__params,  // fetch(index, &value) function pointer
    assign_function__Graph__params,  // assign(index, value) function pointer
    resize_function__Graph__params  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Graph_message_members = {
  "rmf_building_map_msgs::msg",  // message namespace
  "Graph",  // message name
  4,  // number of fields
  sizeof(rmf_building_map_msgs::msg::Graph),
  Graph_message_member_array,  // message members
  Graph_init_function,  // function to initialize message memory (memory has to be allocated)
  Graph_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Graph_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Graph_message_members,
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
get_message_type_support_handle<rmf_building_map_msgs::msg::Graph>()
{
  return &::rmf_building_map_msgs::msg::rosidl_typesupport_introspection_cpp::Graph_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_building_map_msgs, msg, Graph)() {
  return &::rmf_building_map_msgs::msg::rosidl_typesupport_introspection_cpp::Graph_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
