// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/DispatchCommand.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_COMMAND__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_AWARD'.
/**
  * to award a task to a fleet
 */
enum
{
  rmf_task_msgs__msg__DispatchCommand__TYPE_AWARD = 1
};

/// Constant 'TYPE_REMOVE'.
/**
  * to remove a task from a fleet
 */
enum
{
  rmf_task_msgs__msg__DispatchCommand__TYPE_REMOVE = 2
};

// Include directives for member types
// Member 'fleet_name'
// Member 'task_id'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/DispatchCommand in the package rmf_task_msgs.
/**
  * This message is published by Task Dispatcher Node to either award or cancel a
  * task for a Fleet Adapter
 */
typedef struct rmf_task_msgs__msg__DispatchCommand
{
  /// The selected Fleet Adapter to award/cancel the task
  rosidl_runtime_c__String fleet_name;
  /// The task_id of the task that
  rosidl_runtime_c__String task_id;
  /// Unique ID of this request message
  uint64_t dispatch_id;
  /// The time that this dispatch request was originally made. Dispatch requests may
  /// expire with an error if they get no response after an extended period of time.
  builtin_interfaces__msg__Time timestamp;
  /// Add or Cancel a task
  uint8_t type;
} rmf_task_msgs__msg__DispatchCommand;

// Struct for a sequence of rmf_task_msgs__msg__DispatchCommand.
typedef struct rmf_task_msgs__msg__DispatchCommand__Sequence
{
  rmf_task_msgs__msg__DispatchCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__DispatchCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_COMMAND__STRUCT_H_
