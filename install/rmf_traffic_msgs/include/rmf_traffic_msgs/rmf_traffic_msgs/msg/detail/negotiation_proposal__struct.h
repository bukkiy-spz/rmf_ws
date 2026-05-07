// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PROPOSAL__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PROPOSAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'to_accommodate'
#include "rmf_traffic_msgs/msg/detail/negotiation_key__struct.h"
// Member 'itinerary'
#include "rmf_traffic_msgs/msg/detail/route__struct.h"

/// Struct defined in msg/NegotiationProposal in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationProposal
{
  /// The conflict ID that this proposal is targeted at
  uint64_t conflict_version;
  /// The version number for this proposal within the negotiation
  uint64_t proposal_version;
  /// The participant ID that this proposal is coming from
  uint64_t for_participant;
  /// The participant IDs that this proposal is trying to accommodate. As each
  /// participant proposes their ideal itinerary, the other participants in the
  /// conflict will propose itineraries which accommodate it.
  ///
  /// The order of IDs in this dynamic array have important semantic meaning about
  /// which itineraries are being accommodated. For example:
  ///
  /// [] (empty):  This proposal does not accommodate any other participants. This
  ///              is the best possible itinerary for this participant.
  ///
  /// [3]:         This proposal is the best itinerary that can accommodate the
  ///              ideal itinerary of participant 3.
  ///
  /// [3, 7]:      This proposal is the best itinerary for this participant that can
  ///              accommodate both the ideal itinerary of participant 3 and the
  ///              best itinerary of participant 7 that accommodates the ideal
  ///              itinerary of participant 3.
  ///
  /// [3, 7, ...]: This proposal is the best itinerary that can accommodate the
  ///              ideal itinerary of participant 3 and the best itineraries that
  ///              accommodate the best itineraries of the participants that precede
  ///              them in the list, recursively.
  rmf_traffic_msgs__msg__NegotiationKey__Sequence to_accommodate;
  /// The unique ID for the plan that is being proposed
  uint64_t plan_id;
  /// The itinerary that is being proposed for this participant
  rmf_traffic_msgs__msg__Route__Sequence itinerary;
} rmf_traffic_msgs__msg__NegotiationProposal;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationProposal.
typedef struct rmf_traffic_msgs__msg__NegotiationProposal__Sequence
{
  rmf_traffic_msgs__msg__NegotiationProposal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationProposal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PROPOSAL__STRUCT_H_
