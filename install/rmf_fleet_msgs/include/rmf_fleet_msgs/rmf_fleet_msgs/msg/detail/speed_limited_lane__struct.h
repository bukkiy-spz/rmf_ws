// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/SpeedLimitedLane.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SpeedLimitedLane in the package rmf_fleet_msgs.
/**
  * The index of the lane with a speed limit
 */
typedef struct rmf_fleet_msgs__msg__SpeedLimitedLane
{
  uint64_t lane_index;
  /// The imposed speed limit for the lane
  double speed_limit;
} rmf_fleet_msgs__msg__SpeedLimitedLane;

// Struct for a sequence of rmf_fleet_msgs__msg__SpeedLimitedLane.
typedef struct rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence
{
  rmf_fleet_msgs__msg__SpeedLimitedLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__STRUCT_H_
