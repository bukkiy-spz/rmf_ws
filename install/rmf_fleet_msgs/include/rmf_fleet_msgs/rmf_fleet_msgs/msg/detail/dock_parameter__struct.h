// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/DockParameter.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'finish'
#include "rosidl_runtime_c/string.h"
// Member 'path'
#include "rmf_fleet_msgs/msg/detail/location__struct.h"

/// Struct defined in msg/DockParameter in the package rmf_fleet_msgs.
/**
  * The name of the waypoint where the docking begins
 */
typedef struct rmf_fleet_msgs__msg__DockParameter
{
  rosidl_runtime_c__String start;
  /// The name of the waypoint where the docking ends
  rosidl_runtime_c__String finish;
  /// The points in the docking path
  rmf_fleet_msgs__msg__Location__Sequence path;
} rmf_fleet_msgs__msg__DockParameter;

// Struct for a sequence of rmf_fleet_msgs__msg__DockParameter.
typedef struct rmf_fleet_msgs__msg__DockParameter__Sequence
{
  rmf_fleet_msgs__msg__DockParameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__DockParameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__STRUCT_H_
