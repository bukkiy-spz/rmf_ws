// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 't'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'level_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Location in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__Location
{
  builtin_interfaces__msg__Time t;
  float x;
  float y;
  float yaw;
  bool obey_approach_speed_limit;
  /// Speed limit of the lane leading to this waypoint in m/s
  float approach_speed_limit;
  rosidl_runtime_c__String level_name;
  uint64_t index;
} rmf_fleet_msgs__msg__Location;

// Struct for a sequence of rmf_fleet_msgs__msg__Location.
typedef struct rmf_fleet_msgs__msg__Location__Sequence
{
  rmf_fleet_msgs__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_
