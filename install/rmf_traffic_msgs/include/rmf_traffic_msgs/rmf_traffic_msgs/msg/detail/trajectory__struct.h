// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__struct.h"

/// Struct defined in msg/Trajectory in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__Trajectory
{
  /// A Trajectory is a container of Waypoints. The standard way to interpret the
  /// motion of a Trajectory is as a piecewise cubic spline connecting the
  /// waypoints.
  rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence waypoints;
} rmf_traffic_msgs__msg__Trajectory;

// Struct for a sequence of rmf_traffic_msgs__msg__Trajectory.
typedef struct rmf_traffic_msgs__msg__Trajectory__Sequence
{
  rmf_traffic_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
