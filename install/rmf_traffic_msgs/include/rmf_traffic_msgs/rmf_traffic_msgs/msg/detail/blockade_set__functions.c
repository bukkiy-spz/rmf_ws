// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/BlockadeSet.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/blockade_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path`
#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__functions.h"

bool
rmf_traffic_msgs__msg__BlockadeSet__init(rmf_traffic_msgs__msg__BlockadeSet * msg)
{
  if (!msg) {
    return false;
  }
  // participant
  // reservation
  // radius
  // path
  if (!rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__init(&msg->path, 0)) {
    rmf_traffic_msgs__msg__BlockadeSet__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__BlockadeSet__fini(rmf_traffic_msgs__msg__BlockadeSet * msg)
{
  if (!msg) {
    return;
  }
  // participant
  // reservation
  // radius
  // path
  rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__fini(&msg->path);
}

bool
rmf_traffic_msgs__msg__BlockadeSet__are_equal(const rmf_traffic_msgs__msg__BlockadeSet * lhs, const rmf_traffic_msgs__msg__BlockadeSet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // participant
  if (lhs->participant != rhs->participant) {
    return false;
  }
  // reservation
  if (lhs->reservation != rhs->reservation) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // path
  if (!rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeSet__copy(
  const rmf_traffic_msgs__msg__BlockadeSet * input,
  rmf_traffic_msgs__msg__BlockadeSet * output)
{
  if (!input || !output) {
    return false;
  }
  // participant
  output->participant = input->participant;
  // reservation
  output->reservation = input->reservation;
  // radius
  output->radius = input->radius;
  // path
  if (!rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__BlockadeSet *
rmf_traffic_msgs__msg__BlockadeSet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeSet * msg = (rmf_traffic_msgs__msg__BlockadeSet *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeSet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__BlockadeSet));
  bool success = rmf_traffic_msgs__msg__BlockadeSet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__BlockadeSet__destroy(rmf_traffic_msgs__msg__BlockadeSet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__BlockadeSet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__BlockadeSet__Sequence__init(rmf_traffic_msgs__msg__BlockadeSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeSet * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__BlockadeSet *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__BlockadeSet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__BlockadeSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__BlockadeSet__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__BlockadeSet__Sequence__fini(rmf_traffic_msgs__msg__BlockadeSet__Sequence * array)
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
      rmf_traffic_msgs__msg__BlockadeSet__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__BlockadeSet__Sequence *
rmf_traffic_msgs__msg__BlockadeSet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeSet__Sequence * array = (rmf_traffic_msgs__msg__BlockadeSet__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeSet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__BlockadeSet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__BlockadeSet__Sequence__destroy(rmf_traffic_msgs__msg__BlockadeSet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__BlockadeSet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__BlockadeSet__Sequence__are_equal(const rmf_traffic_msgs__msg__BlockadeSet__Sequence * lhs, const rmf_traffic_msgs__msg__BlockadeSet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeSet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeSet__Sequence__copy(
  const rmf_traffic_msgs__msg__BlockadeSet__Sequence * input,
  rmf_traffic_msgs__msg__BlockadeSet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__BlockadeSet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__BlockadeSet * data =
      (rmf_traffic_msgs__msg__BlockadeSet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__BlockadeSet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__BlockadeSet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeSet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
