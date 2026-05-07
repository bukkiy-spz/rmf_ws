// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:msg/BuildingMap.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__STRUCT_H_

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
// Member 'levels'
#include "rmf_building_map_msgs/msg/detail/level__struct.h"
// Member 'lifts'
#include "rmf_building_map_msgs/msg/detail/lift__struct.h"

/// Struct defined in msg/BuildingMap in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__msg__BuildingMap
{
  rosidl_runtime_c__String name;
  rmf_building_map_msgs__msg__Level__Sequence levels;
  rmf_building_map_msgs__msg__Lift__Sequence lifts;
} rmf_building_map_msgs__msg__BuildingMap;

// Struct for a sequence of rmf_building_map_msgs__msg__BuildingMap.
typedef struct rmf_building_map_msgs__msg__BuildingMap__Sequence
{
  rmf_building_map_msgs__msg__BuildingMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__msg__BuildingMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__STRUCT_H_
