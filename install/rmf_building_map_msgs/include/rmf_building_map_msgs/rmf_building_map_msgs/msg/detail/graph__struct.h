// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_

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
// Member 'vertices'
#include "rmf_building_map_msgs/msg/detail/graph_node__struct.h"
// Member 'edges'
#include "rmf_building_map_msgs/msg/detail/graph_edge__struct.h"
// Member 'params'
#include "rmf_building_map_msgs/msg/detail/param__struct.h"

/// Struct defined in msg/Graph in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__msg__Graph
{
  rosidl_runtime_c__String name;
  rmf_building_map_msgs__msg__GraphNode__Sequence vertices;
  rmf_building_map_msgs__msg__GraphEdge__Sequence edges;
  rmf_building_map_msgs__msg__Param__Sequence params;
} rmf_building_map_msgs__msg__Graph;

// Struct for a sequence of rmf_building_map_msgs__msg__Graph.
typedef struct rmf_building_map_msgs__msg__Graph__Sequence
{
  rmf_building_map_msgs__msg__Graph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__msg__Graph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_
