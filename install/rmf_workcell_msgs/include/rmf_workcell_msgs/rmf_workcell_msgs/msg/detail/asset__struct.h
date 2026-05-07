// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_workcell_msgs:msg/Asset.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__STRUCT_H_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'guid'
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Asset in the package rmf_workcell_msgs.
typedef struct rmf_workcell_msgs__msg__Asset
{
  rosidl_runtime_c__String guid;
  rosidl_runtime_c__String type;
} rmf_workcell_msgs__msg__Asset;

// Struct for a sequence of rmf_workcell_msgs__msg__Asset.
typedef struct rmf_workcell_msgs__msg__Asset__Sequence
{
  rmf_workcell_msgs__msg__Asset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_workcell_msgs__msg__Asset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__STRUCT_H_
