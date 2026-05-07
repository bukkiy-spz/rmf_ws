// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/SchedulePatch.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'participants'
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__struct.h"
// Member 'cull'
#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__struct.h"

/// Struct defined in msg/SchedulePatch in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__SchedulePatch
{
  /// The changes to the schedule, grouped into the different participants
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence participants;
  /// TODO(MXG): The database will only ever report 1 cull per update. Consider
  /// making this a single field instead of a dynamic array.
  rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence cull;
  bool has_base_version;
  uint64_t base_version;
  uint64_t latest_version;
} rmf_traffic_msgs__msg__SchedulePatch;

// Struct for a sequence of rmf_traffic_msgs__msg__SchedulePatch.
typedef struct rmf_traffic_msgs__msg__SchedulePatch__Sequence
{
  rmf_traffic_msgs__msg__SchedulePatch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__SchedulePatch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__STRUCT_H_
