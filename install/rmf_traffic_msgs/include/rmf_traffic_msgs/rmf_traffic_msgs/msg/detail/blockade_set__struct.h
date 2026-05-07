// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/BlockadeSet.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_SET__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__struct.h"

/// Struct defined in msg/BlockadeSet in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__BlockadeSet
{
  /// The ID of the participant that is setting its path
  uint64_t participant;
  /// The ID of the reservation that is being set
  uint64_t reservation;
  /// The radius to inflate the path
  double radius;
  /// The path that is being reserved
  rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence path;
} rmf_traffic_msgs__msg__BlockadeSet;

// Struct for a sequence of rmf_traffic_msgs__msg__BlockadeSet.
typedef struct rmf_traffic_msgs__msg__BlockadeSet__Sequence
{
  rmf_traffic_msgs__msg__BlockadeSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__BlockadeSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_SET__STRUCT_H_
