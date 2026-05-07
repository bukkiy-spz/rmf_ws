// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'erasures'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'delays'
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__struct.h"
// Member 'additions'
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__struct.h"
// Member 'progress'
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__struct.h"

/// Struct defined in msg/ScheduleParticipantPatch in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleParticipantPatch
{
  uint64_t participant_id;
  uint64_t itinerary_version;
  rosidl_runtime_c__uint64__Sequence erasures;
  rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence delays;
  rmf_traffic_msgs__msg__ScheduleChangeAdd additions;
  rmf_traffic_msgs__msg__ScheduleChangeProgress progress;
} rmf_traffic_msgs__msg__ScheduleParticipantPatch;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleParticipantPatch.
typedef struct rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence
{
  rmf_traffic_msgs__msg__ScheduleParticipantPatch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__STRUCT_H_
