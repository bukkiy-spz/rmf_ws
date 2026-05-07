// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Station.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__STATION__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__STATION__STRUCT_H_

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
// Member 'robot_type'
// Member 'place_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Station in the package rmf_task_msgs.
/**
  * task_id is intended to be a pseudo-random string generated
  * by the caller which can be used to identify this task as it
  * moves between the queues to completion (or failure).
 */
typedef struct rmf_task_msgs__msg__Station
{
  rosidl_runtime_c__String task_id;
  /// robot_type can be used to specify a particular robot fleet
  /// for this request
  rosidl_runtime_c__String robot_type;
  /// the place name where the robot is requested to station (park)
  rosidl_runtime_c__String place_name;
} rmf_task_msgs__msg__Station;

// Struct for a sequence of rmf_task_msgs__msg__Station.
typedef struct rmf_task_msgs__msg__Station__Sequence
{
  rmf_task_msgs__msg__Station * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Station__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__STATION__STRUCT_H_
