// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/SchedulePatch.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_patch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `participants`
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__functions.h"
// Member `cull`
#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__functions.h"

bool
rmf_traffic_msgs__msg__SchedulePatch__init(rmf_traffic_msgs__msg__SchedulePatch * msg)
{
  if (!msg) {
    return false;
  }
  // participants
  if (!rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__init(&msg->participants, 0)) {
    rmf_traffic_msgs__msg__SchedulePatch__fini(msg);
    return false;
  }
  // cull
  if (!rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__init(&msg->cull, 0)) {
    rmf_traffic_msgs__msg__SchedulePatch__fini(msg);
    return false;
  }
  // has_base_version
  // base_version
  // latest_version
  return true;
}

void
rmf_traffic_msgs__msg__SchedulePatch__fini(rmf_traffic_msgs__msg__SchedulePatch * msg)
{
  if (!msg) {
    return;
  }
  // participants
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__fini(&msg->participants);
  // cull
  rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__fini(&msg->cull);
  // has_base_version
  // base_version
  // latest_version
}

bool
rmf_traffic_msgs__msg__SchedulePatch__are_equal(const rmf_traffic_msgs__msg__SchedulePatch * lhs, const rmf_traffic_msgs__msg__SchedulePatch * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // participants
  if (!rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__are_equal(
      &(lhs->participants), &(rhs->participants)))
  {
    return false;
  }
  // cull
  if (!rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__are_equal(
      &(lhs->cull), &(rhs->cull)))
  {
    return false;
  }
  // has_base_version
  if (lhs->has_base_version != rhs->has_base_version) {
    return false;
  }
  // base_version
  if (lhs->base_version != rhs->base_version) {
    return false;
  }
  // latest_version
  if (lhs->latest_version != rhs->latest_version) {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__SchedulePatch__copy(
  const rmf_traffic_msgs__msg__SchedulePatch * input,
  rmf_traffic_msgs__msg__SchedulePatch * output)
{
  if (!input || !output) {
    return false;
  }
  // participants
  if (!rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__copy(
      &(input->participants), &(output->participants)))
  {
    return false;
  }
  // cull
  if (!rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__copy(
      &(input->cull), &(output->cull)))
  {
    return false;
  }
  // has_base_version
  output->has_base_version = input->has_base_version;
  // base_version
  output->base_version = input->base_version;
  // latest_version
  output->latest_version = input->latest_version;
  return true;
}

rmf_traffic_msgs__msg__SchedulePatch *
rmf_traffic_msgs__msg__SchedulePatch__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__SchedulePatch * msg = (rmf_traffic_msgs__msg__SchedulePatch *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__SchedulePatch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__SchedulePatch));
  bool success = rmf_traffic_msgs__msg__SchedulePatch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__SchedulePatch__destroy(rmf_traffic_msgs__msg__SchedulePatch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__SchedulePatch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__SchedulePatch__Sequence__init(rmf_traffic_msgs__msg__SchedulePatch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__SchedulePatch * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__SchedulePatch *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__SchedulePatch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__SchedulePatch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__SchedulePatch__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__SchedulePatch__Sequence__fini(rmf_traffic_msgs__msg__SchedulePatch__Sequence * array)
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
      rmf_traffic_msgs__msg__SchedulePatch__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__SchedulePatch__Sequence *
rmf_traffic_msgs__msg__SchedulePatch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__SchedulePatch__Sequence * array = (rmf_traffic_msgs__msg__SchedulePatch__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__SchedulePatch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__SchedulePatch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__SchedulePatch__Sequence__destroy(rmf_traffic_msgs__msg__SchedulePatch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__SchedulePatch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__SchedulePatch__Sequence__are_equal(const rmf_traffic_msgs__msg__SchedulePatch__Sequence * lhs, const rmf_traffic_msgs__msg__SchedulePatch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__SchedulePatch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__SchedulePatch__Sequence__copy(
  const rmf_traffic_msgs__msg__SchedulePatch__Sequence * input,
  rmf_traffic_msgs__msg__SchedulePatch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__SchedulePatch);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__SchedulePatch * data =
      (rmf_traffic_msgs__msg__SchedulePatch *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__SchedulePatch__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__SchedulePatch__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__SchedulePatch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
