// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeCull.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_CULL__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_CULL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ScheduleChangeCull in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeCull
{
  int64_t time;
} rmf_traffic_msgs__msg__ScheduleChangeCull;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleChangeCull.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence
{
  rmf_traffic_msgs__msg__ScheduleChangeCull * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_CULL__STRUCT_H_
