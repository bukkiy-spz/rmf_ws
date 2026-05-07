// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:msg/GraphEdge.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EDGE_TYPE_BIDIRECTIONAL'.
enum
{
  rmf_building_map_msgs__msg__GraphEdge__EDGE_TYPE_BIDIRECTIONAL = 0
};

/// Constant 'EDGE_TYPE_UNIDIRECTIONAL'.
enum
{
  rmf_building_map_msgs__msg__GraphEdge__EDGE_TYPE_UNIDIRECTIONAL = 1
};

// Include directives for member types
// Member 'params'
#include "rmf_building_map_msgs/msg/detail/param__struct.h"

/// Struct defined in msg/GraphEdge in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__msg__GraphEdge
{
  uint32_t v1_idx;
  uint32_t v2_idx;
  rmf_building_map_msgs__msg__Param__Sequence params;
  /// when edge_type is UNIDIRECTIONAL, it means v1 -> v2
  /// when edge_type is BIDIRECTIONAL, it means v1 <-> v2
  uint8_t edge_type;
} rmf_building_map_msgs__msg__GraphEdge;

// Struct for a sequence of rmf_building_map_msgs__msg__GraphEdge.
typedef struct rmf_building_map_msgs__msg__GraphEdge__Sequence
{
  rmf_building_map_msgs__msg__GraphEdge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__msg__GraphEdge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__STRUCT_H_
