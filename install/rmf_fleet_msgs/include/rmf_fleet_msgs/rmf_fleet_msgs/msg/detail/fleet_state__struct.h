// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/FleetState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__FLEET_STATE__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__FLEET_STATE__STRUCT_H_

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
// Member 'robots'
#include "rmf_fleet_msgs/msg/detail/robot_state__struct.h"

/// Struct defined in msg/FleetState in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__FleetState
{
  rosidl_runtime_c__String name;
  rmf_fleet_msgs__msg__RobotState__Sequence robots;
} rmf_fleet_msgs__msg__FleetState;

// Struct for a sequence of rmf_fleet_msgs__msg__FleetState.
typedef struct rmf_fleet_msgs__msg__FleetState__Sequence
{
  rmf_fleet_msgs__msg__FleetState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__FleetState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__FLEET_STATE__STRUCT_H_
