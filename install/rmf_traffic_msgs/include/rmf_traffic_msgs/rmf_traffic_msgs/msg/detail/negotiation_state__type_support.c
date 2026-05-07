// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/NegotiationState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/negotiation_state__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_state__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_state__struct.h"


// Include directives for member types
// Member `status`
#include "rmf_traffic_msgs/msg/negotiation_status.h"
// Member `status`
#include "rmf_traffic_msgs/msg/detail/negotiation_status__rosidl_typesupport_introspection_c.h"
// Member `tree`
#include "rmf_traffic_msgs/msg/negotiation_tree_node.h"
// Member `tree`
#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__rosidl_typesupport_introspection_c.h"
// Member `orphan_proposals`
#include "rmf_traffic_msgs/msg/negotiation_proposal.h"
// Member `orphan_proposals`
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__rosidl_typesupport_introspection_c.h"
// Member `orphan_rejections`
#include "rmf_traffic_msgs/msg/negotiation_rejection.h"
// Member `orphan_rejections`
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__rosidl_typesupport_introspection_c.h"
// Member `orphan_forfeits`
#include "rmf_traffic_msgs/msg/negotiation_forfeit.h"
// Member `orphan_forfeits`
#include "rmf_traffic_msgs/msg/detail/negotiation_forfeit__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__NegotiationState__init(message_memory);
}

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__NegotiationState__fini(message_memory);
}

