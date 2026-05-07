// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_dispenser_msgs:msg/DispenserRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__STRUCT_H_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'request_guid'
// Member 'target_guid'
// Member 'transporter_type'
#include "rosidl_runtime_c/string.h"
// Member 'items'
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__struct.h"

/// Struct defined in msg/DispenserRequest in the package rmf_dispenser_msgs.
typedef struct rmf_dispenser_msgs__msg__DispenserRequest
{
  builtin_interfaces__msg__Time time;
  /// A unique ID for this request
  rosidl_runtime_c__String request_guid;
  /// The unique name of the dispenser that this request is aimed at
  rosidl_runtime_c__String target_guid;
  /// below are custom workcell message fields
  rosidl_runtime_c__String transporter_type;
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence items;
} rmf_dispenser_msgs__msg__DispenserRequest;

// Struct for a sequence of rmf_dispenser_msgs__msg__DispenserRequest.
typedef struct rmf_dispenser_msgs__msg__DispenserRequest__Sequence
{
  rmf_dispenser_msgs__msg__DispenserRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_dispenser_msgs__msg__DispenserRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__STRUCT_H_
