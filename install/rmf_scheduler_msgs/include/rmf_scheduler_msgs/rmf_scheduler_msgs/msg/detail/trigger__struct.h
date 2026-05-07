// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_scheduler_msgs:msg/Trigger.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER__STRUCT_H_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'group'
#include "rosidl_runtime_c/string.h"
// Member 'payload'
#include "rmf_scheduler_msgs/msg/detail/payload__struct.h"

/// Struct defined in msg/Trigger in the package rmf_scheduler_msgs.
/**
  * Name to identify the trigger, must be unique across all triggers.
 */
typedef struct rmf_scheduler_msgs__msg__Trigger
{
  rosidl_runtime_c__String name;
  /// unix timestamp in seconds
  int64_t created_at;
  /// unix timestamp in seconds when the trigger should run
  int64_t at;
  rosidl_runtime_c__String group;
  rmf_scheduler_msgs__msg__Payload payload;
} rmf_scheduler_msgs__msg__Trigger;

// Struct for a sequence of rmf_scheduler_msgs__msg__Trigger.
typedef struct rmf_scheduler_msgs__msg__Trigger__Sequence
{
  rmf_scheduler_msgs__msg__Trigger * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__msg__Trigger__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER__STRUCT_H_
