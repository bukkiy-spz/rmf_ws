// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Space.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'shape'
#include "rmf_traffic_msgs/msg/detail/shape__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/Space in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__Space
{
  /// The shape of this space
  rmf_traffic_msgs__msg__Shape shape;
  /// The pose of this space
  geometry_msgs__msg__Pose2D pose;
} rmf_traffic_msgs__msg__Space;

// Struct for a sequence of rmf_traffic_msgs__msg__Space.
typedef struct rmf_traffic_msgs__msg__Space__Sequence
{
  rmf_traffic_msgs__msg__Space * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Space__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__STRUCT_H_
