// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_workcell_msgs/msg/detail/workcell_configuration__rosidl_typesupport_introspection_c.h"
#include "rmf_workcell_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_workcell_msgs/msg/detail/workcell_configuration__functions.h"
#include "rmf_workcell_msgs/msg/detail/workcell_configuration__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `guid`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `assets`
#include "rmf_workcell_msgs/msg/asset.h"
// Member `assets`
#include "rmf_workcell_msgs/msg/detail/asset__rosidl_typesupport_introspection_c.h"
// Member `traits`
#include "rmf_workcell_msgs/msg/trait.h"
// Member `traits`
#include "rmf_workcell_msgs/msg/detail/trait__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_workcell_msgs__msg__WorkcellConfiguration__init(message_memory);
}

void rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_fini_function(void * message_memory)
{
  rmf_workcell_msgs__msg__WorkcellConfiguration__fini(message_memory);
}

size_t rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__size_function__WorkcellConfiguration__assets(
  const void * untyped_member)
{
  const rmf_workcell_msgs__msg__Asset__Sequence * member =
    (const rmf_workcell_msgs__msg__Asset__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_const_function__WorkcellConfiguration__assets(
  const void * untyped_member, size_t index)
{
  const rmf_workcell_msgs__msg__Asset__Sequence * member =
    (const rmf_workcell_msgs__msg__Asset__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_function__WorkcellConfiguration__assets(
  void * untyped_member, size_t index)
{
  rmf_workcell_msgs__msg__Asset__Sequence * member =
    (rmf_workcell_msgs__msg__Asset__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__fetch_function__WorkcellConfiguration__assets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_workcell_msgs__msg__Asset * item =
    ((const rmf_workcell_msgs__msg__Asset *)
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_const_function__WorkcellConfiguration__assets(untyped_member, index));
  rmf_workcell_msgs__msg__Asset * value =
    (rmf_workcell_msgs__msg__Asset *)(untyped_value);
  *value = *item;
}

void rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__assign_function__WorkcellConfiguration__assets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_workcell_msgs__msg__Asset * item =
    ((rmf_workcell_msgs__msg__Asset *)
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_function__WorkcellConfiguration__assets(untyped_member, index));
  const rmf_workcell_msgs__msg__Asset * value =
    (const rmf_workcell_msgs__msg__Asset *)(untyped_value);
  *item = *value;
}

bool rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__resize_function__WorkcellConfiguration__assets(
  void * untyped_member, size_t size)
{
  rmf_workcell_msgs__msg__Asset__Sequence * member =
    (rmf_workcell_msgs__msg__Asset__Sequence *)(untyped_member);
  rmf_workcell_msgs__msg__Asset__Sequence__fini(member);
  return rmf_workcell_msgs__msg__Asset__Sequence__init(member, size);
}

size_t rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__size_function__WorkcellConfiguration__traits(
  const void * untyped_member)
{
  const rmf_workcell_msgs__msg__Trait__Sequence * member =
    (const rmf_workcell_msgs__msg__Trait__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_const_function__WorkcellConfiguration__traits(
  const void * untyped_member, size_t index)
{
  const rmf_workcell_msgs__msg__Trait__Sequence * member =
    (const rmf_workcell_msgs__msg__Trait__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_function__WorkcellConfiguration__traits(
  void * untyped_member, size_t index)
{
  rmf_workcell_msgs__msg__Trait__Sequence * member =
    (rmf_workcell_msgs__msg__Trait__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__fetch_function__WorkcellConfiguration__traits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_workcell_msgs__msg__Trait * item =
    ((const rmf_workcell_msgs__msg__Trait *)
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_const_function__WorkcellConfiguration__traits(untyped_member, index));
  rmf_workcell_msgs__msg__Trait * value =
    (rmf_workcell_msgs__msg__Trait *)(untyped_value);
  *value = *item;
}

void rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__assign_function__WorkcellConfiguration__traits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_workcell_msgs__msg__Trait * item =
    ((rmf_workcell_msgs__msg__Trait *)
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_function__WorkcellConfiguration__traits(untyped_member, index));
  const rmf_workcell_msgs__msg__Trait * value =
    (const rmf_workcell_msgs__msg__Trait *)(untyped_value);
  *item = *value;
}

bool rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__resize_function__WorkcellConfiguration__traits(
  void * untyped_member, size_t size)
{
  rmf_workcell_msgs__msg__Trait__Sequence * member =
    (rmf_workcell_msgs__msg__Trait__Sequence *)(untyped_member);
  rmf_workcell_msgs__msg__Trait__Sequence__fini(member);
  return rmf_workcell_msgs__msg__Trait__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_member_array[5] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__WorkcellConfiguration, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__WorkcellConfiguration, guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__WorkcellConfiguration, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "assets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__WorkcellConfiguration, assets),  // bytes offset in struct
    NULL,  // default value
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__size_function__WorkcellConfiguration__assets,  // size() function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_const_function__WorkcellConfiguration__assets,  // get_const(index) function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_function__WorkcellConfiguration__assets,  // get(index) function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__fetch_function__WorkcellConfiguration__assets,  // fetch(index, &value) function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__assign_function__WorkcellConfiguration__assets,  // assign(index, value) function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__resize_function__WorkcellConfiguration__assets  // resize(index) function pointer
  },
  {
    "traits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_workcell_msgs__msg__WorkcellConfiguration, traits),  // bytes offset in struct
    NULL,  // default value
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__size_function__WorkcellConfiguration__traits,  // size() function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_const_function__WorkcellConfiguration__traits,  // get_const(index) function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__get_function__WorkcellConfiguration__traits,  // get(index) function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__fetch_function__WorkcellConfiguration__traits,  // fetch(index, &value) function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__assign_function__WorkcellConfiguration__traits,  // assign(index, value) function pointer
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__resize_function__WorkcellConfiguration__traits  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_members = {
  "rmf_workcell_msgs__msg",  // message namespace
  "WorkcellConfiguration",  // message name
  5,  // number of fields
  sizeof(rmf_workcell_msgs__msg__WorkcellConfiguration),
  rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_member_array,  // message members
  rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_type_support_handle = {
  0,
  &rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_workcell_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_workcell_msgs, msg, WorkcellConfiguration)() {
  rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_workcell_msgs, msg, Asset)();
  rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_workcell_msgs, msg, Trait)();
  if (!rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_type_support_handle.typesupport_identifier) {
    rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_workcell_msgs__msg__WorkcellConfiguration__rosidl_typesupport_introspection_c__WorkcellConfiguration_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
