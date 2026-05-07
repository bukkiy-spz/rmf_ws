// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/DestinationRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DESTINATION_REQUEST__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__DESTINATION_REQUEST__STRUCT_H_

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
// Member 'destination'
#include "rmf_fleet_msgs/msg/detail/location__struct.h"

/// Struct defined in msg/DestinationRequest in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__DestinationRequest
{
  rosidl_runtime_c__String fleet_name;
  rosidl_runtime_c__String robot_name;
  rmf_fleet_msgs__msg__Location destination;
  /// task_id must be copied into future RobotState messages
  rosidl_runtime_c__String task_id;
} rmf_fleet_msgs__msg__DestinationRequest;

// Struct for a sequence of rmf_fleet_msgs__msg__DestinationRequest.
typedef struct rmf_fleet_msgs__msg__DestinationRequest__Sequence
{
  rmf_fleet_msgs__msg__DestinationRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__DestinationRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DESTINATION_REQUEST__STRUCT_H_
