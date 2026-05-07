// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Tow.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TOW__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__TOW__STRUCT_H_

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
// Member 'object_type'
// Member 'object_id'
// Member 'pickup_place_name'
// Member 'dropoff_place_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Tow in the package rmf_task_msgs.
/**
  * task_id is intended to be a pseudo-random string generated
  * by the caller which can be used to identify this task as it
  * moves between the queues to completion (or failure).
 */
typedef struct rmf_task_msgs__msg__Tow
{
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String object_type;
  bool is_object_id_known;
  rosidl_runtime_c__String object_id;
  rosidl_runtime_c__String pickup_place_name;
  bool is_dropoff_place_known;
  rosidl_runtime_c__String dropoff_place_name;
} rmf_task_msgs__msg__Tow;

// Struct for a sequence of rmf_task_msgs__msg__Tow.
typedef struct rmf_task_msgs__msg__Tow__Sequence
{
  rmf_task_msgs__msg__Tow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Tow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TOW__STRUCT_H_
