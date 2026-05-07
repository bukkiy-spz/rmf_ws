// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/LaneStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LANE_STATES__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__LANE_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fleet_name'
#include "rosidl_runtime_c/string.h"
// Member 'closed_lanes'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'speed_limits'
#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__struct.h"

/// Struct defined in msg/LaneStates in the package rmf_fleet_msgs.
/**
  * The name of the fleet with closed or speed limited lanes
 */
typedef struct rmf_fleet_msgs__msg__LaneStates
{
  rosidl_runtime_c__String fleet_name;
  /// The indices of the lanes that are currently closed
  rosidl_runtime_c__uint64__Sequence closed_lanes;
  /// Lanes that have speed limits
  rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence speed_limits;
} rmf_fleet_msgs__msg__LaneStates;

// Struct for a sequence of rmf_fleet_msgs__msg__LaneStates.
typedef struct rmf_fleet_msgs__msg__LaneStates__Sequence
{
  rmf_fleet_msgs__msg__LaneStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__LaneStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LANE_STATES__STRUCT_H_
