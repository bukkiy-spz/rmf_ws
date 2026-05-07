// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_visualization_msgs:msg/RvizParam.idl
// generated code does not contain a copyright notice

#ifndef RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__STRUCT_H_
#define RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RvizParam in the package rmf_visualization_msgs.
typedef struct rmf_visualization_msgs__msg__RvizParam
{
  rosidl_runtime_c__String map_name;
  int64_t query_duration;
  int64_t start_duration;
} rmf_visualization_msgs__msg__RvizParam;

// Struct for a sequence of rmf_visualization_msgs__msg__RvizParam.
typedef struct rmf_visualization_msgs__msg__RvizParam__Sequence
{
  rmf_visualization_msgs__msg__RvizParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_visualization_msgs__msg__RvizParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__STRUCT_H_
