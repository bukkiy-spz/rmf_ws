// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_building_map_msgs/msg/detail/graph__rosidl_typesupport_introspection_c.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_building_map_msgs/msg/detail/graph__functions.h"
#include "rmf_building_map_msgs/msg/detail/graph__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `vertices`
#include "rmf_building_map_msgs/msg/graph_node.h"
// Member `vertices`
#include "rmf_building_map_msgs/msg/detail/graph_node__rosidl_typesupport_introspection_c.h"
// Member `edges`
#include "rmf_building_map_msgs/msg/graph_edge.h"
// Member `edges`
#include "rmf_building_map_msgs/msg/detail/graph_edge__rosidl_typesupport_introspection_c.h"
// Member `params`
#include "rmf_building_map_msgs/msg/param.h"
// Member `params`
#include "rmf_building_map_msgs/msg/detail/param__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__msg__Graph__init(message_memory);
}

void rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_fini_function(void * message_memory)
{
  rmf_building_map_msgs__msg__Graph__fini(message_memory);
}

size_t rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__vertices(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__GraphNode__Sequence * member =
    (const rmf_building_map_msgs__msg__GraphNode__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__vertices(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__GraphNode__Sequence * member =
    (const rmf_building_map_msgs__msg__GraphNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__vertices(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__GraphNode__Sequence * member =
    (rmf_building_map_msgs__msg__GraphNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__vertices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_building_map_msgs__msg__GraphNode * item =
    ((const rmf_building_map_msgs__msg__GraphNode *)
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__vertices(untyped_member, index));
  rmf_building_map_msgs__msg__GraphNode * value =
    (rmf_building_map_msgs__msg__GraphNode *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__vertices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_building_map_msgs__msg__GraphNode * item =
    ((rmf_building_map_msgs__msg__GraphNode *)
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__vertices(untyped_member, index));
  const rmf_building_map_msgs__msg__GraphNode * value =
    (const rmf_building_map_msgs__msg__GraphNode *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__vertices(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__GraphNode__Sequence * member =
    (rmf_building_map_msgs__msg__GraphNode__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__GraphNode__Sequence__fini(member);
  return rmf_building_map_msgs__msg__GraphNode__Sequence__init(member, size);
}

size_t rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__edges(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__GraphEdge__Sequence * member =
    (const rmf_building_map_msgs__msg__GraphEdge__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__edges(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__GraphEdge__Sequence * member =
    (const rmf_building_map_msgs__msg__GraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__edges(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__GraphEdge__Sequence * member =
    (rmf_building_map_msgs__msg__GraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_building_map_msgs__msg__GraphEdge * item =
    ((const rmf_building_map_msgs__msg__GraphEdge *)
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__edges(untyped_member, index));
  rmf_building_map_msgs__msg__GraphEdge * value =
    (rmf_building_map_msgs__msg__GraphEdge *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_building_map_msgs__msg__GraphEdge * item =
    ((rmf_building_map_msgs__msg__GraphEdge *)
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__edges(untyped_member, index));
  const rmf_building_map_msgs__msg__GraphEdge * value =
    (const rmf_building_map_msgs__msg__GraphEdge *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__edges(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__GraphEdge__Sequence * member =
    (rmf_building_map_msgs__msg__GraphEdge__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__GraphEdge__Sequence__fini(member);
  return rmf_building_map_msgs__msg__GraphEdge__Sequence__init(member, size);
}

size_t rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__params(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Param__Sequence * member =
    (const rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__params(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Param__Sequence * member =
    (const rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__params(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Param__Sequence * member =
    (rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_building_map_msgs__msg__Param * item =
    ((const rmf_building_map_msgs__msg__Param *)
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__params(untyped_member, index));
  rmf_building_map_msgs__msg__Param * value =
    (rmf_building_map_msgs__msg__Param *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_building_map_msgs__msg__Param * item =
    ((rmf_building_map_msgs__msg__Param *)
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__params(untyped_member, index));
  const rmf_building_map_msgs__msg__Param * value =
    (const rmf_building_map_msgs__msg__Param *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__params(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Param__Sequence * member =
    (rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Param__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Param__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Graph, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Graph, vertices),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__vertices,  // size() function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__vertices,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__vertices,  // get(index) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__vertices,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__vertices,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__vertices  // resize(index) function pointer
  },
  {
    "edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Graph, edges),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__edges,  // size() function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__edges,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__edges,  // get(index) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__edges,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__edges,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__edges  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Graph, params),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__size_function__Graph__params,  // size() function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_const_function__Graph__params,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__get_function__Graph__params,  // get(index) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__fetch_function__Graph__params,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__assign_function__Graph__params,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__resize_function__Graph__params  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_members = {
  "rmf_building_map_msgs__msg",  // message namespace
  "Graph",  // message name
  4,  // number of fields
  sizeof(rmf_building_map_msgs__msg__Graph),
  rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array,  // message members
  rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle = {
  0,
  &rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Graph)() {
  rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, GraphNode)();
  rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, GraphEdge)();
  rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Param)();
  if (!rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle.typesupport_identifier) {
    rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_building_map_msgs__msg__Graph__rosidl_typesupport_introspection_c__Graph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
