// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/BidProposal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__STRUCT_H_

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
// Member 'finish_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/BidProposal in the package rmf_task_msgs.
/**
  * This message is published by a Fleet Adapter in response to a BidNotice
  * message.
 */
typedef struct rmf_task_msgs__msg__BidProposal
{
  /// The name of the Fleet Adapter publishing this message
  rosidl_runtime_c__String fleet_name;
  /// The name of the robot in the fleet which will potentially execute the task
  rosidl_runtime_c__String expected_robot_name;
  /// The overall cost of task assignments prior to accommodating the new task
  double prev_cost;
  /// The overall cost of task assignments after accommodating the new task
  double new_cost;
  /// The estimated finish time of the new task
  builtin_interfaces__msg__Time finish_time;
} rmf_task_msgs__msg__BidProposal;

// Struct for a sequence of rmf_task_msgs__msg__BidProposal.
typedef struct rmf_task_msgs__msg__BidProposal__Sequence
{
  rmf_task_msgs__msg__BidProposal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__BidProposal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__STRUCT_H_
