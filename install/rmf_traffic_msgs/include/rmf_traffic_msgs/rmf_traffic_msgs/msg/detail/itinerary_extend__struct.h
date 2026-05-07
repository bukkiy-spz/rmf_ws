// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ItineraryExtend.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'routes'
#include "rmf_traffic_msgs/msg/detail/route__struct.h"

/// Struct defined in msg/ItineraryExtend in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ItineraryExtend
{
  /// ID of the schedule participant whose itinerary is being extended
  uint64_t participant;
  /// The new routes that are being added to the itinerary
  rmf_traffic_msgs__msg__Route__Sequence routes;
  uint64_t itinerary_version;
} rmf_traffic_msgs__msg__ItineraryExtend;

// Struct for a sequence of rmf_traffic_msgs__msg__ItineraryExtend.
typedef struct rmf_traffic_msgs__msg__ItineraryExtend__Sequence
{
  rmf_traffic_msgs__msg__ItineraryExtend * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ItineraryExtend__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__STRUCT_H_
