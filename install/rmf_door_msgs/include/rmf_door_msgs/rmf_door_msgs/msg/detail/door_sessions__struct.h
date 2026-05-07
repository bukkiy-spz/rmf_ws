// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__STRUCT_H_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'door_name'
#include "rosidl_runtime_c/string.h"
// Member 'sessions'
#include "rmf_door_msgs/msg/detail/session__struct.h"

/// Struct defined in msg/DoorSessions in the package rmf_door_msgs.
typedef struct rmf_door_msgs__msg__DoorSessions
{
  rosidl_runtime_c__String door_name;
  rmf_door_msgs__msg__Session__Sequence sessions;
} rmf_door_msgs__msg__DoorSessions;

// Struct for a sequence of rmf_door_msgs__msg__DoorSessions.
typedef struct rmf_door_msgs__msg__DoorSessions__Sequence
{
  rmf_door_msgs__msg__DoorSessions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_door_msgs__msg__DoorSessions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__STRUCT_H_
