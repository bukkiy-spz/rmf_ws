// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `maps`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_traffic_msgs__msg__Timespan__init(rmf_traffic_msgs__msg__Timespan * msg)
{
  if (!msg) {
    return false;
  }
  // maps
  if (!rosidl_runtime_c__String__Sequence__init(&msg->maps, 0)) {
    rmf_traffic_msgs__msg__Timespan__fini(msg);
    return false;
  }
  // has_lower_bound
  // lower_bound
  // has_upper_bound
  // upper_bound
  return true;
}

void
rmf_traffic_msgs__msg__Timespan__fini(rmf_traffic_msgs__msg__Timespan * msg)
{
  if (!msg) {
    return;
  }
  // maps
  rosidl_runtime_c__String__Sequence__fini(&msg->maps);
  // has_lower_bound
  // lower_bound
  // has_upper_bound
  // upper_bound
}

bool
rmf_traffic_msgs__msg__Timespan__are_equal(const rmf_traffic_msgs__msg__Timespan * lhs, const rmf_traffic_msgs__msg__Timespan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // maps
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->maps), &(rhs->maps)))
  {
    return false;
  }
  // has_lower_bound
  if (lhs->has_lower_bound != rhs->has_lower_bound) {
    return false;
  }
  // lower_bound
  if (lhs->lower_bound != rhs->lower_bound) {
    return false;
  }
  // has_upper_bound
  if (lhs->has_upper_bound != rhs->has_upper_bound) {
    return false;
  }
  // upper_bound
  if (lhs->upper_bound != rhs->upper_bound) {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__Timespan__copy(
  const rmf_traffic_msgs__msg__Timespan * input,
  rmf_traffic_msgs__msg__Timespan * output)
{
  if (!input || !output) {
    return false;
  }
  // maps
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->maps), &(output->maps)))
  {
    return false;
  }
  // has_lower_bound
  output->has_lower_bound = input->has_lower_bound;
  // lower_bound
  output->lower_bound = input->lower_bound;
  // has_upper_bound
  output->has_upper_bound = input->has_upper_bound;
  // upper_bound
  output->upper_bound = input->upper_bound;
  return true;
}

rmf_traffic_msgs__msg__Timespan *
rmf_traffic_msgs__msg__Timespan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__Timespan * msg = (rmf_traffic_msgs__msg__Timespan *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__Timespan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__Timespan));
  bool success = rmf_traffic_msgs__msg__Timespan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__Timespan__destroy(rmf_traffic_msgs__msg__Timespan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__Timespan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__Timespan__Sequence__init(rmf_traffic_msgs__msg__Timespan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__Timespan * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__Timespan *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__Timespan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__Timespan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__Timespan__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__Timespan__Sequence__fini(rmf_traffic_msgs__msg__Timespan__Sequence * array)
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
      rmf_traffic_msgs__msg__Timespan__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__Timespan__Sequence *
rmf_traffic_msgs__msg__Timespan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__Timespan__Sequence * array = (rmf_traffic_msgs__msg__Timespan__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__Timespan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__Timespan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__Timespan__Sequence__destroy(rmf_traffic_msgs__msg__Timespan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__Timespan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__Timespan__Sequence__are_equal(const rmf_traffic_msgs__msg__Timespan__Sequence * lhs, const rmf_traffic_msgs__msg__Timespan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__Timespan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__Timespan__Sequence__copy(
  const rmf_traffic_msgs__msg__Timespan__Sequence * input,
  rmf_traffic_msgs__msg__Timespan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__Timespan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__Timespan * data =
      (rmf_traffic_msgs__msg__Timespan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__Timespan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__Timespan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__Timespan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
