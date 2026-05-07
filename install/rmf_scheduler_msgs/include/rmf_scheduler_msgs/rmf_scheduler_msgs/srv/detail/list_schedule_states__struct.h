// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_scheduler_msgs:srv/ListScheduleStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULE_STATES__STRUCT_H_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULE_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListScheduleStates in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__srv__ListScheduleStates_Request
{
  /// unix time in seconds
  int64_t modified_after;
} rmf_scheduler_msgs__srv__ListScheduleStates_Request;

// Struct for a sequence of rmf_scheduler_msgs__srv__ListScheduleStates_Request.
typedef struct rmf_scheduler_msgs__srv__ListScheduleStates_Request__Sequence
{
  rmf_scheduler_msgs__srv__ListScheduleStates_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__srv__ListScheduleStates_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'schedules'
#include "rmf_scheduler_msgs/msg/detail/schedule_state__struct.h"

/// Struct defined in srv/ListScheduleStates in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__srv__ListScheduleStates_Response
{
  /// Confirmation that the trigger is successfully cancelled.
  bool success;
  /// If success is false, this provides a reason for the failure.
  rosidl_runtime_c__String message;
  rmf_scheduler_msgs__msg__ScheduleState__Sequence schedules;
} rmf_scheduler_msgs__srv__ListScheduleStates_Response;

// Struct for a sequence of rmf_scheduler_msgs__srv__ListScheduleStates_Response.
typedef struct rmf_scheduler_msgs__srv__ListScheduleStates_Response__Sequence
{
  rmf_scheduler_msgs__srv__ListScheduleStates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__srv__ListScheduleStates_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULE_STATES__STRUCT_H_
