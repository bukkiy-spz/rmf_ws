// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/MutexGroupStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'assignments'
#include "rmf_fleet_msgs/msg/detail/mutex_group_assignment__struct.h"

/// Struct defined in msg/MutexGroupStates in the package rmf_fleet_msgs.
/**
  * A map of all the current mutex group assignments
 */
typedef struct rmf_fleet_msgs__msg__MutexGroupStates
{
  rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence assignments;
} rmf_fleet_msgs__msg__MutexGroupStates;

// Struct for a sequence of rmf_fleet_msgs__msg__MutexGroupStates.
typedef struct rmf_fleet_msgs__msg__MutexGroupStates__Sequence
{
  rmf_fleet_msgs__msg__MutexGroupStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__MutexGroupStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__STRUCT_H_
