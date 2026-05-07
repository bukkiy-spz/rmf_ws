// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_scheduler_msgs:srv/CancelAll.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_ALL__STRUCT_H_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_ALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CancelAll in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__srv__CancelAll_Request
{
  rosidl_runtime_c__String group;
} rmf_scheduler_msgs__srv__CancelAll_Request;

// Struct for a sequence of rmf_scheduler_msgs__srv__CancelAll_Request.
typedef struct rmf_scheduler_msgs__srv__CancelAll_Request__Sequence
{
  rmf_scheduler_msgs__srv__CancelAll_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__srv__CancelAll_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CancelAll in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__srv__CancelAll_Response
{
  /// Confirmation that the schedule is successfully registered
  bool success;
  /// If success is false, this provides a reason for the failure.
  rosidl_runtime_c__String message;
} rmf_scheduler_msgs__srv__CancelAll_Response;

// Struct for a sequence of rmf_scheduler_msgs__srv__CancelAll_Response.
typedef struct rmf_scheduler_msgs__srv__CancelAll_Response__Sequence
{
  rmf_scheduler_msgs__srv__CancelAll_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__srv__CancelAll_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_ALL__STRUCT_H_
