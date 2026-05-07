// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_visualization_msgs:msg/RvizParam.idl
// generated code does not contain a copyright notice
#include "rmf_visualization_msgs/msg/detail/rviz_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_visualization_msgs__msg__RvizParam__init(rmf_visualization_msgs__msg__RvizParam * msg)
{
  if (!msg) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    rmf_visualization_msgs__msg__RvizParam__fini(msg);
    return false;
  }
  // query_duration
  // start_duration
  return true;
}

void
rmf_visualization_msgs__msg__RvizParam__fini(rmf_visualization_msgs__msg__RvizParam * msg)
{
  if (!msg) {
    return;
  }
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // query_duration
  // start_duration
}

bool
rmf_visualization_msgs__msg__RvizParam__are_equal(const rmf_visualization_msgs__msg__RvizParam * lhs, const rmf_visualization_msgs__msg__RvizParam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // query_duration
  if (lhs->query_duration != rhs->query_duration) {
    return false;
  }
  // start_duration
  if (lhs->start_duration != rhs->start_duration) {
    return false;
  }
  return true;
}

bool
rmf_visualization_msgs__msg__RvizParam__copy(
  const rmf_visualization_msgs__msg__RvizParam * input,
  rmf_visualization_msgs__msg__RvizParam * output)
{
  if (!input || !output) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // query_duration
  output->query_duration = input->query_duration;
  // start_duration
  output->start_duration = input->start_duration;
  return true;
}

rmf_visualization_msgs__msg__RvizParam *
rmf_visualization_msgs__msg__RvizParam__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_visualization_msgs__msg__RvizParam * msg = (rmf_visualization_msgs__msg__RvizParam *)allocator.allocate(sizeof(rmf_visualization_msgs__msg__RvizParam), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_visualization_msgs__msg__RvizParam));
  bool success = rmf_visualization_msgs__msg__RvizParam__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_visualization_msgs__msg__RvizParam__destroy(rmf_visualization_msgs__msg__RvizParam * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_visualization_msgs__msg__RvizParam__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_visualization_msgs__msg__RvizParam__Sequence__init(rmf_visualization_msgs__msg__RvizParam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_visualization_msgs__msg__RvizParam * data = NULL;

  if (size) {
    data = (rmf_visualization_msgs__msg__RvizParam *)allocator.zero_allocate(size, sizeof(rmf_visualization_msgs__msg__RvizParam), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_visualization_msgs__msg__RvizParam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_visualization_msgs__msg__RvizParam__fini(&data[i - 1]);
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
rmf_visualization_msgs__msg__RvizParam__Sequence__fini(rmf_visualization_msgs__msg__RvizParam__Sequence * array)
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
      rmf_visualization_msgs__msg__RvizParam__fini(&array->data[i]);
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

rmf_visualization_msgs__msg__RvizParam__Sequence *
rmf_visualization_msgs__msg__RvizParam__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_visualization_msgs__msg__RvizParam__Sequence * array = (rmf_visualization_msgs__msg__RvizParam__Sequence *)allocator.allocate(sizeof(rmf_visualization_msgs__msg__RvizParam__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_visualization_msgs__msg__RvizParam__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_visualization_msgs__msg__RvizParam__Sequence__destroy(rmf_visualization_msgs__msg__RvizParam__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_visualization_msgs__msg__RvizParam__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_visualization_msgs__msg__RvizParam__Sequence__are_equal(const rmf_visualization_msgs__msg__RvizParam__Sequence * lhs, const rmf_visualization_msgs__msg__RvizParam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_visualization_msgs__msg__RvizParam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_visualization_msgs__msg__RvizParam__Sequence__copy(
  const rmf_visualization_msgs__msg__RvizParam__Sequence * input,
  rmf_visualization_msgs__msg__RvizParam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_visualization_msgs__msg__RvizParam);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_visualization_msgs__msg__RvizParam * data =
      (rmf_visualization_msgs__msg__RvizParam *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_visualization_msgs__msg__RvizParam__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_visualization_msgs__msg__RvizParam__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_visualization_msgs__msg__RvizParam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
