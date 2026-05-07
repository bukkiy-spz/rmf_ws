// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_ingestor_msgs:msg/IngestorRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__STRUCT_H_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'request_guid'
// Member 'target_guid'
// Member 'transporter_type'
#include "rosidl_runtime_c/string.h"
// Member 'items'
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.h"

/// Struct defined in msg/IngestorRequest in the package rmf_ingestor_msgs.
typedef struct rmf_ingestor_msgs__msg__IngestorRequest
{
  builtin_interfaces__msg__Time time;
  /// A unique ID for this request
  rosidl_runtime_c__String request_guid;
  /// The unique name of the ingestor that this request is aimed at
  rosidl_runtime_c__String target_guid;
  /// below are custom workcell message fields
  rosidl_runtime_c__String transporter_type;
  rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence items;
} rmf_ingestor_msgs__msg__IngestorRequest;

// Struct for a sequence of rmf_ingestor_msgs__msg__IngestorRequest.
typedef struct rmf_ingestor_msgs__msg__IngestorRequest__Sequence
{
  rmf_ingestor_msgs__msg__IngestorRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_ingestor_msgs__msg__IngestorRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__STRUCT_H_
