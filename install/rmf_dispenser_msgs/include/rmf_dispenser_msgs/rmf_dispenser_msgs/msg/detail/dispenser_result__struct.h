// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_dispenser_msgs:msg/DispenserResult.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_RESULT__STRUCT_H_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACKNOWLEDGED'.
enum
{
  rmf_dispenser_msgs__msg__DispenserResult__ACKNOWLEDGED = 0
};

/// Constant 'SUCCESS'.
enum
{
  rmf_dispenser_msgs__msg__DispenserResult__SUCCESS = 1
};

/// Constant 'FAILED'.
enum
{
  rmf_dispenser_msgs__msg__DispenserResult__FAILED = 2
};

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'request_guid'
// Member 'source_guid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DispenserResult in the package rmf_dispenser_msgs.
typedef struct rmf_dispenser_msgs__msg__DispenserResult
{
  builtin_interfaces__msg__Time time;
  /// A unique ID for the request which this result is for
  rosidl_runtime_c__String request_guid;
  /// The unique ID of the workcell that this result was sent from
  rosidl_runtime_c__String source_guid;
  /// Different basic result statuses
  uint8_t status;
} rmf_dispenser_msgs__msg__DispenserResult;

// Struct for a sequence of rmf_dispenser_msgs__msg__DispenserResult.
typedef struct rmf_dispenser_msgs__msg__DispenserResult__Sequence
{
  rmf_dispenser_msgs__msg__DispenserResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_dispenser_msgs__msg__DispenserResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_RESULT__STRUCT_H_
