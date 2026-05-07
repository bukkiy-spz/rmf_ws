// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/ChargingAssignments.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENTS__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENTS__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'assignments'
#include "rmf_fleet_msgs/msg/detail/charging_assignment__struct.h"

/// Struct defined in msg/ChargingAssignments in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__ChargingAssignments
{
  rosidl_runtime_c__String fleet_name;
  rmf_fleet_msgs__msg__ChargingAssignment__Sequence assignments;
} rmf_fleet_msgs__msg__ChargingAssignments;

// Struct for a sequence of rmf_fleet_msgs__msg__ChargingAssignments.
typedef struct rmf_fleet_msgs__msg__ChargingAssignments__Sequence
{
  rmf_fleet_msgs__msg__ChargingAssignments * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__ChargingAssignments__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENTS__STRUCT_H_
