// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationRefusal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REFUSAL__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REFUSAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NegotiationRefusal in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationRefusal
{
  /// The ID of the conflict negotiation that is being refused
  uint64_t conflict_version;
} rmf_traffic_msgs__msg__NegotiationRefusal;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationRefusal.
typedef struct rmf_traffic_msgs__msg__NegotiationRefusal__Sequence
{
  rmf_traffic_msgs__msg__NegotiationRefusal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationRefusal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REFUSAL__STRUCT_H_
