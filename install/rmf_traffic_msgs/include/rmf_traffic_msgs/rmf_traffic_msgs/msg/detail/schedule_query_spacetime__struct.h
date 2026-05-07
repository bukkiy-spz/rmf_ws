// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleQuerySpacetime.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_SPACETIME__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_SPACETIME__STRUCT_H_

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
  rmf_traffic_msgs__msg__ScheduleQuerySpacetime__ALL = 1
};

/// Constant 'REGIONS'.
enum
{
  rmf_traffic_msgs__msg__ScheduleQuerySpacetime__REGIONS = 2
};

/// Constant 'TIMESPAN'.
enum
{
  rmf_traffic_msgs__msg__ScheduleQuerySpacetime__TIMESPAN = 3
};

// Include directives for member types
// Member 'regions'
#include "rmf_traffic_msgs/msg/detail/region__struct.h"
// Member 'shape_context'
#include "rmf_traffic_msgs/msg/detail/shape_context__struct.h"
// Member 'timespan'
#include "rmf_traffic_msgs/msg/detail/timespan__struct.h"

/// Struct defined in msg/ScheduleQuerySpacetime in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ScheduleQuerySpacetime
{
  uint16_t type;
  /// =====================
  /// ===== REGIONS =====
  /// If REGIONS mode is chosen, this will contain the regions to query
  rmf_traffic_msgs__msg__Region__Sequence regions;
  rmf_traffic_msgs__msg__ShapeContext shape_context;
  /// =====================
  /// ===== TIMESPAN ======
  rmf_traffic_msgs__msg__Timespan timespan;
} rmf_traffic_msgs__msg__ScheduleQuerySpacetime;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleQuerySpacetime.
typedef struct rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence
{
  rmf_traffic_msgs__msg__ScheduleQuerySpacetime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_SPACETIME__STRUCT_H_
