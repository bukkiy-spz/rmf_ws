// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/MutexGroupAssignment.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_ASSIGNMENT__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_ASSIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group'
#include "rosidl_runtime_c/string.h"
// Member 'claim_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MutexGroupAssignment in the package rmf_fleet_msgs.
/**
  * This message maps a mutex group name to the name of an agent that is currently
  * holding the claim to that group.
 */
typedef struct rmf_fleet_msgs__msg__MutexGroupAssignment
{
  /// Name of the mutex group that is being described.
  rosidl_runtime_c__String group;
  /// Traffic Participant ID of the agent that has currently claimed the group.
  /// If the group is unclaimed, this will be the max uint64 value.
  uint64_t claimant;
  /// Time stamp of when the claim request began.
  builtin_interfaces__msg__Time claim_time;
} rmf_fleet_msgs__msg__MutexGroupAssignment;

// Struct for a sequence of rmf_fleet_msgs__msg__MutexGroupAssignment.
typedef struct rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence
{
  rmf_fleet_msgs__msg__MutexGroupAssignment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_ASSIGNMENT__STRUCT_H_
