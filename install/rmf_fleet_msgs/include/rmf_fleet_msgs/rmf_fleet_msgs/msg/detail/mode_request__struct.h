// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/ModeRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MODE_REQUEST__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__MODE_REQUEST__STRUCT_H_

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
// Member 'robot_name'
// Member 'task_id'
#include "rosidl_runtime_c/string.h"
// Member 'mode'
#include "rmf_fleet_msgs/msg/detail/robot_mode__struct.h"
// Member 'parameters'
#include "rmf_fleet_msgs/msg/detail/mode_parameter__struct.h"

/// Struct defined in msg/ModeRequest in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__ModeRequest
{
  rosidl_runtime_c__String fleet_name;
  rosidl_runtime_c__String robot_name;
  rmf_fleet_msgs__msg__RobotMode mode;
  /// task_id must be copied into future RobotState messages
  rosidl_runtime_c__String task_id;
  /// Some mode changes require parameters. For example, the name of a dock.
  rmf_fleet_msgs__msg__ModeParameter__Sequence parameters;
} rmf_fleet_msgs__msg__ModeRequest;

// Struct for a sequence of rmf_fleet_msgs__msg__ModeRequest.
typedef struct rmf_fleet_msgs__msg__ModeRequest__Sequence
{
  rmf_fleet_msgs__msg__ModeRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__ModeRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MODE_REQUEST__STRUCT_H_
