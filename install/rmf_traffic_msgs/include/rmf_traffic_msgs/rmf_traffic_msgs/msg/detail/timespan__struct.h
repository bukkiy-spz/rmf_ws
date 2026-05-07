// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'maps'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Timespan in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__Timespan
{
  rosidl_runtime_c__String__Sequence maps;
  /// TODO(MXG): Find out if it's more efficient to use a bool+value pair, or to use
  /// a dynamic array of the value (which will only ever have 1 or 0 entries)
  bool has_lower_bound;
  int64_t lower_bound;
  bool has_upper_bound;
  int64_t upper_bound;
} rmf_traffic_msgs__msg__Timespan;

// Struct for a sequence of rmf_traffic_msgs__msg__Timespan.
typedef struct rmf_traffic_msgs__msg__Timespan__Sequence
{
  rmf_traffic_msgs__msg__Timespan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Timespan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__STRUCT_H_
