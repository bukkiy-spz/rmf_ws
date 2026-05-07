// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/BlockadeReached.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_REACHED__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_REACHED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BlockadeReached in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__BlockadeReached
{
  /// The ID of the blockade participant
  uint64_t participant;
  /// The reservation ID that this update refers to
  uint64_t reservation;
  /// The checkpoint that has been reached
  uint64_t checkpoint;
} rmf_traffic_msgs__msg__BlockadeReached;

// Struct for a sequence of rmf_traffic_msgs__msg__BlockadeReached.
typedef struct rmf_traffic_msgs__msg__BlockadeReached__Sequence
{
  rmf_traffic_msgs__msg__BlockadeReached * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__BlockadeReached__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_REACHED__STRUCT_H_
