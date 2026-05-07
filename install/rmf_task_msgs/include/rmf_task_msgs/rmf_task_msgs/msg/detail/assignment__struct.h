// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Assignment.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__ASSIGNMENT__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__ASSIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fleet_name'
// Member 'expected_robot_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Assignment in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__Assignment
{
  bool is_assigned;
  rosidl_runtime_c__String fleet_name;
  rosidl_runtime_c__String expected_robot_name;
} rmf_task_msgs__msg__Assignment;

// Struct for a sequence of rmf_task_msgs__msg__Assignment.
typedef struct rmf_task_msgs__msg__Assignment__Sequence
{
  rmf_task_msgs__msg__Assignment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Assignment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ASSIGNMENT__STRUCT_H_
