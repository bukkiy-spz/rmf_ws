// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `erasures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `delays`
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__functions.h"
// Member `additions`
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__functions.h"
// Member `progress`
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__functions.h"

bool
rmf_traffic_msgs__msg__ScheduleParticipantPatch__init(rmf_traffic_msgs__msg__ScheduleParticipantPatch * msg)
{
  if (!msg) {
    return false;
  }
  // participant_id
  // itinerary_version
  // erasures
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->erasures, 0)) {
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(msg);
    return false;
  }
  // delays
  if (!rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__init(&msg->delays, 0)) {
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(msg);
    return false;
  }
  // additions
  if (!rmf_traffic_msgs__msg__ScheduleChangeAdd__init(&msg->additions)) {
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(msg);
    return false;
  }
  // progress
  if (!rmf_traffic_msgs__msg__ScheduleChangeProgress__init(&msg->progress)) {
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(rmf_traffic_msgs__msg__ScheduleParticipantPatch * msg)
{
  if (!msg) {
    return;
  }
  // participant_id
  // itinerary_version
  // erasures
  rosidl_runtime_c__uint64__Sequence__fini(&msg->erasures);
  // delays
  rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__fini(&msg->delays);
  // additions
  rmf_traffic_msgs__msg__ScheduleChangeAdd__fini(&msg->additions);
  // progress
  rmf_traffic_msgs__msg__ScheduleChangeProgress__fini(&msg->progress);
}

bool
rmf_traffic_msgs__msg__ScheduleParticipantPatch__are_equal(const rmf_traffic_msgs__msg__ScheduleParticipantPatch * lhs, const rmf_traffic_msgs__msg__ScheduleParticipantPatch * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // participant_id
  if (lhs->participant_id != rhs->participant_id) {
    return false;
  }
  // itinerary_version
  if (lhs->itinerary_version != rhs->itinerary_version) {
    return false;
  }
  // erasures
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->erasures), &(rhs->erasures)))
  {
    return false;
  }
  // delays
  if (!rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__are_equal(
      &(lhs->delays), &(rhs->delays)))
  {
    return false;
  }
  // additions
  if (!rmf_traffic_msgs__msg__ScheduleChangeAdd__are_equal(
      &(lhs->additions), &(rhs->additions)))
  {
    return false;
  }
  // progress
  if (!rmf_traffic_msgs__msg__ScheduleChangeProgress__are_equal(
      &(lhs->progress), &(rhs->progress)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ScheduleParticipantPatch__copy(
  const rmf_traffic_msgs__msg__ScheduleParticipantPatch * input,
  rmf_traffic_msgs__msg__ScheduleParticipantPatch * output)
{
  if (!input || !output) {
    return false;
  }
  // participant_id
  output->participant_id = input->participant_id;
  // itinerary_version
  output->itinerary_version = input->itinerary_version;
  // erasures
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->erasures), &(output->erasures)))
  {
    return false;
  }
  // delays
  if (!rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__copy(
      &(input->delays), &(output->delays)))
  {
    return false;
  }
  // additions
  if (!rmf_traffic_msgs__msg__ScheduleChangeAdd__copy(
      &(input->additions), &(output->additions)))
  {
    return false;
  }
  // progress
  if (!rmf_traffic_msgs__msg__ScheduleChangeProgress__copy(
      &(input->progress), &(output->progress)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__ScheduleParticipantPatch *
rmf_traffic_msgs__msg__ScheduleParticipantPatch__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleParticipantPatch * msg = (rmf_traffic_msgs__msg__ScheduleParticipantPatch *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ScheduleParticipantPatch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ScheduleParticipantPatch));
  bool success = rmf_traffic_msgs__msg__ScheduleParticipantPatch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ScheduleParticipantPatch__destroy(rmf_traffic_msgs__msg__ScheduleParticipantPatch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__init(rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleParticipantPatch * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__ScheduleParticipantPatch *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__ScheduleParticipantPatch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ScheduleParticipantPatch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__fini(rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * array)
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
      rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence *
rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * array = (rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__destroy(rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__are_equal(const rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * lhs, const rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__ScheduleParticipantPatch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__copy(
  const rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * input,
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__ScheduleParticipantPatch);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__ScheduleParticipantPatch * data =
      (rmf_traffic_msgs__msg__ScheduleParticipantPatch *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__ScheduleParticipantPatch__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__ScheduleParticipantPatch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
