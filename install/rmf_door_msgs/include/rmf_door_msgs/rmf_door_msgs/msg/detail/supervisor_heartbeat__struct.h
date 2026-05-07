// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_door_msgs:msg/SupervisorHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__STRUCT_H_
#define RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'all_sessions'
#include "rmf_door_msgs/msg/detail/door_sessions__struct.h"

/// Struct defined in msg/SupervisorHeartbeat in the package rmf_door_msgs.
typedef struct rmf_door_msgs__msg__SupervisorHeartbeat
{
  rmf_door_msgs__msg__DoorSessions__Sequence all_sessions;
} rmf_door_msgs__msg__SupervisorHeartbeat;

// Struct for a sequence of rmf_door_msgs__msg__SupervisorHeartbeat.
typedef struct rmf_door_msgs__msg__SupervisorHeartbeat__Sequence
{
  rmf_door_msgs__msg__SupervisorHeartbeat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_door_msgs__msg__SupervisorHeartbeat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__STRUCT_H_
