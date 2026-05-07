// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'priority'
#include "rmf_task_msgs/msg/detail/priority__struct.h"
// Member 'task_type'
#include "rmf_task_msgs/msg/detail/task_type__struct.h"
// Member 'station'
#include "rmf_task_msgs/msg/detail/station__struct.h"
// Member 'loop'
#include "rmf_task_msgs/msg/detail/loop__struct.h"
// Member 'delivery'
#include "rmf_task_msgs/msg/detail/delivery__struct.h"
// Member 'clean'
#include "rmf_task_msgs/msg/detail/clean__struct.h"

/// Struct defined in msg/TaskDescription in the package rmf_task_msgs.
/**
  * Desired start time of a task
 */
typedef struct rmf_task_msgs__msg__TaskDescription
{
  builtin_interfaces__msg__Time start_time;
  /// Priority of the task
  rmf_task_msgs__msg__Priority priority;
  /// Task type
  rmf_task_msgs__msg__TaskType task_type;
  /// The corresponding field for the above TaskType should be populated
  rmf_task_msgs__msg__Station station;
  rmf_task_msgs__msg__Loop loop;
  rmf_task_msgs__msg__Delivery delivery;
  rmf_task_msgs__msg__Clean clean;
} rmf_task_msgs__msg__TaskDescription;

// Struct for a sequence of rmf_task_msgs__msg__TaskDescription.
typedef struct rmf_task_msgs__msg__TaskDescription__Sequence
{
  rmf_task_msgs__msg__TaskDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__TaskDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_H_
