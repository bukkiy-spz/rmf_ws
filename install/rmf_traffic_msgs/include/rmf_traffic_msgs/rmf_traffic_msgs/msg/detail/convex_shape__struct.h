// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ConvexShape.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
/**
  * A 2D box or circle shape reference.
 */
enum
{
  rmf_traffic_msgs__msg__ConvexShape__NONE = 0
};

/// Constant 'BOX'.
enum
{
  rmf_traffic_msgs__msg__ConvexShape__BOX = 1
};

/// Constant 'CIRCLE'.
enum
{
  rmf_traffic_msgs__msg__ConvexShape__CIRCLE = 2
};

/// Struct defined in msg/ConvexShape in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ConvexShape
{
  /// Choose between the BOX and CIRCLE types
  uint8_t type;
  /// Specify the index of the shape. We support 256 different convex shapes per
  /// context.
  uint8_t index;
} rmf_traffic_msgs__msg__ConvexShape;

// Struct for a sequence of rmf_traffic_msgs__msg__ConvexShape.
typedef struct rmf_traffic_msgs__msg__ConvexShape__Sequence
{
  rmf_traffic_msgs__msg__ConvexShape * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ConvexShape__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE__STRUCT_H_
