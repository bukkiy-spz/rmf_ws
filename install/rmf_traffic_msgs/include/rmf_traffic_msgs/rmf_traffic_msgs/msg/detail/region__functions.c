// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/Region.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/region__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `map`
#include "rosidl_runtime_c/string_functions.h"
// Member `spaces`
#include "rmf_traffic_msgs/msg/detail/space__functions.h"
// Member `timespan`
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"

bool
rmf_traffic_msgs__msg__Region__init(rmf_traffic_msgs__msg__Region * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__init(&msg->map)) {
    rmf_traffic_msgs__msg__Region__fini(msg);
    return false;
  }
  // spaces
  if (!rmf_traffic_msgs__msg__Space__Sequence__init(&msg->spaces, 0)) {
    rmf_traffic_msgs__msg__Region__fini(msg);
    return false;
  }
  // timespan
  if (!rmf_traffic_msgs__msg__Timespan__init(&msg->timespan)) {
    rmf_traffic_msgs__msg__Region__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__Region__fini(rmf_traffic_msgs__msg__Region * msg)
{
  if (!msg) {
    return;
  }
  // map
  rosidl_runtime_c__String__fini(&msg->map);
  // spaces
  rmf_traffic_msgs__msg__Space__Sequence__fini(&msg->spaces);
  // timespan
  rmf_traffic_msgs__msg__Timespan__fini(&msg->timespan);
}

bool
rmf_traffic_msgs__msg__Region__are_equal(const rmf_traffic_msgs__msg__Region * lhs, const rmf_traffic_msgs__msg__Region * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  // spaces
  if (!rmf_traffic_msgs__msg__Space__Sequence__are_equal(
      &(lhs->spaces), &(rhs->spaces)))
  {
    return false;
  }
  // timespan
  if (!rmf_traffic_msgs__msg__Timespan__are_equal(
      &(lhs->timespan), &(rhs->timespan)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__Region__copy(
  const rmf_traffic_msgs__msg__Region * input,
  rmf_traffic_msgs__msg__Region * output)
{
  if (!input || !output) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  // spaces
  if (!rmf_traffic_msgs__msg__Space__Sequence__copy(
      &(input->spaces), &(output->spaces)))
  {
    return false;
  }
  // timespan
  if (!rmf_traffic_msgs__msg__Timespan__copy(
      &(input->timespan), &(output->timespan)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__Region *
rmf_traffic_msgs__msg__Region__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__Region * msg = (rmf_traffic_msgs__msg__Region *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__Region), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__Region));
  bool success = rmf_traffic_msgs__msg__Region__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__Region__destroy(rmf_traffic_msgs__msg__Region * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__Region__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__Region__Sequence__init(rmf_traffic_msgs__msg__Region__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__Region * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__Region *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__Region), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__Region__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__Region__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__Region__Sequence__fini(rmf_traffic_msgs__msg__Region__Sequence * array)
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
      rmf_traffic_msgs__msg__Region__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__Region__Sequence *
rmf_traffic_msgs__msg__Region__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__Region__Sequence * array = (rmf_traffic_msgs__msg__Region__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__Region__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__Region__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__Region__Sequence__destroy(rmf_traffic_msgs__msg__Region__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__Region__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__Region__Sequence__are_equal(const rmf_traffic_msgs__msg__Region__Sequence * lhs, const rmf_traffic_msgs__msg__Region__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__Region__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__Region__Sequence__copy(
  const rmf_traffic_msgs__msg__Region__Sequence * input,
  rmf_traffic_msgs__msg__Region__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__Region);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__Region * data =
      (rmf_traffic_msgs__msg__Region *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__Region__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__Region__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__Region__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
