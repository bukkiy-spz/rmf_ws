// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__STRUCT_H_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__STRUCT_H_

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
// Member 'guid'
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'assets'
#include "rmf_workcell_msgs/msg/detail/asset__struct.h"
// Member 'traits'
#include "rmf_workcell_msgs/msg/detail/trait__struct.h"

/// Struct defined in msg/WorkcellConfiguration in the package rmf_workcell_msgs.
typedef struct rmf_workcell_msgs__msg__WorkcellConfiguration
{
  builtin_interfaces__msg__Time time;
  rosidl_runtime_c__String guid;
  rosidl_runtime_c__String type;
  rmf_workcell_msgs__msg__Asset__Sequence assets;
  rmf_workcell_msgs__msg__Trait__Sequence traits;
} rmf_workcell_msgs__msg__WorkcellConfiguration;

// Struct for a sequence of rmf_workcell_msgs__msg__WorkcellConfiguration.
typedef struct rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence
{
  rmf_workcell_msgs__msg__WorkcellConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__STRUCT_H_
