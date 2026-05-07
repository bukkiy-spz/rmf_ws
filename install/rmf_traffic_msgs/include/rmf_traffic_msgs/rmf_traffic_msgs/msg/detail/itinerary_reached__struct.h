// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ItineraryReached.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reached_checkpoints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ItineraryReached in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ItineraryReached
{
  uint64_t participant;
  uint64_t plan;
  rosidl_runtime_c__uint64__Sequence reached_checkpoints;
  uint64_t progress_version;
} rmf_traffic_msgs__msg__ItineraryReached;

// Struct for a sequence of rmf_traffic_msgs__msg__ItineraryReached.
typedef struct rmf_traffic_msgs__msg__ItineraryReached__Sequence
{
  rmf_traffic_msgs__msg__ItineraryReached * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ItineraryReached__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__STRUCT_H_
