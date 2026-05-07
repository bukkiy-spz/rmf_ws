// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/LaneRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LANE_REQUEST__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__LANE_REQUEST__STRUCT_H_

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
// Member 'open_lanes'
// Member 'close_lanes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LaneRequest in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__LaneRequest
{
  rosidl_runtime_c__String fleet_name;
  rosidl_runtime_c__uint64__Sequence open_lanes;
  rosidl_runtime_c__uint64__Sequence close_lanes;
} rmf_fleet_msgs__msg__LaneRequest;

// Struct for a sequence of rmf_fleet_msgs__msg__LaneRequest.
typedef struct rmf_fleet_msgs__msg__LaneRequest__Sequence
{
  rmf_fleet_msgs__msg__LaneRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__LaneRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LANE_REQUEST__STRUCT_H_
