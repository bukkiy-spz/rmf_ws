// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ParticipantDescription.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RX_INVALID'.
enum
{
  rmf_traffic_msgs__msg__ParticipantDescription__RX_INVALID = 0
};

/// Constant 'RX_UNRESPONSIVE'.
enum
{
  rmf_traffic_msgs__msg__ParticipantDescription__RX_UNRESPONSIVE = 1
};

/// Constant 'RX_RESPONSIVE'.
enum
{
  rmf_traffic_msgs__msg__ParticipantDescription__RX_RESPONSIVE = 2
};

// Include directives for member types
// Member 'name'
// Member 'owner'
#include "rosidl_runtime_c/string.h"
// Member 'profile'
#include "rmf_traffic_msgs/msg/detail/profile__struct.h"

/// Struct defined in msg/ParticipantDescription in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ParticipantDescription
{
  /// Name of the participant
  rosidl_runtime_c__String name;
  /// Owner of the participant (e.g. fleet name)
  rosidl_runtime_c__String owner;
  /// Whether or not this participant will automatically respond to conflicts
  uint8_t responsiveness;
  /// The physical profile of this Participant
  rmf_traffic_msgs__msg__Profile profile;
} rmf_traffic_msgs__msg__ParticipantDescription;

// Struct for a sequence of rmf_traffic_msgs__msg__ParticipantDescription.
typedef struct rmf_traffic_msgs__msg__ParticipantDescription__Sequence
{
  rmf_traffic_msgs__msg__ParticipantDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ParticipantDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__STRUCT_H_
