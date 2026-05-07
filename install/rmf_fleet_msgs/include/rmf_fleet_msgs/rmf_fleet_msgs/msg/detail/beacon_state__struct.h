// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/BeaconState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'category'
// Member 'level'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BeaconState in the package rmf_fleet_msgs.
/**
  * This message defines data from a robot beacon
 */
typedef struct rmf_fleet_msgs__msg__BeaconState
{
  rosidl_runtime_c__String id;
  bool online;
  rosidl_runtime_c__String category;
  bool activated;
  rosidl_runtime_c__String level;
} rmf_fleet_msgs__msg__BeaconState;

// Struct for a sequence of rmf_fleet_msgs__msg__BeaconState.
typedef struct rmf_fleet_msgs__msg__BeaconState__Sequence
{
  rmf_fleet_msgs__msg__BeaconState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__BeaconState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__STRUCT_H_
