// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:msg/GraphNode.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_NODE__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'params'
#include "rmf_building_map_msgs/msg/detail/param__struct.h"

/// Struct defined in msg/GraphNode in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__msg__GraphNode
{
  float x;
  float y;
  rosidl_runtime_c__String name;
  rmf_building_map_msgs__msg__Param__Sequence params;
} rmf_building_map_msgs__msg__GraphNode;

// Struct for a sequence of rmf_building_map_msgs__msg__GraphNode.
typedef struct rmf_building_map_msgs__msg__GraphNode__Sequence
{
  rmf_building_map_msgs__msg__GraphNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__msg__GraphNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_NODE__STRUCT_H_
