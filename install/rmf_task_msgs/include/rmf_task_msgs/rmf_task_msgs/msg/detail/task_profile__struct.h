// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/TaskProfile.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
#include "rosidl_runtime_c/string.h"
// Member 'submission_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'description'
#include "rmf_task_msgs/msg/detail/task_description__struct.h"

/// Struct defined in msg/TaskProfile in the package rmf_task_msgs.
/**
  * Unique ID assigned to this task
 */
typedef struct rmf_task_msgs__msg__TaskProfile
{
  rosidl_runtime_c__String task_id;
  /// Task submission time
  builtin_interfaces__msg__Time submission_time;
  /// Details of the task
  rmf_task_msgs__msg__TaskDescription description;
} rmf_task_msgs__msg__TaskProfile;

// Struct for a sequence of rmf_task_msgs__msg__TaskProfile.
typedef struct rmf_task_msgs__msg__TaskProfile__Sequence
{
  rmf_task_msgs__msg__TaskProfile * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__TaskProfile__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__STRUCT_H_
