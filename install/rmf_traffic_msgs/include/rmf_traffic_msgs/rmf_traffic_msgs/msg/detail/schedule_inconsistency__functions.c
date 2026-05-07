// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistency.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ranges`
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__functions.h"

bool
rmf_traffic_msgs__msg__ScheduleInconsistency__init(rmf_traffic_msgs__msg__ScheduleInconsistency * msg)
{
  if (!msg) {
    return false;
  }
  // participant
  // ranges
  if (!rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__init(&msg->ranges, 0)) {
    rmf_traffic_msgs__msg__ScheduleInconsistency__fini(msg);
    return false;
  }
  // last_known_itinerary
  // last_known_progress
  return true;
}

void
rmf_traffic_msgs__msg__ScheduleInconsistency__fini(rmf_traffic_msgs__msg__ScheduleInconsistency * msg)
{
  if (!msg) {
    return;
  }
  // participant
  // ranges
  rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__fini(&msg->ranges);
  // last_known_itinerary
  // last_known_progress
}

bool
rmf_traffic_msgs__msg__ScheduleInconsistency__are_equal(const rmf_traffic_msgs__msg__ScheduleInconsistency * lhs, const rmf_traffic_msgs__msg__ScheduleInconsistency * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // participant
  if (lhs->participant != rhs->participant) {
    return false;
  }
  // ranges
  if (!rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__are_equal(
      &(lhs->ranges), &(rhs->ranges)))
  {
    return false;
  }
  // last_known_itinerary
  if (lhs->last_known_itinerary != rhs->last_known_itinerary) {
    return false;
  }
  // last_known_progress
  if (lhs->last_known_progress != rhs->last_known_progress) {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ScheduleInconsistency__copy(
  const rmf_traffic_msgs__msg__ScheduleInconsistency * input,
  rmf_traffic_msgs__msg__ScheduleInconsistency * output)
{
  if (!input || !output) {
    return false;
  }
  // participant
  output->participant = input->participant;
  // ranges
  if (!rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__copy(
      &(input->ranges), &(output->ranges)))
  {
    return false;
  }
  // last_known_itinerary
  output->last_known_itinerary = input->last_known_itinerary;
  // last_known_progress
  output->last_known_progress = input->last_known_progress;
  return true;
}

rmf_traffic_msgs__msg__ScheduleInconsistency *
rmf_traffic_msgs__msg__ScheduleInconsistency__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleInconsistency * msg = (rmf_traffic_msgs__msg__ScheduleInconsistency *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ScheduleInconsistency), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ScheduleInconsistency));
  bool success = rmf_traffic_msgs__msg__ScheduleInconsistency__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ScheduleInconsistency__destroy(rmf_traffic_msgs__msg__ScheduleInconsistency * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__ScheduleInconsistency__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__init(rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleInconsistency * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__ScheduleInconsistency *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__ScheduleInconsistency), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ScheduleInconsistency__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ScheduleInconsistency__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__fini(rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence * array)
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
      rmf_traffic_msgs__msg__ScheduleInconsistency__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence *
rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence * array = (rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__destroy(rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__are_equal(const rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence * lhs, const rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__ScheduleInconsistency__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__copy(
  const rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence * input,
  rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__ScheduleInconsistency);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__ScheduleInconsistency * data =
      (rmf_traffic_msgs__msg__ScheduleInconsistency *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__ScheduleInconsistency__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__ScheduleInconsistency__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__ScheduleInconsistency__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
