// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeDelay.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_DELAY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_DELAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ScheduleChangeDelay in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeDelay
{
  int64_t delay;
} rmf_traffic_msgs__msg__ScheduleChangeDelay;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleChangeDelay.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence
{
  rmf_traffic_msgs__msg__ScheduleChangeDelay * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_DELAY__STRUCT_H_
