// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/ApiRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__API_REQUEST__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__API_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'json_msg'
// Member 'request_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ApiRequest in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__ApiRequest
{
  /// The JSON message that represents the request
  rosidl_runtime_c__String json_msg;
  /// The unique ID assigned to this request
  rosidl_runtime_c__String request_id;
} rmf_task_msgs__msg__ApiRequest;

// Struct for a sequence of rmf_task_msgs__msg__ApiRequest.
typedef struct rmf_task_msgs__msg__ApiRequest__Sequence
{
  rmf_task_msgs__msg__ApiRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__ApiRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__API_REQUEST__STRUCT_H_
