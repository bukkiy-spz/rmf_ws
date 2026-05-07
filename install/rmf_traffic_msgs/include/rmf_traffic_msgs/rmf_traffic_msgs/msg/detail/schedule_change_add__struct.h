// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAdd.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'items'
#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__struct.h"

/// Struct defined in msg/ScheduleChangeAdd in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeAdd
{
  /// The Plan ID for the new routes
  uint64_t plan_id;
  /// The new route items to add
  rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence items;
} rmf_traffic_msgs__msg__ScheduleChangeAdd;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleChangeAdd.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence
{
  rmf_traffic_msgs__msg__ScheduleChangeAdd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__STRUCT_H_
