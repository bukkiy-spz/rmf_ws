// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistency.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ranges'
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__struct.h"

/// Struct defined in msg/ScheduleInconsistency in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleInconsistency
{
  uint64_t participant;
  rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence ranges;
  uint64_t last_known_itinerary;
  uint64_t last_known_progress;
} rmf_traffic_msgs__msg__ScheduleInconsistency;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleInconsistency.
typedef struct rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence
{
  rmf_traffic_msgs__msg__ScheduleInconsistency * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__STRUCT_H_
