// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_building_map_msgs:msg/GraphNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_building_map_msgs/msg/detail/graph_node__rosidl_typesupport_introspection_c.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_building_map_msgs/msg/detail/graph_node__functions.h"
#include "rmf_building_map_msgs/msg/detail/graph_node__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `params`
#include "rmf_building_map_msgs/msg/param.h"
// Member `params`
#include "rmf_building_map_msgs/msg/detail/param__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__msg__GraphNode__init(message_memory);
}

void rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_fini_function(void * message_memory)
{
  rmf_building_map_msgs__msg__GraphNode__fini(message_memory);
}

size_t rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__size_function__GraphNode__params(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Param__Sequence * member =
    (const rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__get_const_function__GraphNode__params(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Param__Sequence * member =
    (const rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__get_function__GraphNode__params(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Param__Sequence * member =
    (rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__fetch_function__GraphNode__params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_building_map_msgs__msg__Param * item =
    ((const rmf_building_map_msgs__msg__Param *)
    rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__get_const_function__GraphNode__params(untyped_member, index));
  rmf_building_map_msgs__msg__Param * value =
    (rmf_building_map_msgs__msg__Param *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__assign_function__GraphNode__params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_building_map_msgs__msg__Param * item =
    ((rmf_building_map_msgs__msg__Param *)
    rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__get_function__GraphNode__params(untyped_member, index));
  const rmf_building_map_msgs__msg__Param * value =
    (const rmf_building_map_msgs__msg__Param *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__resize_function__GraphNode__params(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Param__Sequence * member =
    (rmf_building_map_msgs__msg__Param__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Param__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Param__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__GraphNode, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__GraphNode, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__GraphNode, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__GraphNode, params),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__size_function__GraphNode__params,  // size() function pointer
    rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__get_const_function__GraphNode__params,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__get_function__GraphNode__params,  // get(index) function pointer
    rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__fetch_function__GraphNode__params,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__assign_function__GraphNode__params,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__resize_function__GraphNode__params  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_members = {
  "rmf_building_map_msgs__msg",  // message namespace
  "GraphNode",  // message name
  4,  // number of fields
  sizeof(rmf_building_map_msgs__msg__GraphNode),
  rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_member_array,  // message members
  rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle = {
  0,
  &rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, GraphNode)() {
  rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Param)();
  if (!rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle.typesupport_identifier) {
    rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_building_map_msgs__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
