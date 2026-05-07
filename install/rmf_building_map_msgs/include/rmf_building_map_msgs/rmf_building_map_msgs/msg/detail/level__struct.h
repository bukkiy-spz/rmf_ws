// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__STRUCT_H_

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
// Member 'images'
#include "rmf_building_map_msgs/msg/detail/affine_image__struct.h"
// Member 'places'
#include "rmf_building_map_msgs/msg/detail/place__struct.h"
// Member 'doors'
#include "rmf_building_map_msgs/msg/detail/door__struct.h"
// Member 'nav_graphs'
// Member 'wall_graph'
#include "rmf_building_map_msgs/msg/detail/graph__struct.h"

/// Struct defined in msg/Level in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__msg__Level
{
  rosidl_runtime_c__String name;
  float elevation;
  rmf_building_map_msgs__msg__AffineImage__Sequence images;
  rmf_building_map_msgs__msg__Place__Sequence places;
  rmf_building_map_msgs__msg__Door__Sequence doors;
  rmf_building_map_msgs__msg__Graph__Sequence nav_graphs;
  rmf_building_map_msgs__msg__Graph wall_graph;
} rmf_building_map_msgs__msg__Level;

// Struct for a sequence of rmf_building_map_msgs__msg__Level.
typedef struct rmf_building_map_msgs__msg__Level__Sequence
{
  rmf_building_map_msgs__msg__Level * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__msg__Level__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__STRUCT_H_
