// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/NegotiationState.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/negotiation_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "rmf_traffic_msgs/msg/detail/negotiation_status__functions.h"
// Member `tree`
#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__functions.h"
// Member `orphan_proposals`
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__functions.h"
// Member `orphan_rejections`
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__functions.h"
// Member `orphan_forfeits`
#include "rmf_traffic_msgs/msg/detail/negotiation_forfeit__functions.h"

bool
rmf_traffic_msgs__msg__NegotiationState__init(rmf_traffic_msgs__msg__NegotiationState * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rmf_traffic_msgs__msg__NegotiationStatus__init(&msg->status)) {
    rmf_traffic_msgs__msg__NegotiationState__fini(msg);
    return false;
  }
  // tree
  if (!rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__init(&msg->tree, 0)) {
    rmf_traffic_msgs__msg__NegotiationState__fini(msg);
    return false;
  }
  // orphan_proposals
  if (!rmf_traffic_msgs__msg__NegotiationProposal__Sequence__init(&msg->orphan_proposals, 0)) {
    rmf_traffic_msgs__msg__NegotiationState__fini(msg);
    return false;
  }
  // orphan_rejections
  if (!rmf_traffic_msgs__msg__NegotiationRejection__Sequence__init(&msg->orphan_rejections, 0)) {
    rmf_traffic_msgs__msg__NegotiationState__fini(msg);
    return false;
  }
  // orphan_forfeits
  if (!rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__init(&msg->orphan_forfeits, 0)) {
    rmf_traffic_msgs__msg__NegotiationState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__NegotiationState__fini(rmf_traffic_msgs__msg__NegotiationState * msg)
{
  if (!msg) {
    return;
  }
  // status
  rmf_traffic_msgs__msg__NegotiationStatus__fini(&msg->status);
  // tree
  rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__fini(&msg->tree);
  // orphan_proposals
  rmf_traffic_msgs__msg__NegotiationProposal__Sequence__fini(&msg->orphan_proposals);
  // orphan_rejections
  rmf_traffic_msgs__msg__NegotiationRejection__Sequence__fini(&msg->orphan_rejections);
  // orphan_forfeits
  rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__fini(&msg->orphan_forfeits);
}

bool
rmf_traffic_msgs__msg__NegotiationState__are_equal(const rmf_traffic_msgs__msg__NegotiationState * lhs, const rmf_traffic_msgs__msg__NegotiationState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rmf_traffic_msgs__msg__NegotiationStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // tree
  if (!rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__are_equal(
      &(lhs->tree), &(rhs->tree)))
  {
    return false;
  }
  // orphan_proposals
  if (!rmf_traffic_msgs__msg__NegotiationProposal__Sequence__are_equal(
      &(lhs->orphan_proposals), &(rhs->orphan_proposals)))
  {
    return false;
  }
  // orphan_rejections
  if (!rmf_traffic_msgs__msg__NegotiationRejection__Sequence__are_equal(
      &(lhs->orphan_rejections), &(rhs->orphan_rejections)))
  {
    return false;
  }
  // orphan_forfeits
  if (!rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__are_equal(
      &(lhs->orphan_forfeits), &(rhs->orphan_forfeits)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationState__copy(
  const rmf_traffic_msgs__msg__NegotiationState * input,
  rmf_traffic_msgs__msg__NegotiationState * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rmf_traffic_msgs__msg__NegotiationStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // tree
  if (!rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__copy(
      &(input->tree), &(output->tree)))
  {
    return false;
  }
  // orphan_proposals
  if (!rmf_traffic_msgs__msg__NegotiationProposal__Sequence__copy(
      &(input->orphan_proposals), &(output->orphan_proposals)))
  {
    return false;
  }
  // orphan_rejections
  if (!rmf_traffic_msgs__msg__NegotiationRejection__Sequence__copy(
      &(input->orphan_rejections), &(output->orphan_rejections)))
  {
    return false;
  }
  // orphan_forfeits
  if (!rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__copy(
      &(input->orphan_forfeits), &(output->orphan_forfeits)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__NegotiationState *
rmf_traffic_msgs__msg__NegotiationState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationState * msg = (rmf_traffic_msgs__msg__NegotiationState *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__NegotiationState));
  bool success = rmf_traffic_msgs__msg__NegotiationState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__NegotiationState__destroy(rmf_traffic_msgs__msg__NegotiationState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__NegotiationState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__NegotiationState__Sequence__init(rmf_traffic_msgs__msg__NegotiationState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationState * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__NegotiationState *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__NegotiationState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__NegotiationState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__NegotiationState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rmf_traffic_msgs__msg__NegotiationState__Sequence__fini(rmf_traffic_msgs__msg__NegotiationState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_traffic_msgs__msg__NegotiationState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rmf_traffic_msgs__msg__NegotiationState__Sequence *
rmf_traffic_msgs__msg__NegotiationState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationState__Sequence * array = (rmf_traffic_msgs__msg__NegotiationState__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__NegotiationState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__NegotiationState__Sequence__destroy(rmf_traffic_msgs__msg__NegotiationState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__NegotiationState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__NegotiationState__Sequence__are_equal(const rmf_traffic_msgs__msg__NegotiationState__Sequence * lhs, const rmf_traffic_msgs__msg__NegotiationState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationState__Sequence__copy(
  const rmf_traffic_msgs__msg__NegotiationState__Sequence * input,
  rmf_traffic_msgs__msg__NegotiationState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__NegotiationState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__NegotiationState * data =
      (rmf_traffic_msgs__msg__NegotiationState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__NegotiationState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__NegotiationState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
