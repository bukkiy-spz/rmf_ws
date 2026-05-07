// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Participants.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANTS__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_id'
#include "rmf_traffic_msgs/msg/detail/schedule_identity__struct.h"
// Member 'participants'
#include "rmf_traffic_msgs/msg/detail/participant__struct.h"

/// Struct defined in msg/Participants in the package rmf_traffic_msgs.
/**
  * The version of the schedule node that provided this update
 */
typedef struct rmf_traffic_msgs__msg__Participants
{
  rmf_traffic_msgs__msg__ScheduleIdentity node_id;
  /// A list of participants with their IDs
  rmf_traffic_msgs__msg__Participant__Sequence participants;
} rmf_traffic_msgs__msg__Participants;

// Struct for a sequence of rmf_traffic_msgs__msg__Participants.
typedef struct rmf_traffic_msgs__msg__Participants__Sequence
{
  rmf_traffic_msgs__msg__Participants * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Participants__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANTS__STRUCT_H_
