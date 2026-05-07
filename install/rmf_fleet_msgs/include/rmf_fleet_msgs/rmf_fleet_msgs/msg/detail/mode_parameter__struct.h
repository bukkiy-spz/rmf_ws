// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/ModeParameter.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MODE_PARAMETER__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__MODE_PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ModeParameter in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__ModeParameter
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String value;
} rmf_fleet_msgs__msg__ModeParameter;

// Struct for a sequence of rmf_fleet_msgs__msg__ModeParameter.
typedef struct rmf_fleet_msgs__msg__ModeParameter__Sequence
{
  rmf_fleet_msgs__msg__ModeParameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__ModeParameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MODE_PARAMETER__STRUCT_H_
