// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/BidNotice.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
// Member 'task_id'
#include "rosidl_runtime_c/string.h"
// Member 'time_window'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/BidNotice in the package rmf_task_msgs.
/**
  * This message is published by the Task Dispatcher node to notify all
  * Fleet Adapters to participate in a bidding process for a new task.
  * Fleet Adapters may then submit a BidProposal message with their best proposal
  * to accommodate the new task.
 */
typedef struct rmf_task_msgs__msg__BidNotice
{
  /// Details of the task request
  rosidl_runtime_c__String request;
  /// The ID for this request
  rosidl_runtime_c__String task_id;
  /// Duration for which the bidding is open
  builtin_interfaces__msg__Duration time_window;
} rmf_task_msgs__msg__BidNotice;

// Struct for a sequence of rmf_task_msgs__msg__BidNotice.
typedef struct rmf_task_msgs__msg__BidNotice__Sequence
{
  rmf_task_msgs__msg__BidNotice * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__BidNotice__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__STRUCT_H_
