// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_obstacle_msgs:msg/BoundingBox3D.idl
// generated code does not contain a copyright notice

#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__STRUCT_H_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/BoundingBox3D in the package rmf_obstacle_msgs.
/**
  * A 3D bounding box
 */
typedef struct rmf_obstacle_msgs__msg__BoundingBox3D
{
  /// The 3D position and orientation of the bounding box center
  geometry_msgs__msg__Pose center;
  /// The total size of the bounding box, in meters, surrounding the object's center
  geometry_msgs__msg__Vector3 size;
} rmf_obstacle_msgs__msg__BoundingBox3D;

// Struct for a sequence of rmf_obstacle_msgs__msg__BoundingBox3D.
typedef struct rmf_obstacle_msgs__msg__BoundingBox3D__Sequence
{
  rmf_obstacle_msgs__msg__BoundingBox3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_obstacle_msgs__msg__BoundingBox3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__STRUCT_H_