size_t rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__size_function__NegotiationState__tree(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__tree(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__tree(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__fetch_function__NegotiationState__tree(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__NegotiationTreeNode * item =
    ((const rmf_traffic_msgs__msg__NegotiationTreeNode *)
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__tree(untyped_member, index));
  rmf_traffic_msgs__msg__NegotiationTreeNode * value =
    (rmf_traffic_msgs__msg__NegotiationTreeNode *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__assign_function__NegotiationState__tree(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__NegotiationTreeNode * item =
    ((rmf_traffic_msgs__msg__NegotiationTreeNode *)
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__tree(untyped_member, index));
  const rmf_traffic_msgs__msg__NegotiationTreeNode * value =
    (const rmf_traffic_msgs__msg__NegotiationTreeNode *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__resize_function__NegotiationState__tree(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__fini(member);
  return rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__init(member, size);
}

size_t rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__size_function__NegotiationState__orphan_proposals(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__NegotiationProposal__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationProposal__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__orphan_proposals(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__NegotiationProposal__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationProposal__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__orphan_proposals(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__NegotiationProposal__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationProposal__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__fetch_function__NegotiationState__orphan_proposals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__NegotiationProposal * item =
    ((const rmf_traffic_msgs__msg__NegotiationProposal *)
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__orphan_proposals(untyped_member, index));
  rmf_traffic_msgs__msg__NegotiationProposal * value =
    (rmf_traffic_msgs__msg__NegotiationProposal *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__assign_function__NegotiationState__orphan_proposals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__NegotiationProposal * item =
    ((rmf_traffic_msgs__msg__NegotiationProposal *)
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__orphan_proposals(untyped_member, index));
  const rmf_traffic_msgs__msg__NegotiationProposal * value =
    (const rmf_traffic_msgs__msg__NegotiationProposal *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__resize_function__NegotiationState__orphan_proposals(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__NegotiationProposal__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationProposal__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__NegotiationProposal__Sequence__fini(member);
  return rmf_traffic_msgs__msg__NegotiationProposal__Sequence__init(member, size);
}

size_t rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__size_function__NegotiationState__orphan_rejections(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__NegotiationRejection__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationRejection__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__orphan_rejections(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__NegotiationRejection__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationRejection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__orphan_rejections(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__NegotiationRejection__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationRejection__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__fetch_function__NegotiationState__orphan_rejections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__NegotiationRejection * item =
    ((const rmf_traffic_msgs__msg__NegotiationRejection *)
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__orphan_rejections(untyped_member, index));
  rmf_traffic_msgs__msg__NegotiationRejection * value =
    (rmf_traffic_msgs__msg__NegotiationRejection *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__assign_function__NegotiationState__orphan_rejections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__NegotiationRejection * item =
    ((rmf_traffic_msgs__msg__NegotiationRejection *)
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__orphan_rejections(untyped_member, index));
  const rmf_traffic_msgs__msg__NegotiationRejection * value =
    (const rmf_traffic_msgs__msg__NegotiationRejection *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__resize_function__NegotiationState__orphan_rejections(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__NegotiationRejection__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationRejection__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__NegotiationRejection__Sequence__fini(member);
  return rmf_traffic_msgs__msg__NegotiationRejection__Sequence__init(member, size);
}

size_t rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__size_function__NegotiationState__orphan_forfeits(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__NegotiationForfeit__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationForfeit__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__orphan_forfeits(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__NegotiationForfeit__Sequence * member =
    (const rmf_traffic_msgs__msg__NegotiationForfeit__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__orphan_forfeits(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__NegotiationForfeit__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationForfeit__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__fetch_function__NegotiationState__orphan_forfeits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__NegotiationForfeit * item =
    ((const rmf_traffic_msgs__msg__NegotiationForfeit *)
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__orphan_forfeits(untyped_member, index));
  rmf_traffic_msgs__msg__NegotiationForfeit * value =
    (rmf_traffic_msgs__msg__NegotiationForfeit *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__assign_function__NegotiationState__orphan_forfeits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__NegotiationForfeit * item =
    ((rmf_traffic_msgs__msg__NegotiationForfeit *)
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__orphan_forfeits(untyped_member, index));
  const rmf_traffic_msgs__msg__NegotiationForfeit * value =
    (const rmf_traffic_msgs__msg__NegotiationForfeit *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__resize_function__NegotiationState__orphan_forfeits(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__NegotiationForfeit__Sequence * member =
    (rmf_traffic_msgs__msg__NegotiationForfeit__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__fini(member);
  return rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_member_array[5] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationState, tree),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__size_function__NegotiationState__tree,  // size() function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__tree,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__tree,  // get(index) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__fetch_function__NegotiationState__tree,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__assign_function__NegotiationState__tree,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__resize_function__NegotiationState__tree  // resize(index) function pointer
  },
  {
    "orphan_proposals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationState, orphan_proposals),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__size_function__NegotiationState__orphan_proposals,  // size() function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__orphan_proposals,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__orphan_proposals,  // get(index) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__fetch_function__NegotiationState__orphan_proposals,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__assign_function__NegotiationState__orphan_proposals,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__resize_function__NegotiationState__orphan_proposals  // resize(index) function pointer
  },
  {
    "orphan_rejections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationState, orphan_rejections),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__size_function__NegotiationState__orphan_rejections,  // size() function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__orphan_rejections,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__orphan_rejections,  // get(index) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__fetch_function__NegotiationState__orphan_rejections,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__assign_function__NegotiationState__orphan_rejections,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__resize_function__NegotiationState__orphan_rejections  // resize(index) function pointer
  },
  {
    "orphan_forfeits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__NegotiationState, orphan_forfeits),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__size_function__NegotiationState__orphan_forfeits,  // size() function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_const_function__NegotiationState__orphan_forfeits,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__get_function__NegotiationState__orphan_forfeits,  // get(index) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__fetch_function__NegotiationState__orphan_forfeits,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__assign_function__NegotiationState__orphan_forfeits,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__resize_function__NegotiationState__orphan_forfeits  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "NegotiationState",  // message name
  5,  // number of fields
  sizeof(rmf_traffic_msgs__msg__NegotiationState),
  rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_member_array,  // message members
  rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationState)() {
  rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationStatus)();
  rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationTreeNode)();
  rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationProposal)();
  rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationRejection)();
  rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, NegotiationForfeit)();
  if (!rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__NegotiationState__rosidl_typesupport_introspection_c__NegotiationState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
