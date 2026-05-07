// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_building_map_msgs/msg/detail/level__struct.hpp"
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

void Level_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_building_map_msgs::msg::Level(_init);
}

void Level_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_building_map_msgs::msg::Level *>(message_memory);
  typed_message->~Level();
}

size_t size_function__Level__images(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::AffineImage> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Level__images(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::AffineImage> *>(untyped_member);
  return &member[index];
}

void * get_function__Level__images(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_building_map_msgs::msg::AffineImage> *>(untyped_member);
  return &member[index];
}

void fetch_function__Level__images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_building_map_msgs::msg::AffineImage *>(
    get_const_function__Level__images(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_building_map_msgs::msg::AffineImage *>(untyped_value);
  value = item;
}

void assign_function__Level__images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_building_map_msgs::msg::AffineImage *>(
    get_function__Level__images(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_building_map_msgs::msg::AffineImage *>(untyped_value);
  item = value;
}

void resize_function__Level__images(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_building_map_msgs::msg::AffineImage> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Level__places(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Place> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Level__places(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Place> *>(untyped_member);
  return &member[index];
}

void * get_function__Level__places(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Place> *>(untyped_member);
  return &member[index];
}

void fetch_function__Level__places(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_building_map_msgs::msg::Place *>(
    get_const_function__Level__places(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_building_map_msgs::msg::Place *>(untyped_value);
  value = item;
}

void assign_function__Level__places(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_building_map_msgs::msg::Place *>(
    get_function__Level__places(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_building_map_msgs::msg::Place *>(untyped_value);
  item = value;
}

void resize_function__Level__places(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Place> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Level__doors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Door> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Level__doors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Door> *>(untyped_member);
  return &member[index];
}

void * get_function__Level__doors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Door> *>(untyped_member);
  return &member[index];
}

void fetch_function__Level__doors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_building_map_msgs::msg::Door *>(
    get_const_function__Level__doors(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_building_map_msgs::msg::Door *>(untyped_value);
  value = item;
}

void assign_function__Level__doors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_building_map_msgs::msg::Door *>(
    get_function__Level__doors(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_building_map_msgs::msg::Door *>(untyped_value);
  item = value;
}

void resize_function__Level__doors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Door> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Level__nav_graphs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Graph> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Level__nav_graphs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_building_map_msgs::msg::Graph> *>(untyped_member);
  return &member[index];
}

void * get_function__Level__nav_graphs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Graph> *>(untyped_member);
  return &member[index];
}

void fetch_function__Level__nav_graphs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_building_map_msgs::msg::Graph *>(
    get_const_function__Level__nav_graphs(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_building_map_msgs::msg::Graph *>(untyped_value);
  value = item;
}

void assign_function__Level__nav_graphs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_building_map_msgs::msg::Graph *>(
    get_function__Level__nav_graphs(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_building_map_msgs::msg::Graph *>(untyped_value);
  item = value;
}

void resize_function__Level__nav_graphs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_building_map_msgs::msg::Graph> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Level_message_member_array[7] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Level, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elevation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Level, elevation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "images",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_building_map_msgs::msg::AffineImage>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Level, images),  // bytes offset in struct
    nullptr,  // default value
    size_function__Level__images,  // size() function pointer
    get_const_function__Level__images,  // get_const(index) function pointer
    get_function__Level__images,  // get(index) function pointer
    fetch_function__Level__images,  // fetch(index, &value) function pointer
    assign_function__Level__images,  // assign(index, value) function pointer
    resize_function__Level__images  // resize(index) function pointer
  },
  {
    "places",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_building_map_msgs::msg::Place>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Level, places),  // bytes offset in struct
    nullptr,  // default value
    size_function__Level__places,  // size() function pointer
    get_const_function__Level__places,  // get_const(index) function pointer
    get_function__Level__places,  // get(index) function pointer
    fetch_function__Level__places,  // fetch(index, &value) function pointer
    assign_function__Level__places,  // assign(index, value) function pointer
    resize_function__Level__places  // resize(index) function pointer
  },
  {
    "doors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_building_map_msgs::msg::Door>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Level, doors),  // bytes offset in struct
    nullptr,  // default value
    size_function__Level__doors,  // size() function pointer
    get_const_function__Level__doors,  // get_const(index) function pointer
    get_function__Level__doors,  // get(index) function pointer
    fetch_function__Level__doors,  // fetch(index, &value) function pointer
    assign_function__Level__doors,  // assign(index, value) function pointer
    resize_function__Level__doors  // resize(index) function pointer
  },
  {
    "nav_graphs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_building_map_msgs::msg::Graph>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Level, nav_graphs),  // bytes offset in struct
    nullptr,  // default value
    size_function__Level__nav_graphs,  // size() function pointer
    get_const_function__Level__nav_graphs,  // get_const(index) function pointer
    get_function__Level__nav_graphs,  // get(index) function pointer
    fetch_function__Level__nav_graphs,  // fetch(index, &value) function pointer
    assign_function__Level__nav_graphs,  // assign(index, value) function pointer
    resize_function__Level__nav_graphs  // resize(index) function pointer
  },
  {
    "wall_graph",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_building_map_msgs::msg::Graph>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs::msg::Level, wall_graph),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Level_message_members = {
  "rmf_building_map_msgs::msg",  // message namespace
  "Level",  // message name
  7,  // number of fields
  sizeof(rmf_building_map_msgs::msg::Level),
  Level_message_member_array,  // message members
  Level_init_function,  // function to initialize message memory (memory has to be allocated)
  Level_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Level_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Level_message_members,
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
get_message_type_support_handle<rmf_building_map_msgs::msg::Level>()
{
  return &::rmf_building_map_msgs::msg::rosidl_typesupport_introspection_cpp::Level_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_building_map_msgs, msg, Level)() {
  return &::rmf_building_map_msgs::msg::rosidl_typesupport_introspection_cpp::Level_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
