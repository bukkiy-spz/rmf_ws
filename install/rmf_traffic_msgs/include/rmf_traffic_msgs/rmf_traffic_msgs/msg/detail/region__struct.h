// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Region.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "rosidl_runtime_c/string.h"
// Member 'spaces'
#include "rmf_traffic_msgs/msg/detail/space__struct.h"
// Member 'timespan'
#include "rmf_traffic_msgs/msg/detail/timespan__struct.h"

/// Struct defined in msg/Region in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__Region
{
  rosidl_runtime_c__String map;
  rmf_traffic_msgs__msg__Space__Sequence spaces;
  rmf_traffic_msgs__msg__Timespan timespan;
} rmf_traffic_msgs__msg__Region;

// Struct for a sequence of rmf_traffic_msgs__msg__Region.
typedef struct rmf_traffic_msgs__msg__Region__Sequence
{
  rmf_traffic_msgs__msg__Region * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Region__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__STRUCT_H_
