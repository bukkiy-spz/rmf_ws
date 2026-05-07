// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/BlockadeStatus.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BlockadeStatus in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__BlockadeStatus
{
  /// The Participant ID that this status is for
  uint64_t participant;
  /// The latest reservation known for this participant
  uint64_t reservation;
  /// This is true if and only if the moderator has ever received a ready notice
  /// from the participant
  bool any_ready;
  /// If any_ready is true, then this is the most recent ready checkpoint that the
  /// moderator knows about. If any_ready is false, then this field is meaningless.
  uint64_t last_ready;
  /// The last checkpoint that the moderator knows of the participant reaching
  uint64_t last_reached;
  /// The first checkpoint that's currently blockaded for this participant
  uint64_t assignment_begin;
  /// The last checkpoint that's currently blockaded for this participant
  uint64_t assignment_end;
} rmf_traffic_msgs__msg__BlockadeStatus;

// Struct for a sequence of rmf_traffic_msgs__msg__BlockadeStatus.
typedef struct rmf_traffic_msgs__msg__BlockadeStatus__Sequence
{
  rmf_traffic_msgs__msg__BlockadeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__BlockadeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__STRUCT_H_
