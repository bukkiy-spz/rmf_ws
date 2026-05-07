// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ConvexShapeContext.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE_CONTEXT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE_CONTEXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'circles'
#include "rmf_traffic_msgs/msg/detail/circle__struct.h"

/// Struct defined in msg/ConvexShapeContext in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ConvexShapeContext
{
  /// Circle descriptions which can be used by the ConvexShape message
  rmf_traffic_msgs__msg__Circle__Sequence circles;
} rmf_traffic_msgs__msg__ConvexShapeContext;

// Struct for a sequence of rmf_traffic_msgs__msg__ConvexShapeContext.
typedef struct rmf_traffic_msgs__msg__ConvexShapeContext__Sequence
{
  rmf_traffic_msgs__msg__ConvexShapeContext * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ConvexShapeContext__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE_CONTEXT__STRUCT_H_
