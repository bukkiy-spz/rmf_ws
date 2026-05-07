// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeProgress.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'checkpoints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ScheduleChangeProgress in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeProgress
{
  /// Indicate whether any progress has actually been made. If false, then the
  /// rest of the fields can be ignored
  bool has_progress;
  /// The version of the progress within the plan
  uint64_t version;
  /// The checkpoints in the itinerary that have been reached
  rosidl_runtime_c__uint64__Sequence checkpoints;
} rmf_traffic_msgs__msg__ScheduleChangeProgress;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleChangeProgress.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeProgress__Sequence
{
  rmf_traffic_msgs__msg__ScheduleChangeProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleChangeProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__STRUCT_H_
