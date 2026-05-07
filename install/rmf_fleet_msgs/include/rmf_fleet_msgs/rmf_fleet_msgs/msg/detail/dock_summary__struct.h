// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/DockSummary.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'docks'
#include "rmf_fleet_msgs/msg/detail/dock__struct.h"

/// Struct defined in msg/DockSummary in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__DockSummary
{
  rmf_fleet_msgs__msg__Dock__Sequence docks;
} rmf_fleet_msgs__msg__DockSummary;

// Struct for a sequence of rmf_fleet_msgs__msg__DockSummary.
typedef struct rmf_fleet_msgs__msg__DockSummary__Sequence
{
  rmf_fleet_msgs__msg__DockSummary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__DockSummary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__STRUCT_H_
