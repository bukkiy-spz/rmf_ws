// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Profile.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'footprint'
// Member 'vicinity'
#include "rmf_traffic_msgs/msg/detail/convex_shape__struct.h"
// Member 'shape_context'
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__struct.h"

/// Struct defined in msg/Profile in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__Profile
{
  /// The shape that specifies the footprint of a schedule participant
  rmf_traffic_msgs__msg__ConvexShape footprint;
  /// The shape that specifies the vicinity around a schedule participant
  rmf_traffic_msgs__msg__ConvexShape vicinity;
  /// The buffer that contains the shape descriptions
  rmf_traffic_msgs__msg__ConvexShapeContext shape_context;
} rmf_traffic_msgs__msg__Profile;

// Struct for a sequence of rmf_traffic_msgs__msg__Profile.
typedef struct rmf_traffic_msgs__msg__Profile__Sequence
{
  rmf_traffic_msgs__msg__Profile * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Profile__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__STRUCT_H_
