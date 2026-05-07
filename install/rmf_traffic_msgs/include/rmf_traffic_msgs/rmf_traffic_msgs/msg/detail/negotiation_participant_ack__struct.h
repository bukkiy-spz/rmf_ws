// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationParticipantAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NegotiationParticipantAck in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationParticipantAck
{
  /// The participant that is acknowledging
  uint64_t participant;
  /// Whether this participant will be updating
  bool updating;
  /// The itinerary version that will provide the update to
  /// conform to the negotiation result
  uint64_t itinerary_version;
} rmf_traffic_msgs__msg__NegotiationParticipantAck;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationParticipantAck.
typedef struct rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence
{
  rmf_traffic_msgs__msg__NegotiationParticipantAck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__STRUCT_H_
