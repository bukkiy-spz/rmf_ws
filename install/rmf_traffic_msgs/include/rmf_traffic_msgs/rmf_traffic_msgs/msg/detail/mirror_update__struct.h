// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_id'
#include "rmf_traffic_msgs/msg/detail/schedule_identity__struct.h"
// Member 'patch'
#include "rmf_traffic_msgs/msg/detail/schedule_patch__struct.h"

/// Struct defined in msg/MirrorUpdate in the package rmf_traffic_msgs.
/**
  * The version of the schedule node that provided this update
 */
typedef struct rmf_traffic_msgs__msg__MirrorUpdate
{
  rmf_traffic_msgs__msg__ScheduleIdentity node_id;
  /// The version of the database this update provides
  uint64_t database_version;
  /// The patch for the query
  rmf_traffic_msgs__msg__SchedulePatch patch;
  /// True if this update is meant to remedy a mirror that has fallen
  /// out of sync
  bool is_remedial_update;
} rmf_traffic_msgs__msg__MirrorUpdate;

// Struct for a sequence of rmf_traffic_msgs__msg__MirrorUpdate.
typedef struct rmf_traffic_msgs__msg__MirrorUpdate__Sequence
{
  rmf_traffic_msgs__msg__MirrorUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__MirrorUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__STRUCT_H_
