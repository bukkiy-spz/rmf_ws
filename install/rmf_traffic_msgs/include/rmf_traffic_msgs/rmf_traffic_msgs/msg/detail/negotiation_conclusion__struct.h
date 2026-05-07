// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationConclusion.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_CONCLUSION__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_CONCLUSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'table'
#include "rmf_traffic_msgs/msg/detail/negotiation_key__struct.h"

/// Struct defined in msg/NegotiationConclusion in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationConclusion
{
  /// The version number assigned to this conflict
  uint64_t conflict_version;
  /// True if the conflict was resolved. False if the negotiation was abandoned.
  bool resolved;
  /// The ID sequence for the negotiation table that was selected
  rmf_traffic_msgs__msg__NegotiationKey__Sequence table;
} rmf_traffic_msgs__msg__NegotiationConclusion;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationConclusion.
typedef struct rmf_traffic_msgs__msg__NegotiationConclusion__Sequence
{
  rmf_traffic_msgs__msg__NegotiationConclusion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationConclusion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_CONCLUSION__STRUCT_H_
