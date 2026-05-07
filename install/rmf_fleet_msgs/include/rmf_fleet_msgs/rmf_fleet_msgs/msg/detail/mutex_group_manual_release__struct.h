// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/MutexGroupManualRelease.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'release_mutex_groups'
// Member 'fleet'
// Member 'robot'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MutexGroupManualRelease in the package rmf_fleet_msgs.
/**
  * This message allows operators to manually request that a robot release one or
  * more mutex groups that it is currently holding.
 */
typedef struct rmf_fleet_msgs__msg__MutexGroupManualRelease
{
  /// Name of the mutex groups to release
  rosidl_runtime_c__String__Sequence release_mutex_groups;
  /// The name of the fleet that the robot belongs to
  rosidl_runtime_c__String fleet;
  /// The name of the robot that needs to release the mutex groups
  rosidl_runtime_c__String robot;
} rmf_fleet_msgs__msg__MutexGroupManualRelease;

// Struct for a sequence of rmf_fleet_msgs__msg__MutexGroupManualRelease.
typedef struct rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence
{
  rmf_fleet_msgs__msg__MutexGroupManualRelease * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__STRUCT_H_
