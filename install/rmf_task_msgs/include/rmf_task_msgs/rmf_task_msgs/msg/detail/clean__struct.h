// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Clean.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__CLEAN__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__CLEAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_waypoint'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Clean in the package rmf_task_msgs.
/**
  * The name of the waypoint where the robot should begin its pre-configured
  * cleaning job.
 */
typedef struct rmf_task_msgs__msg__Clean
{
  rosidl_runtime_c__String start_waypoint;
} rmf_task_msgs__msg__Clean;

// Struct for a sequence of rmf_task_msgs__msg__Clean.
typedef struct rmf_task_msgs__msg__Clean__Sequence
{
  rmf_task_msgs__msg__Clean * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Clean__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__CLEAN__STRUCT_H_
