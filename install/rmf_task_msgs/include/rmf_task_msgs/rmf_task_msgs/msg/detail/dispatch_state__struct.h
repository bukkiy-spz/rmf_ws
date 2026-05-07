// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/DispatchState.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNINITIALIZED'.
enum
{
  rmf_task_msgs__msg__DispatchState__STATUS_UNINITIALIZED = 0
};

/// Constant 'STATUS_QUEUED'.
enum
{
  rmf_task_msgs__msg__DispatchState__STATUS_QUEUED = 1
};

/// Constant 'STATUS_SELECTED'.
enum
{
  rmf_task_msgs__msg__DispatchState__STATUS_SELECTED = 2
};

/// Constant 'STATUS_DISPATCHED'.
enum
{
  rmf_task_msgs__msg__DispatchState__STATUS_DISPATCHED = 3
};

/// Constant 'STATUS_FAILED_TO_ASSIGN'.
enum
{
  rmf_task_msgs__msg__DispatchState__STATUS_FAILED_TO_ASSIGN = 4
};

/// Constant 'STATUS_CANCELED_IN_FLIGHT'.
enum
{
  rmf_task_msgs__msg__DispatchState__STATUS_CANCELED_IN_FLIGHT = 5
};

// Include directives for member types
// Member 'task_id'
// Member 'errors'
#include "rosidl_runtime_c/string.h"
// Member 'assignment'
#include "rmf_task_msgs/msg/detail/assignment__struct.h"

/// Struct defined in msg/DispatchState in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__DispatchState
{
  rosidl_runtime_c__String task_id;
  int8_t status;
  rmf_task_msgs__msg__Assignment assignment;
  rosidl_runtime_c__String__Sequence errors;
} rmf_task_msgs__msg__DispatchState;

// Struct for a sequence of rmf_task_msgs__msg__DispatchState.
typedef struct rmf_task_msgs__msg__DispatchState__Sequence
{
  rmf_task_msgs__msg__DispatchState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__DispatchState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__STRUCT_H_
