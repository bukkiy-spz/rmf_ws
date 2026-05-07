// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/TrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrajectoryWaypoint in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__TrajectoryWaypoint
{
  /// The time when this Waypoint should be reached
  int64_t time;
  /// This is a 2D homogeneous position which mixes 2 translation coordinates (x, y)
  /// with 1 rotation coordinate (yaw).
  ///
  /// The position of this Waypoint
  double position[3];
  /// This is a 2D homogeneous screw velocity with 2 translational components (x, y)
  /// and 1 rotational component (yaw).
  ///
  /// The velocity that this vehicle should have when it reaches this Waypoint
  double velocity[3];
} rmf_traffic_msgs__msg__TrajectoryWaypoint;

// Struct for a sequence of rmf_traffic_msgs__msg__TrajectoryWaypoint.
typedef struct rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence
{
  rmf_traffic_msgs__msg__TrajectoryWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__STRUCT_H_
