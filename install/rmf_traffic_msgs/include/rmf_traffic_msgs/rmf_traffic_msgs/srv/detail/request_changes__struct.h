// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:srv/RequestChanges.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REQUEST_CHANGES__STRUCT_H_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REQUEST_CHANGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RequestChanges in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__srv__RequestChanges_Request
{
  uint64_t query_id;
  /// Version to request changes from; ignored if full_update is true
  uint64_t version;
  /// Request a full update rather than from a specific version
  bool full_update;
} rmf_traffic_msgs__srv__RequestChanges_Request;

// Struct for a sequence of rmf_traffic_msgs__srv__RequestChanges_Request.
typedef struct rmf_traffic_msgs__srv__RequestChanges_Request__Sequence
{
  rmf_traffic_msgs__srv__RequestChanges_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__srv__RequestChanges_Request__Sequence;


// Constants defined in the message

/// Constant 'REQUEST_ACCEPTED'.
enum
{
  rmf_traffic_msgs__srv__RequestChanges_Response__REQUEST_ACCEPTED = 1
};

/// Constant 'UNKNOWN_QUERY_ID'.
enum
{
  rmf_traffic_msgs__srv__RequestChanges_Response__UNKNOWN_QUERY_ID = 2
};

/// Constant 'ERROR'.
enum
{
  rmf_traffic_msgs__srv__RequestChanges_Response__ERROR = 3
};

// Include directives for member types
// Member 'node_id'
#include "rmf_traffic_msgs/msg/detail/schedule_identity__struct.h"
// Member 'error'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RequestChanges in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__srv__RequestChanges_Response
{
  /// Response to the request
  rmf_traffic_msgs__msg__ScheduleIdentity node_id;
  uint8_t result;
  rosidl_runtime_c__String error;
} rmf_traffic_msgs__srv__RequestChanges_Response;

// Struct for a sequence of rmf_traffic_msgs__srv__RequestChanges_Response.
typedef struct rmf_traffic_msgs__srv__RequestChanges_Response__Sequence
{
  rmf_traffic_msgs__srv__RequestChanges_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__srv__RequestChanges_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REQUEST_CHANGES__STRUCT_H_
