// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__STRUCT_H_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'charger_name'
// Member 'fleet_name'
// Member 'robot_name'
// Member 'request_id'
#include "rosidl_runtime_c/string.h"
// Member 'start_timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/ChargerRequest in the package rmf_charger_msgs.
/**
  * The name of the charger that should process this message
 */
typedef struct rmf_charger_msgs__msg__ChargerRequest
{
  rosidl_runtime_c__String charger_name;
  /// The robot that wishes to charge
  rosidl_runtime_c__String fleet_name;
  rosidl_runtime_c__String robot_name;
  /// The maximum amount of time to wait for the charging to start.
  /// If the robot takes longer than this to arrive and start charging,
  /// the charge request will be canceled.
  builtin_interfaces__msg__Duration start_timeout;
  /// A unique ID for each request. It is advised that you prefix this
  /// with the sender's node name. This is used for error tracking
  /// later on
  rosidl_runtime_c__String request_id;
} rmf_charger_msgs__msg__ChargerRequest;

// Struct for a sequence of rmf_charger_msgs__msg__ChargerRequest.
typedef struct rmf_charger_msgs__msg__ChargerRequest__Sequence
{
  rmf_charger_msgs__msg__ChargerRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_charger_msgs__msg__ChargerRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__STRUCT_H_
