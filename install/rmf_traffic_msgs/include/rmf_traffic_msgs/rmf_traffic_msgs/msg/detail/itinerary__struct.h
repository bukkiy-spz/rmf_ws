// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Itinerary.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY__STRUCT_H_

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

/// Struct defined in msg/Itinerary in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__Itinerary
{
  rmf_traffic_msgs__msg__Route__Sequence routes;
} rmf_traffic_msgs__msg__Itinerary;

// Struct for a sequence of rmf_traffic_msgs__msg__Itinerary.
typedef struct rmf_traffic_msgs__msg__Itinerary__Sequence
{
  rmf_traffic_msgs__msg__Itinerary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Itinerary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY__STRUCT_H_
