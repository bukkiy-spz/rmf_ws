// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ShapeContext.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'convex_shapes'
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__struct.h"

/// Struct defined in msg/ShapeContext in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ShapeContext
{
  /// The convex shape descriptions that are available
  rmf_traffic_msgs__msg__ConvexShapeContext convex_shapes;
} rmf_traffic_msgs__msg__ShapeContext;

// Struct for a sequence of rmf_traffic_msgs__msg__ShapeContext.
typedef struct rmf_traffic_msgs__msg__ShapeContext__Sequence
{
  rmf_traffic_msgs__msg__ShapeContext * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ShapeContext__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__STRUCT_H_
