// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/ChargingAssignment.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENT__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_CHARGE'.
enum
{
  rmf_fleet_msgs__msg__ChargingAssignment__MODE_CHARGE = 0
};

/// Constant 'MODE_WAIT'.
enum
{
  rmf_fleet_msgs__msg__ChargingAssignment__MODE_WAIT = 1
};

// Include directives for member types
// Member 'robot_name'
// Member 'waypoint_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ChargingAssignment in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__ChargingAssignment
{
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String waypoint_name;
  uint8_t mode;
} rmf_fleet_msgs__msg__ChargingAssignment;

// Struct for a sequence of rmf_fleet_msgs__msg__ChargingAssignment.
typedef struct rmf_fleet_msgs__msg__ChargingAssignment__Sequence
{
  rmf_fleet_msgs__msg__ChargingAssignment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__ChargingAssignment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENT__STRUCT_H_
