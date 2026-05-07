// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/BlockadeReached.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/blockade_reached__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rmf_traffic_msgs__msg__BlockadeReached__init(rmf_traffic_msgs__msg__BlockadeReached * msg)
{
  if (!msg) {
    return false;
  }
  // participant
  // reservation
  // checkpoint
  return true;
}

void
rmf_traffic_msgs__msg__BlockadeReached__fini(rmf_traffic_msgs__msg__BlockadeReached * msg)
{
  if (!msg) {
    return;
  }
  // participant
  // reservation
  // checkpoint
}

bool
rmf_traffic_msgs__msg__BlockadeReached__are_equal(const rmf_traffic_msgs__msg__BlockadeReached * lhs, const rmf_traffic_msgs__msg__BlockadeReached * rhs)
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
  // checkpoint
  if (lhs->checkpoint != rhs->checkpoint) {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeReached__copy(
  const rmf_traffic_msgs__msg__BlockadeReached * input,
  rmf_traffic_msgs__msg__BlockadeReached * output)
{
  if (!input || !output) {
    return false;
  }
  // participant
  output->participant = input->participant;
  // reservation
  output->reservation = input->reservation;
  // checkpoint
  output->checkpoint = input->checkpoint;
  return true;
}

rmf_traffic_msgs__msg__BlockadeReached *
rmf_traffic_msgs__msg__BlockadeReached__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeReached * msg = (rmf_traffic_msgs__msg__BlockadeReached *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeReached), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__BlockadeReached));
  bool success = rmf_traffic_msgs__msg__BlockadeReached__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__BlockadeReached__destroy(rmf_traffic_msgs__msg__BlockadeReached * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__BlockadeReached__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__BlockadeReached__Sequence__init(rmf_traffic_msgs__msg__BlockadeReached__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeReached * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__BlockadeReached *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__BlockadeReached), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__BlockadeReached__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__BlockadeReached__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__BlockadeReached__Sequence__fini(rmf_traffic_msgs__msg__BlockadeReached__Sequence * array)
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
      rmf_traffic_msgs__msg__BlockadeReached__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__BlockadeReached__Sequence *
rmf_traffic_msgs__msg__BlockadeReached__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeReached__Sequence * array = (rmf_traffic_msgs__msg__BlockadeReached__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeReached__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__BlockadeReached__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__BlockadeReached__Sequence__destroy(rmf_traffic_msgs__msg__BlockadeReached__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__BlockadeReached__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__BlockadeReached__Sequence__are_equal(const rmf_traffic_msgs__msg__BlockadeReached__Sequence * lhs, const rmf_traffic_msgs__msg__BlockadeReached__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeReached__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeReached__Sequence__copy(
  const rmf_traffic_msgs__msg__BlockadeReached__Sequence * input,
  rmf_traffic_msgs__msg__BlockadeReached__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__BlockadeReached);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__BlockadeReached * data =
      (rmf_traffic_msgs__msg__BlockadeReached *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__BlockadeReached__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__BlockadeReached__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeReached__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
