// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ConvexShapeContext.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__functions.h"
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__struct.h"


// Include directives for member types
// Member `circles`
#include "rmf_traffic_msgs/msg/circle.h"
// Member `circles`
#include "rmf_traffic_msgs/msg/detail/circle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ConvexShapeContext__init(message_memory);
}

void rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ConvexShapeContext__fini(message_memory);
}

size_t rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__size_function__ConvexShapeContext__circles(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__Circle__Sequence * member =
    (const rmf_traffic_msgs__msg__Circle__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__get_const_function__ConvexShapeContext__circles(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__Circle__Sequence * member =
    (const rmf_traffic_msgs__msg__Circle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__get_function__ConvexShapeContext__circles(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__Circle__Sequence * member =
    (rmf_traffic_msgs__msg__Circle__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__fetch_function__ConvexShapeContext__circles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__Circle * item =
    ((const rmf_traffic_msgs__msg__Circle *)
    rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__get_const_function__ConvexShapeContext__circles(untyped_member, index));
  rmf_traffic_msgs__msg__Circle * value =
    (rmf_traffic_msgs__msg__Circle *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__assign_function__ConvexShapeContext__circles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__Circle * item =
    ((rmf_traffic_msgs__msg__Circle *)
    rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__get_function__ConvexShapeContext__circles(untyped_member, index));
  const rmf_traffic_msgs__msg__Circle * value =
    (const rmf_traffic_msgs__msg__Circle *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__resize_function__ConvexShapeContext__circles(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__Circle__Sequence * member =
    (rmf_traffic_msgs__msg__Circle__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__Circle__Sequence__fini(member);
  return rmf_traffic_msgs__msg__Circle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_message_member_array[1] = {
  {
    "circles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ConvexShapeContext, circles),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__size_function__ConvexShapeContext__circles,  // size() function pointer
    rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__get_const_function__ConvexShapeContext__circles,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__get_function__ConvexShapeContext__circles,  // get(index) function pointer
    rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__fetch_function__ConvexShapeContext__circles,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__assign_function__ConvexShapeContext__circles,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__resize_function__ConvexShapeContext__circles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ConvexShapeContext",  // message name
  1,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ConvexShapeContext),
  rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_message_member_array,  // message members
  rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ConvexShapeContext)() {
  rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, Circle)();
  if (!rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__ConvexShapeContext__rosidl_typesupport_introspection_c__ConvexShapeContext_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
