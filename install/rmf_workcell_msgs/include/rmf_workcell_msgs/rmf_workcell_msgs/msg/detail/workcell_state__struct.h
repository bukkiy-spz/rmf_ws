// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_workcell_msgs:msg/WorkcellState.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_STATE__STRUCT_H_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  rmf_workcell_msgs__msg__WorkcellState__IDLE = 0l
};

/// Constant 'BUSY'.
enum
{
  rmf_workcell_msgs__msg__WorkcellState__BUSY = 1l
};

/// Constant 'OFFLINE'.
enum
{
  rmf_workcell_msgs__msg__WorkcellState__OFFLINE = 2l
};

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'guid'
// Member 'request_guid_queue'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WorkcellState in the package rmf_workcell_msgs.
/**
  * This is a template message for all types of workcells to build off from,
  * which allows generic workcell libraries to have access to common message
  * fields.
 */
typedef struct rmf_workcell_msgs__msg__WorkcellState
{
  builtin_interfaces__msg__Time time;
  /// A unique ID for this workcell
  rosidl_runtime_c__String guid;
  /// Different basic modes that the workcell could be in
  int32_t mode;
  /// Queued up requests that are being handled by this workcell
  rosidl_runtime_c__String__Sequence request_guid_queue;
} rmf_workcell_msgs__msg__WorkcellState;

// Struct for a sequence of rmf_workcell_msgs__msg__WorkcellState.
typedef struct rmf_workcell_msgs__msg__WorkcellState__Sequence
{
  rmf_workcell_msgs__msg__WorkcellState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_workcell_msgs__msg__WorkcellState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_STATE__STRUCT_H_
