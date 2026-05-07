// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/BehaviorParameter.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR_PARAMETER__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR_PARAMETER__STRUCT_H_

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
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BehaviorParameter in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__BehaviorParameter
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String value;
} rmf_task_msgs__msg__BehaviorParameter;

// Struct for a sequence of rmf_task_msgs__msg__BehaviorParameter.
typedef struct rmf_task_msgs__msg__BehaviorParameter__Sequence
{
  rmf_task_msgs__msg__BehaviorParameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__BehaviorParameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR_PARAMETER__STRUCT_H_
