// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'model'
// Member 'task_id'
#include "rosidl_runtime_c/string.h"
// Member 'mode'
#include "rmf_fleet_msgs/msg/detail/robot_mode__struct.h"
// Member 'location'
// Member 'path'
#include "rmf_fleet_msgs/msg/detail/location__struct.h"

/// Struct defined in msg/RobotState in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__RobotState
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String model;
  /// task_id is copied in from the most recent Request message,
  /// such as ModeRequest, DestinationRequest, or PathRequest
  rosidl_runtime_c__String task_id;
  /// The sequence number of this message. Every new message should increment the
  /// sequence number by 1.
  uint64_t seq;
  rmf_fleet_msgs__msg__RobotMode mode;
  float battery_percent;
  rmf_fleet_msgs__msg__Location location;
  rmf_fleet_msgs__msg__Location__Sequence path;
} rmf_fleet_msgs__msg__RobotState;

// Struct for a sequence of rmf_fleet_msgs__msg__RobotState.
typedef struct rmf_fleet_msgs__msg__RobotState__Sequence
{
  rmf_fleet_msgs__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
