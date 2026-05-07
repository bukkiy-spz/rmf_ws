// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/SpeedLimitedLane.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rmf_fleet_msgs__msg__SpeedLimitedLane__init(rmf_fleet_msgs__msg__SpeedLimitedLane * msg)
{
  if (!msg) {
    return false;
  }
  // lane_index
  // speed_limit
  return true;
}

void
rmf_fleet_msgs__msg__SpeedLimitedLane__fini(rmf_fleet_msgs__msg__SpeedLimitedLane * msg)
{
  if (!msg) {
    return;
  }
  // lane_index
  // speed_limit
}

bool
rmf_fleet_msgs__msg__SpeedLimitedLane__are_equal(const rmf_fleet_msgs__msg__SpeedLimitedLane * lhs, const rmf_fleet_msgs__msg__SpeedLimitedLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_index
  if (lhs->lane_index != rhs->lane_index) {
    return false;
  }
  // speed_limit
  if (lhs->speed_limit != rhs->speed_limit) {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__SpeedLimitedLane__copy(
  const rmf_fleet_msgs__msg__SpeedLimitedLane * input,
  rmf_fleet_msgs__msg__SpeedLimitedLane * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_index
  output->lane_index = input->lane_index;
  // speed_limit
  output->speed_limit = input->speed_limit;
  return true;
}

rmf_fleet_msgs__msg__SpeedLimitedLane *
rmf_fleet_msgs__msg__SpeedLimitedLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__SpeedLimitedLane * msg = (rmf_fleet_msgs__msg__SpeedLimitedLane *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__SpeedLimitedLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__SpeedLimitedLane));
  bool success = rmf_fleet_msgs__msg__SpeedLimitedLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__SpeedLimitedLane__destroy(rmf_fleet_msgs__msg__SpeedLimitedLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__SpeedLimitedLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__init(rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__SpeedLimitedLane * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__SpeedLimitedLane *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__SpeedLimitedLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__SpeedLimitedLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__SpeedLimitedLane__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__fini(rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * array)
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
      rmf_fleet_msgs__msg__SpeedLimitedLane__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence *
rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * array = (rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__destroy(rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__are_equal(const rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * lhs, const rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__SpeedLimitedLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__copy(
  const rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * input,
  rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__SpeedLimitedLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__SpeedLimitedLane * data =
      (rmf_fleet_msgs__msg__SpeedLimitedLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__SpeedLimitedLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__SpeedLimitedLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__SpeedLimitedLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
