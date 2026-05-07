// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:srv/LiftClearance.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__STRUCT_H_
#define RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_name'
// Member 'lift_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LiftClearance in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__srv__LiftClearance_Request
{
  /// Name of the robot that wants to enter a lift
  rosidl_runtime_c__String robot_name;
  /// Name of the lift that the robot wants to enter
  rosidl_runtime_c__String lift_name;
} rmf_fleet_msgs__srv__LiftClearance_Request;

// Struct for a sequence of rmf_fleet_msgs__srv__LiftClearance_Request.
typedef struct rmf_fleet_msgs__srv__LiftClearance_Request__Sequence
{
  rmf_fleet_msgs__srv__LiftClearance_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__srv__LiftClearance_Request__Sequence;


// Constants defined in the message

/// Constant 'DECISION_CLEAR'.
enum
{
  rmf_fleet_msgs__srv__LiftClearance_Response__DECISION_CLEAR = 1ul
};

/// Constant 'DECISION_CROWDED'.
enum
{
  rmf_fleet_msgs__srv__LiftClearance_Response__DECISION_CROWDED = 2ul
};

/// Struct defined in srv/LiftClearance in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__srv__LiftClearance_Response
{
  uint32_t decision;
} rmf_fleet_msgs__srv__LiftClearance_Response;

// Struct for a sequence of rmf_fleet_msgs__srv__LiftClearance_Response.
typedef struct rmf_fleet_msgs__srv__LiftClearance_Response__Sequence
{
  rmf_fleet_msgs__srv__LiftClearance_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__srv__LiftClearance_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__STRUCT_H_
