// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Participant.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'description'
#include "rmf_traffic_msgs/msg/detail/participant_description__struct.h"

/// Struct defined in msg/Participant in the package rmf_traffic_msgs.
/**
  * The unique ID for this participant
 */
typedef struct rmf_traffic_msgs__msg__Participant
{
  uint64_t id;
  /// Description of this participant (name, shape, etc.)
  rmf_traffic_msgs__msg__ParticipantDescription description;
} rmf_traffic_msgs__msg__Participant;

// Struct for a sequence of rmf_traffic_msgs__msg__Participant.
typedef struct rmf_traffic_msgs__msg__Participant__Sequence
{
  rmf_traffic_msgs__msg__Participant * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Participant__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__STRUCT_H_
