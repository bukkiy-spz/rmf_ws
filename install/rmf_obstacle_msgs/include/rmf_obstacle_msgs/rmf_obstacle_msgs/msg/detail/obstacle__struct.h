// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_obstacle_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTION_ADD'.
/**
  * or modify
 */
enum
{
  rmf_obstacle_msgs__msg__Obstacle__ACTION_ADD = 1l
};

/// Constant 'ACTION_DELETE'.
enum
{
  rmf_obstacle_msgs__msg__Obstacle__ACTION_DELETE = 2l
};

/// Constant 'ACTION_DELETEALL'.
enum
{
  rmf_obstacle_msgs__msg__Obstacle__ACTION_DELETEALL = 3l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'source'
// Member 'level_name'
// Member 'classification'
#include "rosidl_runtime_c/string.h"
// Member 'bbox'
#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/Obstacle in the package rmf_obstacle_msgs.
/**
  * All measurements should be w.r.t. header.frame_id
 */
typedef struct rmf_obstacle_msgs__msg__Obstacle
{
  /// Standard header
  std_msgs__msg__Header header;
  /// An id for this specific message. This will be used for deletion.
  int32_t id;
  /// Unique identifier of the publisher of this message.
  rosidl_runtime_c__String source;
  /// The level on which this obstacle exists
  rosidl_runtime_c__String level_name;
  /// A classification label for the detected obstacle. (human, chair, etc)
  rosidl_runtime_c__String classification;
  /// Bounding box of the obstacle
  rmf_obstacle_msgs__msg__BoundingBox3D bbox;
  /// 3D obstacle data that can be deserialized into an octree.
  /// Resolution (in m) of the smallest octree node.
  double data_resolution;
  /// Binary serialization of the obstacle octree
  rosidl_runtime_c__int8__Sequence data;
  /// The expected lifetime of the obstacle
  builtin_interfaces__msg__Duration lifetime;
  /// Whether to add or delete the obstacle of the id provided
  int32_t action;
} rmf_obstacle_msgs__msg__Obstacle;

// Struct for a sequence of rmf_obstacle_msgs__msg__Obstacle.
typedef struct rmf_obstacle_msgs__msg__Obstacle__Sequence
{
  rmf_obstacle_msgs__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_obstacle_msgs__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
