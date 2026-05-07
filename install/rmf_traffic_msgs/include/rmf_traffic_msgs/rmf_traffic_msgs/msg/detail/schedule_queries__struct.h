// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleQueries.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__STRUCT_H_

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
// Member 'queries'
#include "rmf_traffic_msgs/msg/detail/schedule_query__struct.h"
// Member 'query_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ScheduleQueries in the package rmf_traffic_msgs.
/**
  * The version of the schedule node that provided this update
 */
typedef struct rmf_traffic_msgs__msg__ScheduleQueries
{
  rmf_traffic_msgs__msg__ScheduleIdentity node_id;
  /// The list of known queries
  rmf_traffic_msgs__msg__ScheduleQuery__Sequence queries;
  /// The list of IDs for those queries
  rosidl_runtime_c__uint64__Sequence query_ids;
} rmf_traffic_msgs__msg__ScheduleQueries;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleQueries.
typedef struct rmf_traffic_msgs__msg__ScheduleQueries__Sequence
{
  rmf_traffic_msgs__msg__ScheduleQueries * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleQueries__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__STRUCT_H_
