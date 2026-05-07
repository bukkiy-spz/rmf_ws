// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleQueryParticipants.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_PARTICIPANTS__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_PARTICIPANTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALL'.
enum
{
  rmf_traffic_msgs__msg__ScheduleQueryParticipants__ALL = 1
};

/// Constant 'INCLUDE'.
enum
{
  rmf_traffic_msgs__msg__ScheduleQueryParticipants__INCLUDE = 2
};

/// Constant 'EXCLUDE'.
enum
{
  rmf_traffic_msgs__msg__ScheduleQueryParticipants__EXCLUDE = 3
};

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ScheduleQueryParticipants in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleQueryParticipants
{
  uint16_t type;
  rosidl_runtime_c__uint64__Sequence ids;
} rmf_traffic_msgs__msg__ScheduleQueryParticipants;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleQueryParticipants.
typedef struct rmf_traffic_msgs__msg__ScheduleQueryParticipants__Sequence
{
  rmf_traffic_msgs__msg__ScheduleQueryParticipants * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleQueryParticipants__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_PARTICIPANTS__STRUCT_H_
