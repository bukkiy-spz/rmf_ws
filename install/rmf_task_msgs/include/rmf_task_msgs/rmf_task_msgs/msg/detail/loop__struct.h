// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Loop.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__LOOP__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__LOOP__STRUCT_H_

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
// Member 'start_name'
// Member 'finish_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Loop in the package rmf_task_msgs.
/**
  * task_id is intended to be a pseudo-random string generated
  * by the caller which can be used to identify this task as it
  * moves between the queues to completion (or failure).
 */
typedef struct rmf_task_msgs__msg__Loop
{
  rosidl_runtime_c__String task_id;
  /// robot_type can be used to specify a particular robot fleet
  /// for this request
  rosidl_runtime_c__String robot_type;
  /// The number of times the robot should loop between the specified points.
  uint32_t num_loops;
  /// The name of the waypoint where the robot should begin its loop. If the robot
  /// is not already at this point, it will begin the task by moving there.
  rosidl_runtime_c__String start_name;
  /// The name of the waypoint where the robot should end its looping. The robot
  /// will visit this waypoint num_loops times and then stop here on the last
  /// visit.
  rosidl_runtime_c__String finish_name;
} rmf_task_msgs__msg__Loop;

// Struct for a sequence of rmf_task_msgs__msg__Loop.
typedef struct rmf_task_msgs__msg__Loop__Sequence
{
  rmf_task_msgs__msg__Loop * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Loop__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__LOOP__STRUCT_H_
