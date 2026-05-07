// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/NegotiationStatus.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/negotiation_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `participants`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `start_time`
// Member `last_response_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rmf_traffic_msgs__msg__NegotiationStatus__init(rmf_traffic_msgs__msg__NegotiationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // conflict_version
  // participants
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->participants, 0)) {
    rmf_traffic_msgs__msg__NegotiationStatus__fini(msg);
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    rmf_traffic_msgs__msg__NegotiationStatus__fini(msg);
    return false;
  }
  // last_response_time
  if (!builtin_interfaces__msg__Time__init(&msg->last_response_time)) {
    rmf_traffic_msgs__msg__NegotiationStatus__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__NegotiationStatus__fini(rmf_traffic_msgs__msg__NegotiationStatus * msg)
{
  if (!msg) {
    return;
  }
  // conflict_version
  // participants
  rosidl_runtime_c__uint64__Sequence__fini(&msg->participants);
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // last_response_time
  builtin_interfaces__msg__Time__fini(&msg->last_response_time);
}

bool
rmf_traffic_msgs__msg__NegotiationStatus__are_equal(const rmf_traffic_msgs__msg__NegotiationStatus * lhs, const rmf_traffic_msgs__msg__NegotiationStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // conflict_version
  if (lhs->conflict_version != rhs->conflict_version) {
    return false;
  }
  // participants
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->participants), &(rhs->participants)))
  {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // last_response_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_response_time), &(rhs->last_response_time)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationStatus__copy(
  const rmf_traffic_msgs__msg__NegotiationStatus * input,
  rmf_traffic_msgs__msg__NegotiationStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // conflict_version
  output->conflict_version = input->conflict_version;
  // participants
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->participants), &(output->participants)))
  {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // last_response_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_response_time), &(output->last_response_time)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__NegotiationStatus *
rmf_traffic_msgs__msg__NegotiationStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationStatus * msg = (rmf_traffic_msgs__msg__NegotiationStatus *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__NegotiationStatus));
  bool success = rmf_traffic_msgs__msg__NegotiationStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__NegotiationStatus__destroy(rmf_traffic_msgs__msg__NegotiationStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__NegotiationStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__NegotiationStatus__Sequence__init(rmf_traffic_msgs__msg__NegotiationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationStatus * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__NegotiationStatus *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__NegotiationStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__NegotiationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__NegotiationStatus__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__NegotiationStatus__Sequence__fini(rmf_traffic_msgs__msg__NegotiationStatus__Sequence * array)
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
      rmf_traffic_msgs__msg__NegotiationStatus__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__NegotiationStatus__Sequence *
rmf_traffic_msgs__msg__NegotiationStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationStatus__Sequence * array = (rmf_traffic_msgs__msg__NegotiationStatus__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__NegotiationStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__NegotiationStatus__Sequence__destroy(rmf_traffic_msgs__msg__NegotiationStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__NegotiationStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__NegotiationStatus__Sequence__are_equal(const rmf_traffic_msgs__msg__NegotiationStatus__Sequence * lhs, const rmf_traffic_msgs__msg__NegotiationStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationStatus__Sequence__copy(
  const rmf_traffic_msgs__msg__NegotiationStatus__Sequence * input,
  rmf_traffic_msgs__msg__NegotiationStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__NegotiationStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__NegotiationStatus * data =
      (rmf_traffic_msgs__msg__NegotiationStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__NegotiationStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__NegotiationStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
