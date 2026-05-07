// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAddItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'route'
#include "rmf_traffic_msgs/msg/detail/route__struct.h"

/// Struct defined in msg/ScheduleChangeAddItem in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeAddItem
{
  /// The ID for this route
  uint64_t route_id;
  /// The storage location for this route
  uint64_t storage_id;
  /// The description of this route
  rmf_traffic_msgs__msg__Route route;
} rmf_traffic_msgs__msg__ScheduleChangeAddItem;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleChangeAddItem.
typedef struct rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence
{
  rmf_traffic_msgs__msg__ScheduleChangeAddItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__STRUCT_H_
