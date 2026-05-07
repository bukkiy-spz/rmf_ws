// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_scheduler_msgs:msg/ScheduleState.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__STRUCT_H_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CREATED'.
enum
{
  rmf_scheduler_msgs__msg__ScheduleState__CREATED = 1
};

/// Constant 'STARTED'.
enum
{
  rmf_scheduler_msgs__msg__ScheduleState__STARTED = 2
};

/// Constant 'FINISHED'.
enum
{
  rmf_scheduler_msgs__msg__ScheduleState__FINISHED = 3
};

/// Constant 'CANCELLED'.
enum
{
  rmf_scheduler_msgs__msg__ScheduleState__CANCELLED = 4
};

/// Constant 'FAILED'.
enum
{
  rmf_scheduler_msgs__msg__ScheduleState__FAILED = -1
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ScheduleState in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__msg__ScheduleState
{
  rosidl_runtime_c__String name;
  /// unix time in seconds
  int64_t last_modified;
  /// unix time in seconds
  int64_t last_ran;
  /// unix time in seconds
  int64_t next_run;
  int8_t status;
} rmf_scheduler_msgs__msg__ScheduleState;

// Struct for a sequence of rmf_scheduler_msgs__msg__ScheduleState.
typedef struct rmf_scheduler_msgs__msg__ScheduleState__Sequence
{
  rmf_scheduler_msgs__msg__ScheduleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__msg__ScheduleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__STRUCT_H_
