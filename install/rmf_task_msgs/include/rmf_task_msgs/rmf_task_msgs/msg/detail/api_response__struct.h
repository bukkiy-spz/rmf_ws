// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/ApiResponse.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__API_RESPONSE__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__API_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_UNINITIALIZED'.
/**
  * This response type means the message was not initialized correctly and will
  * result in an error
 */
enum
{
  rmf_task_msgs__msg__ApiResponse__TYPE_UNINITIALIZED = 0
};

/// Constant 'TYPE_ACKNOWLEDGE'.
/**
  * This response type means the request is being acknowledged which will grant it
  * some extra time before the API Node has its response timeout. This can be used
  * to extend the lifetime of a request which may take a long time to complete.
  * Each time an acknowledgment is sent the lifetime will be extended.
 */
enum
{
  rmf_task_msgs__msg__ApiResponse__TYPE_ACKNOWLEDGE = 1
};

/// Constant 'TYPE_RESPONDING'.
/**
  * This response type means this message is responding to the request and
  * therefore fulfilling the request.
 */
enum
{
  rmf_task_msgs__msg__ApiResponse__TYPE_RESPONDING = 2
};

// Include directives for member types
// Member 'json_msg'
// Member 'request_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ApiResponse in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__ApiResponse
{
  /// The type of response this is: Acknowledging or Responding
  /// (Uninitialized will result in the API Node issuing an error response)
  uint8_t type;
  /// The JSON message that represents the response
  rosidl_runtime_c__String json_msg;
  /// The unique ID of the request that this response is targeted at
  rosidl_runtime_c__String request_id;
} rmf_task_msgs__msg__ApiResponse;

// Struct for a sequence of rmf_task_msgs__msg__ApiResponse.
typedef struct rmf_task_msgs__msg__ApiResponse__Sequence
{
  rmf_task_msgs__msg__ApiResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__ApiResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__API_RESPONSE__STRUCT_H_
