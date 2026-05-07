// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/MutexGroupRequest.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/mutex_group_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `group`
#include "rosidl_runtime_c/string_functions.h"
// Member `claim_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rmf_fleet_msgs__msg__MutexGroupRequest__init(rmf_fleet_msgs__msg__MutexGroupRequest * msg)
{
  if (!msg) {
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__init(&msg->group)) {
    rmf_fleet_msgs__msg__MutexGroupRequest__fini(msg);
    return false;
  }
  // claimant
  // claim_time
  if (!builtin_interfaces__msg__Time__init(&msg->claim_time)) {
    rmf_fleet_msgs__msg__MutexGroupRequest__fini(msg);
    return false;
  }
  // mode
  return true;
}

void
rmf_fleet_msgs__msg__MutexGroupRequest__fini(rmf_fleet_msgs__msg__MutexGroupRequest * msg)
{
  if (!msg) {
    return;
  }
  // group
  rosidl_runtime_c__String__fini(&msg->group);
  // claimant
  // claim_time
  builtin_interfaces__msg__Time__fini(&msg->claim_time);
  // mode
}

bool
rmf_fleet_msgs__msg__MutexGroupRequest__are_equal(const rmf_fleet_msgs__msg__MutexGroupRequest * lhs, const rmf_fleet_msgs__msg__MutexGroupRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group), &(rhs->group)))
  {
    return false;
  }
  // claimant
  if (lhs->claimant != rhs->claimant) {
    return false;
  }
  // claim_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->claim_time), &(rhs->claim_time)))
  {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__MutexGroupRequest__copy(
  const rmf_fleet_msgs__msg__MutexGroupRequest * input,
  rmf_fleet_msgs__msg__MutexGroupRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__copy(
      &(input->group), &(output->group)))
  {
    return false;
  }
  // claimant
  output->claimant = input->claimant;
  // claim_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->claim_time), &(output->claim_time)))
  {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

rmf_fleet_msgs__msg__MutexGroupRequest *
rmf_fleet_msgs__msg__MutexGroupRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__MutexGroupRequest * msg = (rmf_fleet_msgs__msg__MutexGroupRequest *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__MutexGroupRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__MutexGroupRequest));
  bool success = rmf_fleet_msgs__msg__MutexGroupRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__MutexGroupRequest__destroy(rmf_fleet_msgs__msg__MutexGroupRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__MutexGroupRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__init(rmf_fleet_msgs__msg__MutexGroupRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__MutexGroupRequest * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__MutexGroupRequest *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__MutexGroupRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__MutexGroupRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__MutexGroupRequest__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__fini(rmf_fleet_msgs__msg__MutexGroupRequest__Sequence * array)
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
      rmf_fleet_msgs__msg__MutexGroupRequest__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__MutexGroupRequest__Sequence *
rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__MutexGroupRequest__Sequence * array = (rmf_fleet_msgs__msg__MutexGroupRequest__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__MutexGroupRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__destroy(rmf_fleet_msgs__msg__MutexGroupRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__are_equal(const rmf_fleet_msgs__msg__MutexGroupRequest__Sequence * lhs, const rmf_fleet_msgs__msg__MutexGroupRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__MutexGroupRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__copy(
  const rmf_fleet_msgs__msg__MutexGroupRequest__Sequence * input,
  rmf_fleet_msgs__msg__MutexGroupRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__MutexGroupRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__MutexGroupRequest * data =
      (rmf_fleet_msgs__msg__MutexGroupRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__MutexGroupRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__MutexGroupRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__MutexGroupRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
