// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/TrafficDependency.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrafficDependency in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__TrafficDependency
{
  uint64_t dependent_checkpoint;
  uint64_t on_participant;
  uint64_t on_plan;
  uint64_t on_route;
  uint64_t on_checkpoint;
} rmf_traffic_msgs__msg__TrafficDependency;

// Struct for a sequence of rmf_traffic_msgs__msg__TrafficDependency.
typedef struct rmf_traffic_msgs__msg__TrafficDependency__Sequence
{
  rmf_traffic_msgs__msg__TrafficDependency * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__TrafficDependency__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__STRUCT_H_
