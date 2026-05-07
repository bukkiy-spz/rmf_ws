// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ScheduleQueries.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/schedule_queries__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/schedule_queries__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_queries__struct.h"


// Include directives for member types
// Member `node_id`
#include "rmf_traffic_msgs/msg/schedule_identity.h"
// Member `node_id`
#include "rmf_traffic_msgs/msg/detail/schedule_identity__rosidl_typesupport_introspection_c.h"
// Member `queries`
#include "rmf_traffic_msgs/msg/schedule_query.h"
// Member `queries`
#include "rmf_traffic_msgs/msg/detail/schedule_query__rosidl_typesupport_introspection_c.h"
// Member `query_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ScheduleQueries__init(message_memory);
}

void rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ScheduleQueries__fini(message_memory);
}

size_t rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__size_function__ScheduleQueries__queries(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__ScheduleQuery__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleQuery__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_const_function__ScheduleQueries__queries(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__ScheduleQuery__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleQuery__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_function__ScheduleQueries__queries(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__ScheduleQuery__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleQuery__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__fetch_function__ScheduleQueries__queries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__ScheduleQuery * item =
    ((const rmf_traffic_msgs__msg__ScheduleQuery *)
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_const_function__ScheduleQueries__queries(untyped_member, index));
  rmf_traffic_msgs__msg__ScheduleQuery * value =
    (rmf_traffic_msgs__msg__ScheduleQuery *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__assign_function__ScheduleQueries__queries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__ScheduleQuery * item =
    ((rmf_traffic_msgs__msg__ScheduleQuery *)
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_function__ScheduleQueries__queries(untyped_member, index));
  const rmf_traffic_msgs__msg__ScheduleQuery * value =
    (const rmf_traffic_msgs__msg__ScheduleQuery *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__resize_function__ScheduleQueries__queries(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__ScheduleQuery__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleQuery__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__ScheduleQuery__Sequence__fini(member);
  return rmf_traffic_msgs__msg__ScheduleQuery__Sequence__init(member, size);
}

size_t rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__size_function__ScheduleQueries__query_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_const_function__ScheduleQueries__query_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_function__ScheduleQueries__query_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__fetch_function__ScheduleQueries__query_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_const_function__ScheduleQueries__query_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__assign_function__ScheduleQueries__query_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_function__ScheduleQueries__query_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__resize_function__ScheduleQueries__query_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_member_array[3] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleQueries, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "queries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleQueries, queries),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__size_function__ScheduleQueries__queries,  // size() function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_const_function__ScheduleQueries__queries,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_function__ScheduleQueries__queries,  // get(index) function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__fetch_function__ScheduleQueries__queries,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__assign_function__ScheduleQueries__queries,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__resize_function__ScheduleQueries__queries  // resize(index) function pointer
  },
  {
    "query_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleQueries, query_ids),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__size_function__ScheduleQueries__query_ids,  // size() function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_const_function__ScheduleQueries__query_ids,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__get_function__ScheduleQueries__query_ids,  // get(index) function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__fetch_function__ScheduleQueries__query_ids,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__assign_function__ScheduleQueries__query_ids,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__resize_function__ScheduleQueries__query_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ScheduleQueries",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ScheduleQueries),
  rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_member_array,  // message members
  rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleQueries)() {
  rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleIdentity)();
  rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleQuery)();
  if (!rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__ScheduleQueries__rosidl_typesupport_introspection_c__ScheduleQueries_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
