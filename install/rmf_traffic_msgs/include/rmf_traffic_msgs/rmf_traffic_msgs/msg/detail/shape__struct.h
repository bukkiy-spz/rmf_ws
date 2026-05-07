// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE__STRUCT_H_

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
  * A 2D shape reference.
 */
enum
{
  rmf_traffic_msgs__msg__Shape__NONE = 0
};

/// Constant 'BOX'.
enum
{
  rmf_traffic_msgs__msg__Shape__BOX = 1
};

/// Constant 'CIRCLE'.
enum
{
  rmf_traffic_msgs__msg__Shape__CIRCLE = 2
};

/// Struct defined in msg/Shape in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__Shape
{
  /// TODO(MXG): Add support for the SimplePolygon class
  /// uint8 SIMPLE_POLYGON=3
  /// Choose between the BOX and CIRCLE types
  uint8_t type;
  /// Specify the index of the shape. We support 256 different convex shapes per
  /// trajectory. If more shapes are needed than that, then the trajectory must be
  /// split into more trajectories.
  uint8_t index;
} rmf_traffic_msgs__msg__Shape;

// Struct for a sequence of rmf_traffic_msgs__msg__Shape.
typedef struct rmf_traffic_msgs__msg__Shape__Sequence
{
  rmf_traffic_msgs__msg__Shape * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Shape__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE__STRUCT_H_
