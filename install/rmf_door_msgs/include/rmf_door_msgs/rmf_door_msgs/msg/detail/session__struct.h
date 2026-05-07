// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_door_msgs:msg/Session.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__SESSION__STRUCT_H_
#define RMF_DOOR_MSGS__MSG__DETAIL__SESSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'requester_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Session in the package rmf_door_msgs.
typedef struct rmf_door_msgs__msg__Session
{
  builtin_interfaces__msg__Time request_time;
  rosidl_runtime_c__String requester_id;
} rmf_door_msgs__msg__Session;

// Struct for a sequence of rmf_door_msgs__msg__Session.
typedef struct rmf_door_msgs__msg__Session__Sequence
{
  rmf_door_msgs__msg__Session * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_door_msgs__msg__Session__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__SESSION__STRUCT_H_
