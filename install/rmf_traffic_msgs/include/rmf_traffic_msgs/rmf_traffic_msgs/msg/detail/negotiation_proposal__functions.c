// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `to_accommodate`
#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"
// Member `itinerary`
#include "rmf_traffic_msgs/msg/detail/route__functions.h"

bool
rmf_traffic_msgs__msg__NegotiationProposal__init(rmf_traffic_msgs__msg__NegotiationProposal * msg)
{
  if (!msg) {
    return false;
  }
  // conflict_version
  // proposal_version
  // for_participant
  // to_accommodate
  if (!rmf_traffic_msgs__msg__NegotiationKey__Sequence__init(&msg->to_accommodate, 0)) {
    rmf_traffic_msgs__msg__NegotiationProposal__fini(msg);
    return false;
  }
  // plan_id
  // itinerary
  if (!rmf_traffic_msgs__msg__Route__Sequence__init(&msg->itinerary, 0)) {
    rmf_traffic_msgs__msg__NegotiationProposal__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__NegotiationProposal__fini(rmf_traffic_msgs__msg__NegotiationProposal * msg)
{
  if (!msg) {
    return;
  }
  // conflict_version
  // proposal_version
  // for_participant
  // to_accommodate
  rmf_traffic_msgs__msg__NegotiationKey__Sequence__fini(&msg->to_accommodate);
  // plan_id
  // itinerary
  rmf_traffic_msgs__msg__Route__Sequence__fini(&msg->itinerary);
}

bool
rmf_traffic_msgs__msg__NegotiationProposal__are_equal(const rmf_traffic_msgs__msg__NegotiationProposal * lhs, const rmf_traffic_msgs__msg__NegotiationProposal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // conflict_version
  if (lhs->conflict_version != rhs->conflict_version) {
    return false;
  }
  // proposal_version
  if (lhs->proposal_version != rhs->proposal_version) {
    return false;
  }
  // for_participant
  if (lhs->for_participant != rhs->for_participant) {
    return false;
  }
  // to_accommodate
  if (!rmf_traffic_msgs__msg__NegotiationKey__Sequence__are_equal(
      &(lhs->to_accommodate), &(rhs->to_accommodate)))
  {
    return false;
  }
  // plan_id
  if (lhs->plan_id != rhs->plan_id) {
    return false;
  }
  // itinerary
  if (!rmf_traffic_msgs__msg__Route__Sequence__are_equal(
      &(lhs->itinerary), &(rhs->itinerary)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationProposal__copy(
  const rmf_traffic_msgs__msg__NegotiationProposal * input,
  rmf_traffic_msgs__msg__NegotiationProposal * output)
{
  if (!input || !output) {
    return false;
  }
  // conflict_version
  output->conflict_version = input->conflict_version;
  // proposal_version
  output->proposal_version = input->proposal_version;
  // for_participant
  output->for_participant = input->for_participant;
  // to_accommodate
  if (!rmf_traffic_msgs__msg__NegotiationKey__Sequence__copy(
      &(input->to_accommodate), &(output->to_accommodate)))
  {
    return false;
  }
  // plan_id
  output->plan_id = input->plan_id;
  // itinerary
  if (!rmf_traffic_msgs__msg__Route__Sequence__copy(
      &(input->itinerary), &(output->itinerary)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__NegotiationProposal *
rmf_traffic_msgs__msg__NegotiationProposal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationProposal * msg = (rmf_traffic_msgs__msg__NegotiationProposal *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationProposal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__NegotiationProposal));
  bool success = rmf_traffic_msgs__msg__NegotiationProposal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__NegotiationProposal__destroy(rmf_traffic_msgs__msg__NegotiationProposal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__NegotiationProposal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__init(rmf_traffic_msgs__msg__NegotiationProposal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationProposal * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__NegotiationProposal *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__NegotiationProposal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__NegotiationProposal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__NegotiationProposal__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__fini(rmf_traffic_msgs__msg__NegotiationProposal__Sequence * array)
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
      rmf_traffic_msgs__msg__NegotiationProposal__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__NegotiationProposal__Sequence *
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationProposal__Sequence * array = (rmf_traffic_msgs__msg__NegotiationProposal__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationProposal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__NegotiationProposal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__destroy(rmf_traffic_msgs__msg__NegotiationProposal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__NegotiationProposal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__are_equal(const rmf_traffic_msgs__msg__NegotiationProposal__Sequence * lhs, const rmf_traffic_msgs__msg__NegotiationProposal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationProposal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationProposal__Sequence__copy(
  const rmf_traffic_msgs__msg__NegotiationProposal__Sequence * input,
  rmf_traffic_msgs__msg__NegotiationProposal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__NegotiationProposal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__NegotiationProposal * data =
      (rmf_traffic_msgs__msg__NegotiationProposal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__NegotiationProposal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__NegotiationProposal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationProposal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
