// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_scheduler_msgs:msg/TriggerState.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER_STATE__STRUCT_H_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STARTED'.
enum
{
  rmf_scheduler_msgs__msg__TriggerState__STARTED = 2
};

/// Constant 'FINISHED'.
enum
{
  rmf_scheduler_msgs__msg__TriggerState__FINISHED = 3
};

/// Constant 'CANCELLED'.
enum
{
  rmf_scheduler_msgs__msg__TriggerState__CANCELLED = 4
};

/// Constant 'FAILED'.
enum
{
  rmf_scheduler_msgs__msg__TriggerState__FAILED = -1
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TriggerState in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__msg__TriggerState
{
  rosidl_runtime_c__String name;
  /// unix time in seconds
  int64_t last_modified;
  /// unix time in seconds
  int64_t last_ran;
  int8_t status;
} rmf_scheduler_msgs__msg__TriggerState;

// Struct for a sequence of rmf_scheduler_msgs__msg__TriggerState.
typedef struct rmf_scheduler_msgs__msg__TriggerState__Sequence
{
  rmf_scheduler_msgs__msg__TriggerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__msg__TriggerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER_STATE__STRUCT_H_
