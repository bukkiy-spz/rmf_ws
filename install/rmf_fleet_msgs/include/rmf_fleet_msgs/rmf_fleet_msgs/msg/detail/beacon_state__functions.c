// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/BeaconState.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/beacon_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `category`
// Member `level`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_fleet_msgs__msg__BeaconState__init(rmf_fleet_msgs__msg__BeaconState * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    rmf_fleet_msgs__msg__BeaconState__fini(msg);
    return false;
  }
  // online
  // category
  if (!rosidl_runtime_c__String__init(&msg->category)) {
    rmf_fleet_msgs__msg__BeaconState__fini(msg);
    return false;
  }
  // activated
  // level
  if (!rosidl_runtime_c__String__init(&msg->level)) {
    rmf_fleet_msgs__msg__BeaconState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__BeaconState__fini(rmf_fleet_msgs__msg__BeaconState * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // online
  // category
  rosidl_runtime_c__String__fini(&msg->category);
  // activated
  // level
  rosidl_runtime_c__String__fini(&msg->level);
}

bool
rmf_fleet_msgs__msg__BeaconState__are_equal(const rmf_fleet_msgs__msg__BeaconState * lhs, const rmf_fleet_msgs__msg__BeaconState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // online
  if (lhs->online != rhs->online) {
    return false;
  }
  // category
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->category), &(rhs->category)))
  {
    return false;
  }
  // activated
  if (lhs->activated != rhs->activated) {
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->level), &(rhs->level)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__BeaconState__copy(
  const rmf_fleet_msgs__msg__BeaconState * input,
  rmf_fleet_msgs__msg__BeaconState * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // online
  output->online = input->online;
  // category
  if (!rosidl_runtime_c__String__copy(
      &(input->category), &(output->category)))
  {
    return false;
  }
  // activated
  output->activated = input->activated;
  // level
  if (!rosidl_runtime_c__String__copy(
      &(input->level), &(output->level)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__msg__BeaconState *
rmf_fleet_msgs__msg__BeaconState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__BeaconState * msg = (rmf_fleet_msgs__msg__BeaconState *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__BeaconState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__BeaconState));
  bool success = rmf_fleet_msgs__msg__BeaconState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__BeaconState__destroy(rmf_fleet_msgs__msg__BeaconState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__BeaconState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__BeaconState__Sequence__init(rmf_fleet_msgs__msg__BeaconState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__BeaconState * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__BeaconState *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__BeaconState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__BeaconState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__BeaconState__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__BeaconState__Sequence__fini(rmf_fleet_msgs__msg__BeaconState__Sequence * array)
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
      rmf_fleet_msgs__msg__BeaconState__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__BeaconState__Sequence *
rmf_fleet_msgs__msg__BeaconState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__BeaconState__Sequence * array = (rmf_fleet_msgs__msg__BeaconState__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__BeaconState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__BeaconState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__BeaconState__Sequence__destroy(rmf_fleet_msgs__msg__BeaconState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__BeaconState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__BeaconState__Sequence__are_equal(const rmf_fleet_msgs__msg__BeaconState__Sequence * lhs, const rmf_fleet_msgs__msg__BeaconState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__BeaconState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__BeaconState__Sequence__copy(
  const rmf_fleet_msgs__msg__BeaconState__Sequence * input,
  rmf_fleet_msgs__msg__BeaconState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__BeaconState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__BeaconState * data =
      (rmf_fleet_msgs__msg__BeaconState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__BeaconState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__BeaconState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__BeaconState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
