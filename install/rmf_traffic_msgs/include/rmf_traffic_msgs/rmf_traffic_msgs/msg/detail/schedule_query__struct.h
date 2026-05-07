// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'spacetime'
#include "rmf_traffic_msgs/msg/detail/schedule_query_spacetime__struct.h"
// Member 'participants'
#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__struct.h"

/// Struct defined in msg/ScheduleQuery in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleQuery
{
  rmf_traffic_msgs__msg__ScheduleQuerySpacetime spacetime;
  rmf_traffic_msgs__msg__ScheduleQueryParticipants participants;
} rmf_traffic_msgs__msg__ScheduleQuery;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleQuery.
typedef struct rmf_traffic_msgs__msg__ScheduleQuery__Sequence
{
  rmf_traffic_msgs__msg__ScheduleQuery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleQuery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__STRUCT_H_
