// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:msg/AffineImage.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'encoding'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AffineImage in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__msg__AffineImage
{
  rosidl_runtime_c__String name;
  float x_offset;
  float y_offset;
  float yaw;
  float scale;
  rosidl_runtime_c__String encoding;
  rosidl_runtime_c__uint8__Sequence data;
} rmf_building_map_msgs__msg__AffineImage;

// Struct for a sequence of rmf_building_map_msgs__msg__AffineImage.
typedef struct rmf_building_map_msgs__msg__AffineImage__Sequence
{
  rmf_building_map_msgs__msg__AffineImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__msg__AffineImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__STRUCT_H_
