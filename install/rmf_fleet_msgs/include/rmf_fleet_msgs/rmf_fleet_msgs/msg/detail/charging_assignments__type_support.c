// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/ChargingAssignments.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/charging_assignments__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/charging_assignments__functions.h"
#include "rmf_fleet_msgs/msg/detail/charging_assignments__struct.h"


// Include directives for member types
// Member `fleet_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `assignments`
#include "rmf_fleet_msgs/msg/charging_assignment.h"
// Member `assignments`
#include "rmf_fleet_msgs/msg/detail/charging_assignment__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__ChargingAssignments__init(message_memory);
}

void rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__ChargingAssignments__fini(message_memory);
}

size_t rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__size_function__ChargingAssignments__assignments(
  const void * untyped_member)
{
  const rmf_fleet_msgs__msg__ChargingAssignment__Sequence * member =
    (const rmf_fleet_msgs__msg__ChargingAssignment__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__get_const_function__ChargingAssignments__assignments(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__msg__ChargingAssignment__Sequence * member =
    (const rmf_fleet_msgs__msg__ChargingAssignment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__get_function__ChargingAssignments__assignments(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__msg__ChargingAssignment__Sequence * member =
    (rmf_fleet_msgs__msg__ChargingAssignment__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__fetch_function__ChargingAssignments__assignments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_fleet_msgs__msg__ChargingAssignment * item =
    ((const rmf_fleet_msgs__msg__ChargingAssignment *)
    rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__get_const_function__ChargingAssignments__assignments(untyped_member, index));
  rmf_fleet_msgs__msg__ChargingAssignment * value =
    (rmf_fleet_msgs__msg__ChargingAssignment *)(untyped_value);
  *value = *item;
}

void rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__assign_function__ChargingAssignments__assignments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_fleet_msgs__msg__ChargingAssignment * item =
    ((rmf_fleet_msgs__msg__ChargingAssignment *)
    rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__get_function__ChargingAssignments__assignments(untyped_member, index));
  const rmf_fleet_msgs__msg__ChargingAssignment * value =
    (const rmf_fleet_msgs__msg__ChargingAssignment *)(untyped_value);
  *item = *value;
}

bool rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__resize_function__ChargingAssignments__assignments(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__msg__ChargingAssignment__Sequence * member =
    (rmf_fleet_msgs__msg__ChargingAssignment__Sequence *)(untyped_member);
  rmf_fleet_msgs__msg__ChargingAssignment__Sequence__fini(member);
  return rmf_fleet_msgs__msg__ChargingAssignment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_message_member_array[2] = {
  {
    "fleet_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__ChargingAssignments, fleet_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "assignments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__ChargingAssignments, assignments),  // bytes offset in struct
    NULL,  // default value
    rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__size_function__ChargingAssignments__assignments,  // size() function pointer
    rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__get_const_function__ChargingAssignments__assignments,  // get_const(index) function pointer
    rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__get_function__ChargingAssignments__assignments,  // get(index) function pointer
    rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__fetch_function__ChargingAssignments__assignments,  // fetch(index, &value) function pointer
    rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__assign_function__ChargingAssignments__assignments,  // assign(index, value) function pointer
    rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__resize_function__ChargingAssignments__assignments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "ChargingAssignments",  // message name
  2,  // number of fields
  sizeof(rmf_fleet_msgs__msg__ChargingAssignments),
  rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_message_member_array,  // message members
  rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, ChargingAssignments)() {
  rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, ChargingAssignment)();
  if (!rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__msg__ChargingAssignments__rosidl_typesupport_introspection_c__ChargingAssignments_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
