// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/BlockadeCheckpoint.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CHECKPOINT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CHECKPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BlockadeCheckpoint in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__BlockadeCheckpoint
{
  /// The position of the checkpoint
  double position[2];
  /// The name of the map that the checkpoint is on
  rosidl_runtime_c__String map_name;
  /// Whether or not the participant can hold at this checkpoint
  bool can_hold;
} rmf_traffic_msgs__msg__BlockadeCheckpoint;

// Struct for a sequence of rmf_traffic_msgs__msg__BlockadeCheckpoint.
typedef struct rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence
{
  rmf_traffic_msgs__msg__BlockadeCheckpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CHECKPOINT__STRUCT_H_
