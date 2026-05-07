// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "rosidl_runtime_c/string.h"
// Member 'trajectory'
#include "rmf_traffic_msgs/msg/detail/trajectory__struct.h"
// Member 'checkpoints'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'dependencies'
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__struct.h"

/// Struct defined in msg/Route in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__Route
{
  rosidl_runtime_c__String map;
  rmf_traffic_msgs__msg__Trajectory trajectory;
  rosidl_runtime_c__uint64__Sequence checkpoints;
  rmf_traffic_msgs__msg__TrafficDependency__Sequence dependencies;
} rmf_traffic_msgs__msg__Route;

// Struct for a sequence of rmf_traffic_msgs__msg__Route.
typedef struct rmf_traffic_msgs__msg__Route__Sequence
{
  rmf_traffic_msgs__msg__Route * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Route__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
