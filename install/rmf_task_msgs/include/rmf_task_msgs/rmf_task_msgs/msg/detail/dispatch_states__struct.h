// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/DispatchStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'active'
// Member 'finished'
#include "rmf_task_msgs/msg/detail/dispatch_state__struct.h"

/// Struct defined in msg/DispatchStates in the package rmf_task_msgs.
/**
  * States of tasks that are currently in the process of being dispatched
 */
typedef struct rmf_task_msgs__msg__DispatchStates
{
  rmf_task_msgs__msg__DispatchState__Sequence active;
  /// States of tasks that have recently finished being dispatched. This may mean
  /// the task was assigned or it may mean it failed to be dispatched or was
  /// canceled before the dispatch took place.
  rmf_task_msgs__msg__DispatchState__Sequence finished;
} rmf_task_msgs__msg__DispatchStates;

// Struct for a sequence of rmf_task_msgs__msg__DispatchStates.
typedef struct rmf_task_msgs__msg__DispatchStates__Sequence
{
  rmf_task_msgs__msg__DispatchStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__DispatchStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__STRUCT_H_
