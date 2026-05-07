// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/MutexGroupStates.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/mutex_group_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `assignments`
#include "rmf_fleet_msgs/msg/detail/mutex_group_assignment__functions.h"

bool
rmf_fleet_msgs__msg__MutexGroupStates__init(rmf_fleet_msgs__msg__MutexGroupStates * msg)
{
  if (!msg) {
    return false;
  }
  // assignments
  if (!rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__init(&msg->assignments, 0)) {
    rmf_fleet_msgs__msg__MutexGroupStates__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__MutexGroupStates__fini(rmf_fleet_msgs__msg__MutexGroupStates * msg)
{
  if (!msg) {
    return;
  }
  // assignments
  rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__fini(&msg->assignments);
}

bool
rmf_fleet_msgs__msg__MutexGroupStates__are_equal(const rmf_fleet_msgs__msg__MutexGroupStates * lhs, const rmf_fleet_msgs__msg__MutexGroupStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // assignments
  if (!rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__are_equal(
      &(lhs->assignments), &(rhs->assignments)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__MutexGroupStates__copy(
  const rmf_fleet_msgs__msg__MutexGroupStates * input,
  rmf_fleet_msgs__msg__MutexGroupStates * output)
{
  if (!input || !output) {
    return false;
  }
  // assignments
  if (!rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__copy(
      &(input->assignments), &(output->assignments)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__msg__MutexGroupStates *
rmf_fleet_msgs__msg__MutexGroupStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__MutexGroupStates * msg = (rmf_fleet_msgs__msg__MutexGroupStates *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__MutexGroupStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__MutexGroupStates));
  bool success = rmf_fleet_msgs__msg__MutexGroupStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__MutexGroupStates__destroy(rmf_fleet_msgs__msg__MutexGroupStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__MutexGroupStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__MutexGroupStates__Sequence__init(rmf_fleet_msgs__msg__MutexGroupStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__MutexGroupStates * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__MutexGroupStates *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__MutexGroupStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__MutexGroupStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__MutexGroupStates__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__MutexGroupStates__Sequence__fini(rmf_fleet_msgs__msg__MutexGroupStates__Sequence * array)
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
      rmf_fleet_msgs__msg__MutexGroupStates__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__MutexGroupStates__Sequence *
rmf_fleet_msgs__msg__MutexGroupStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__MutexGroupStates__Sequence * array = (rmf_fleet_msgs__msg__MutexGroupStates__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__MutexGroupStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__MutexGroupStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__MutexGroupStates__Sequence__destroy(rmf_fleet_msgs__msg__MutexGroupStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__MutexGroupStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__MutexGroupStates__Sequence__are_equal(const rmf_fleet_msgs__msg__MutexGroupStates__Sequence * lhs, const rmf_fleet_msgs__msg__MutexGroupStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__MutexGroupStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__MutexGroupStates__Sequence__copy(
  const rmf_fleet_msgs__msg__MutexGroupStates__Sequence * input,
  rmf_fleet_msgs__msg__MutexGroupStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__MutexGroupStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__MutexGroupStates * data =
      (rmf_fleet_msgs__msg__MutexGroupStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__MutexGroupStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__MutexGroupStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__MutexGroupStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
