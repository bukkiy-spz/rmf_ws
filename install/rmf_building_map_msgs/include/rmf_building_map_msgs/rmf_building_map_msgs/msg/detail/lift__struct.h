// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:msg/Lift.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__STRUCT_H_

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
// Member 'levels'
#include "rosidl_runtime_c/string.h"
// Member 'doors'
#include "rmf_building_map_msgs/msg/detail/door__struct.h"
// Member 'wall_graph'
#include "rmf_building_map_msgs/msg/detail/graph__struct.h"

/// Struct defined in msg/Lift in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__msg__Lift
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String__Sequence levels;
  rmf_building_map_msgs__msg__Door__Sequence doors;
  rmf_building_map_msgs__msg__Graph wall_graph;
  /// (ref_x, ref_y, ref_yaw) is a "reference orientation" of the lift cabin
  /// which can be used to align floors.
  float ref_x;
  float ref_y;
  float ref_yaw;
  /// width and depth of the cabin
  float width;
  float depth;
} rmf_building_map_msgs__msg__Lift;

// Struct for a sequence of rmf_building_map_msgs__msg__Lift.
typedef struct rmf_building_map_msgs__msg__Lift__Sequence
{
  rmf_building_map_msgs__msg__Lift * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__msg__Lift__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__STRUCT_H_
