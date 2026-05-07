// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Tasks.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASKS__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__TASKS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tasks'
#include "rmf_task_msgs/msg/detail/task_summary__struct.h"

/// Struct defined in msg/Tasks in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__Tasks
{
  rmf_task_msgs__msg__TaskSummary__Sequence tasks;
} rmf_task_msgs__msg__Tasks;

// Struct for a sequence of rmf_task_msgs__msg__Tasks.
typedef struct rmf_task_msgs__msg__Tasks__Sequence
{
  rmf_task_msgs__msg__Tasks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Tasks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASKS__STRUCT_H_
