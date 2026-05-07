// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_scheduler_msgs:srv/ListTriggerStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_scheduler_msgs/srv/detail/list_trigger_states__rosidl_typesupport_introspection_c.h"
#include "rmf_scheduler_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_scheduler_msgs/srv/detail/list_trigger_states__functions.h"
#include "rmf_scheduler_msgs/srv/detail/list_trigger_states__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_scheduler_msgs__srv__ListTriggerStates_Request__init(message_memory);
}

void rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_fini_function(void * message_memory)
{
  rmf_scheduler_msgs__srv__ListTriggerStates_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_message_member_array[1] = {
  {
    "modified_after",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListTriggerStates_Request, modified_after),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_message_members = {
  "rmf_scheduler_msgs__srv",  // message namespace
  "ListTriggerStates_Request",  // message name
  1,  // number of fields
  sizeof(rmf_scheduler_msgs__srv__ListTriggerStates_Request),
  rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_message_member_array,  // message members
  rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_message_type_support_handle = {
  0,
  &rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListTriggerStates_Request)() {
  if (!rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_message_type_support_handle.typesupport_identifier) {
    rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_scheduler_msgs__srv__ListTriggerStates_Request__rosidl_typesupport_introspection_c__ListTriggerStates_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_trigger_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_scheduler_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_trigger_states__functions.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_trigger_states__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `triggers`
#include "rmf_scheduler_msgs/msg/trigger_state.h"
// Member `triggers`
#include "rmf_scheduler_msgs/msg/detail/trigger_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_scheduler_msgs__srv__ListTriggerStates_Response__init(message_memory);
}

void rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_fini_function(void * message_memory)
{
  rmf_scheduler_msgs__srv__ListTriggerStates_Response__fini(message_memory);
}

size_t rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__size_function__ListTriggerStates_Response__triggers(
  const void * untyped_member)
{
  const rmf_scheduler_msgs__msg__TriggerState__Sequence * member =
    (const rmf_scheduler_msgs__msg__TriggerState__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__get_const_function__ListTriggerStates_Response__triggers(
  const void * untyped_member, size_t index)
{
  const rmf_scheduler_msgs__msg__TriggerState__Sequence * member =
    (const rmf_scheduler_msgs__msg__TriggerState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__get_function__ListTriggerStates_Response__triggers(
  void * untyped_member, size_t index)
{
  rmf_scheduler_msgs__msg__TriggerState__Sequence * member =
    (rmf_scheduler_msgs__msg__TriggerState__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__fetch_function__ListTriggerStates_Response__triggers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_scheduler_msgs__msg__TriggerState * item =
    ((const rmf_scheduler_msgs__msg__TriggerState *)
    rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__get_const_function__ListTriggerStates_Response__triggers(untyped_member, index));
  rmf_scheduler_msgs__msg__TriggerState * value =
    (rmf_scheduler_msgs__msg__TriggerState *)(untyped_value);
  *value = *item;
}

void rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__assign_function__ListTriggerStates_Response__triggers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_scheduler_msgs__msg__TriggerState * item =
    ((rmf_scheduler_msgs__msg__TriggerState *)
    rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__get_function__ListTriggerStates_Response__triggers(untyped_member, index));
  const rmf_scheduler_msgs__msg__TriggerState * value =
    (const rmf_scheduler_msgs__msg__TriggerState *)(untyped_value);
  *item = *value;
}

bool rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__resize_function__ListTriggerStates_Response__triggers(
  void * untyped_member, size_t size)
{
  rmf_scheduler_msgs__msg__TriggerState__Sequence * member =
    (rmf_scheduler_msgs__msg__TriggerState__Sequence *)(untyped_member);
  rmf_scheduler_msgs__msg__TriggerState__Sequence__fini(member);
  return rmf_scheduler_msgs__msg__TriggerState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListTriggerStates_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListTriggerStates_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "triggers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__srv__ListTriggerStates_Response, triggers),  // bytes offset in struct
    NULL,  // default value
    rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__size_function__ListTriggerStates_Response__triggers,  // size() function pointer
    rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__get_const_function__ListTriggerStates_Response__triggers,  // get_const(index) function pointer
    rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__get_function__ListTriggerStates_Response__triggers,  // get(index) function pointer
    rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__fetch_function__ListTriggerStates_Response__triggers,  // fetch(index, &value) function pointer
    rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__assign_function__ListTriggerStates_Response__triggers,  // assign(index, value) function pointer
    rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__resize_function__ListTriggerStates_Response__triggers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_members = {
  "rmf_scheduler_msgs__srv",  // message namespace
  "ListTriggerStates_Response",  // message name
  3,  // number of fields
  sizeof(rmf_scheduler_msgs__srv__ListTriggerStates_Response),
  rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_member_array,  // message members
  rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_type_support_handle = {
  0,
  &rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListTriggerStates_Response)() {
  rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, msg, TriggerState)();
  if (!rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_type_support_handle.typesupport_identifier) {
    rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_scheduler_msgs__srv__ListTriggerStates_Response__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_scheduler_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_scheduler_msgs/srv/detail/list_trigger_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_scheduler_msgs__srv__detail__list_trigger_states__rosidl_typesupport_introspection_c__ListTriggerStates_service_members = {
  "rmf_scheduler_msgs__srv",  // service namespace
  "ListTriggerStates",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rmf_scheduler_msgs__srv__detail__list_trigger_states__rosidl_typesupport_introspection_c__ListTriggerStates_Request_message_type_support_handle,
  NULL  // response message
  // rmf_scheduler_msgs__srv__detail__list_trigger_states__rosidl_typesupport_introspection_c__ListTriggerStates_Response_message_type_support_handle
};

static rosidl_service_type_support_t rmf_scheduler_msgs__srv__detail__list_trigger_states__rosidl_typesupport_introspection_c__ListTriggerStates_service_type_support_handle = {
  0,
  &rmf_scheduler_msgs__srv__detail__list_trigger_states__rosidl_typesupport_introspection_c__ListTriggerStates_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListTriggerStates_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListTriggerStates_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_scheduler_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListTriggerStates)() {
  if (!rmf_scheduler_msgs__srv__detail__list_trigger_states__rosidl_typesupport_introspection_c__ListTriggerStates_service_type_support_handle.typesupport_identifier) {
    rmf_scheduler_msgs__srv__detail__list_trigger_states__rosidl_typesupport_introspection_c__ListTriggerStates_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_scheduler_msgs__srv__detail__list_trigger_states__rosidl_typesupport_introspection_c__ListTriggerStates_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListTriggerStates_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, srv, ListTriggerStates_Response)()->data;
  }

  return &rmf_scheduler_msgs__srv__detail__list_trigger_states__rosidl_typesupport_introspection_c__ListTriggerStates_service_type_support_handle;
}
