// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Priority.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__PRIORITY__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__PRIORITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Priority in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__Priority
{
  uint64_t value;
} rmf_task_msgs__msg__Priority;

// Struct for a sequence of rmf_task_msgs__msg__Priority.
typedef struct rmf_task_msgs__msg__Priority__Sequence
{
  rmf_task_msgs__msg__Priority * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Priority__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__PRIORITY__STRUCT_H_
