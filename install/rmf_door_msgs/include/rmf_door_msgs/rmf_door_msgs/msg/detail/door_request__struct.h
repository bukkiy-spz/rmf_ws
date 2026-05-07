// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_door_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__STRUCT_H_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__STRUCT_H_

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
// Member 'door_name'
#include "rosidl_runtime_c/string.h"
// Member 'requested_mode'
#include "rmf_door_msgs/msg/detail/door_mode__struct.h"

/// Struct defined in msg/DoorRequest in the package rmf_door_msgs.
typedef struct rmf_door_msgs__msg__DoorRequest
{
  builtin_interfaces__msg__Time request_time;
  rosidl_runtime_c__String requester_id;
  rosidl_runtime_c__String door_name;
  rmf_door_msgs__msg__DoorMode requested_mode;
} rmf_door_msgs__msg__DoorRequest;

// Struct for a sequence of rmf_door_msgs__msg__DoorRequest.
typedef struct rmf_door_msgs__msg__DoorRequest__Sequence
{
  rmf_door_msgs__msg__DoorRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_door_msgs__msg__DoorRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__STRUCT_H_
