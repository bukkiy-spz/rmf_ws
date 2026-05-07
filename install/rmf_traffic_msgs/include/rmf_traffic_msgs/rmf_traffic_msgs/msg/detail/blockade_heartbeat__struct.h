// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/BlockadeHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'statuses'
#include "rmf_traffic_msgs/msg/detail/blockade_status__struct.h"

/// Struct defined in msg/BlockadeHeartbeat in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__BlockadeHeartbeat
{
  /// An array of the current blockade statuses which describe the most recent
  /// information
  rmf_traffic_msgs__msg__BlockadeStatus__Sequence statuses;
  /// This will be true when the blockade moderator has identified a gridlock that
  /// cannot be undone. This should never happen if a system is setup correctly. But
  /// it may happen if a robot is given a path whose first or last checkpoint is in
  /// conflict with the path of another robot.
  bool has_gridlock;
} rmf_traffic_msgs__msg__BlockadeHeartbeat;

// Struct for a sequence of rmf_traffic_msgs__msg__BlockadeHeartbeat.
typedef struct rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence
{
  rmf_traffic_msgs__msg__BlockadeHeartbeat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__STRUCT_H_
