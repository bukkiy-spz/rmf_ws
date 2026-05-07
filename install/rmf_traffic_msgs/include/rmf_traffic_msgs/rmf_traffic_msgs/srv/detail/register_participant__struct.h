// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:srv/RegisterParticipant.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__STRUCT_H_

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

/// Struct defined in srv/RegisterParticipant in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__srv__RegisterParticipant_Request
{
  /// The description of the participant that is being registered
  rmf_traffic_msgs__msg__ParticipantDescription description;
} rmf_traffic_msgs__srv__RegisterParticipant_Request;

// Struct for a sequence of rmf_traffic_msgs__srv__RegisterParticipant_Request.
typedef struct rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence
{
  rmf_traffic_msgs__srv__RegisterParticipant_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RegisterParticipant in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__srv__RegisterParticipant_Response
{
  /// The ID given to the registered participant
  uint64_t participant_id;
  /// The last itinerary version that this participant had
  uint64_t last_itinerary_version;
  /// The last Route ID that this participant had
  uint64_t last_plan_id;
  /// The next storage base for this participant to use
  uint64_t next_storage_base;
  /// A string to notify about exceptional issues that came up while trying to
  /// fulfill the request
  rosidl_runtime_c__String error;
} rmf_traffic_msgs__srv__RegisterParticipant_Response;

// Struct for a sequence of rmf_traffic_msgs__srv__RegisterParticipant_Response.
typedef struct rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence
{
  rmf_traffic_msgs__srv__RegisterParticipant_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__STRUCT_H_
