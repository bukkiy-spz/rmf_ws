// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_scheduler_msgs:srv/CancelSchedule.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_SCHEDULE__STRUCT_H_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_SCHEDULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CancelSchedule in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__srv__CancelSchedule_Request
{
  rosidl_runtime_c__String name;
  /// Indicate that the schedule is considered finished successfully.
  bool finished;
} rmf_scheduler_msgs__srv__CancelSchedule_Request;

// Struct for a sequence of rmf_scheduler_msgs__srv__CancelSchedule_Request.
typedef struct rmf_scheduler_msgs__srv__CancelSchedule_Request__Sequence
{
  rmf_scheduler_msgs__srv__CancelSchedule_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__srv__CancelSchedule_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CancelSchedule in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__srv__CancelSchedule_Response
{
  /// Confirmation that the schedule is successfully cancelled.
  bool success;
  /// If success is false, this provides a reason for the failure.
  rosidl_runtime_c__String message;
} rmf_scheduler_msgs__srv__CancelSchedule_Response;

// Struct for a sequence of rmf_scheduler_msgs__srv__CancelSchedule_Response.
typedef struct rmf_scheduler_msgs__srv__CancelSchedule_Response__Sequence
{
  rmf_scheduler_msgs__srv__CancelSchedule_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__srv__CancelSchedule_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_SCHEDULE__STRUCT_H_
