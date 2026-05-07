// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:srv/SubmitTask.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__STRUCT_H_
#define RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'requester'
#include "rosidl_runtime_c/string.h"
// Member 'description'
#include "rmf_task_msgs/msg/detail/task_description__struct.h"

/// Struct defined in srv/SubmitTask in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__SubmitTask_Request
{
  /// Identifier for who is requesting the service
  rosidl_runtime_c__String requester;
  /// desciption of task
  rmf_task_msgs__msg__TaskDescription description;
} rmf_task_msgs__srv__SubmitTask_Request;

// Struct for a sequence of rmf_task_msgs__srv__SubmitTask_Request.
typedef struct rmf_task_msgs__srv__SubmitTask_Request__Sequence
{
  rmf_task_msgs__srv__SubmitTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__SubmitTask_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SubmitTask in the package rmf_task_msgs.
typedef struct rmf_task_msgs__srv__SubmitTask_Response
{
  /// Confirmation that this service call is processed
  bool success;
  /// generated task ID by dispatcher node
  rosidl_runtime_c__String task_id;
  /// This will provide a verbose message regarding task submission
  rosidl_runtime_c__String message;
} rmf_task_msgs__srv__SubmitTask_Response;

// Struct for a sequence of rmf_task_msgs__srv__SubmitTask_Response.
typedef struct rmf_task_msgs__srv__SubmitTask_Response__Sequence
{
  rmf_task_msgs__srv__SubmitTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__srv__SubmitTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__STRUCT_H_
