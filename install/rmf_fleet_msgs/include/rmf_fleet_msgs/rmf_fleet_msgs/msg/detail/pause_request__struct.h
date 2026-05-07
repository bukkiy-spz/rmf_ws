// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/PauseRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__PAUSE_REQUEST__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__PAUSE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_PAUSE_IMMEDIATELY'.
enum
{
  rmf_fleet_msgs__msg__PauseRequest__TYPE_PAUSE_IMMEDIATELY = 0ul
};

/// Constant 'TYPE_PAUSE_AT_CHECKPOINT'.
enum
{
  rmf_fleet_msgs__msg__PauseRequest__TYPE_PAUSE_AT_CHECKPOINT = 1ul
};

/// Constant 'TYPE_RESUME'.
enum
{
  rmf_fleet_msgs__msg__PauseRequest__TYPE_RESUME = 2ul
};

// Include directives for member types
// Member 'fleet_name'
// Member 'robot_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PauseRequest in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__PauseRequest
{
  rosidl_runtime_c__String fleet_name;
  rosidl_runtime_c__String robot_name;
  uint64_t mode_request_id;
  uint32_t type;
  uint32_t at_checkpoint;
} rmf_fleet_msgs__msg__PauseRequest;

// Struct for a sequence of rmf_fleet_msgs__msg__PauseRequest.
typedef struct rmf_fleet_msgs__msg__PauseRequest__Sequence
{
  rmf_fleet_msgs__msg__PauseRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__PauseRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__PAUSE_REQUEST__STRUCT_H_
