// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Behavior.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'parameters'
#include "rmf_task_msgs/msg/detail/behavior_parameter__struct.h"

/// Struct defined in msg/Behavior in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__Behavior
{
  rosidl_runtime_c__String name;
  rmf_task_msgs__msg__BehaviorParameter__Sequence parameters;
} rmf_task_msgs__msg__Behavior;

// Struct for a sequence of rmf_task_msgs__msg__Behavior.
typedef struct rmf_task_msgs__msg__Behavior__Sequence
{
  rmf_task_msgs__msg__Behavior * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Behavior__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__STRUCT_H_
