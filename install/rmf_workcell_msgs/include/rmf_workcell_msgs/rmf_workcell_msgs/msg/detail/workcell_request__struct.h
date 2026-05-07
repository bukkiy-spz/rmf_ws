// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_workcell_msgs:msg/WorkcellRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__STRUCT_H_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WorkcellRequest in the package rmf_workcell_msgs.
/**
  * This is a template message for all types of workcells to build off from,
  * which allows generic workcell libraries to have access to common message
  * fields.
 */
typedef struct rmf_workcell_msgs__msg__WorkcellRequest
{
  builtin_interfaces__msg__Time time;
  /// A unique ID for this request
  rosidl_runtime_c__String request_guid;
  /// The unique ID of the workcell that this request is aimed at
  rosidl_runtime_c__String target_guid;
} rmf_workcell_msgs__msg__WorkcellRequest;

// Struct for a sequence of rmf_workcell_msgs__msg__WorkcellRequest.
typedef struct rmf_workcell_msgs__msg__WorkcellRequest__Sequence
{
  rmf_workcell_msgs__msg__WorkcellRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_workcell_msgs__msg__WorkcellRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__STRUCT_H_
