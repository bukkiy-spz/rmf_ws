// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/SpeedLimitRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__STRUCT_H_

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
// Member 'speed_limits'
#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__struct.h"
// Member 'remove_limits'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SpeedLimitRequest in the package rmf_fleet_msgs.
/**
  * The name of the fleet
 */
typedef struct rmf_fleet_msgs__msg__SpeedLimitRequest
{
  rosidl_runtime_c__String fleet_name;
  /// The lanes to impose speed limits upon.
  rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence speed_limits;
  /// The indices of lanes to remove speed limits
  rosidl_runtime_c__uint64__Sequence remove_limits;
} rmf_fleet_msgs__msg__SpeedLimitRequest;

// Struct for a sequence of rmf_fleet_msgs__msg__SpeedLimitRequest.
typedef struct rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence
{
  rmf_fleet_msgs__msg__SpeedLimitRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__STRUCT_H_
