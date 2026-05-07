// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ItinerarySet.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_SET__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'itinerary'
#include "rmf_traffic_msgs/msg/detail/route__struct.h"

/// Struct defined in msg/ItinerarySet in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ItinerarySet
{
  /// ID of the schedule participant whose itinerary is being set
  uint64_t participant;
  /// ID of this plan
  uint64_t plan;
  /// The new itinerary for this participant
  rmf_traffic_msgs__msg__Route__Sequence itinerary;
  /// The storage location for these routes
  uint64_t storage_base;
  uint64_t itinerary_version;
} rmf_traffic_msgs__msg__ItinerarySet;

// Struct for a sequence of rmf_traffic_msgs__msg__ItinerarySet.
typedef struct rmf_traffic_msgs__msg__ItinerarySet__Sequence
{
  rmf_traffic_msgs__msg__ItinerarySet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ItinerarySet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_SET__STRUCT_H_
