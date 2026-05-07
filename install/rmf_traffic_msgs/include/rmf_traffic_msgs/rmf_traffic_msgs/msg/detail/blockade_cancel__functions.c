// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/BlockadeCancel.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/blockade_cancel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rmf_traffic_msgs__msg__BlockadeCancel__init(rmf_traffic_msgs__msg__BlockadeCancel * msg)
{
  if (!msg) {
    return false;
  }
  // participant
  // all_reservations
  // reservation
  return true;
}

void
rmf_traffic_msgs__msg__BlockadeCancel__fini(rmf_traffic_msgs__msg__BlockadeCancel * msg)
{
  if (!msg) {
    return;
  }
  // participant
  // all_reservations
  // reservation
}

bool
rmf_traffic_msgs__msg__BlockadeCancel__are_equal(const rmf_traffic_msgs__msg__BlockadeCancel * lhs, const rmf_traffic_msgs__msg__BlockadeCancel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // participant
  if (lhs->participant != rhs->participant) {
    return false;
  }
  // all_reservations
  if (lhs->all_reservations != rhs->all_reservations) {
    return false;
  }
  // reservation
  if (lhs->reservation != rhs->reservation) {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeCancel__copy(
  const rmf_traffic_msgs__msg__BlockadeCancel * input,
  rmf_traffic_msgs__msg__BlockadeCancel * output)
{
  if (!input || !output) {
    return false;
  }
  // participant
  output->participant = input->participant;
  // all_reservations
  output->all_reservations = input->all_reservations;
  // reservation
  output->reservation = input->reservation;
  return true;
}

rmf_traffic_msgs__msg__BlockadeCancel *
rmf_traffic_msgs__msg__BlockadeCancel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeCancel * msg = (rmf_traffic_msgs__msg__BlockadeCancel *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeCancel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__BlockadeCancel));
  bool success = rmf_traffic_msgs__msg__BlockadeCancel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__BlockadeCancel__destroy(rmf_traffic_msgs__msg__BlockadeCancel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__BlockadeCancel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__BlockadeCancel__Sequence__init(rmf_traffic_msgs__msg__BlockadeCancel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeCancel * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__BlockadeCancel *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__BlockadeCancel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__BlockadeCancel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__BlockadeCancel__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__BlockadeCancel__Sequence__fini(rmf_traffic_msgs__msg__BlockadeCancel__Sequence * array)
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
      rmf_traffic_msgs__msg__BlockadeCancel__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__BlockadeCancel__Sequence *
rmf_traffic_msgs__msg__BlockadeCancel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeCancel__Sequence * array = (rmf_traffic_msgs__msg__BlockadeCancel__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeCancel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__BlockadeCancel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__BlockadeCancel__Sequence__destroy(rmf_traffic_msgs__msg__BlockadeCancel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__BlockadeCancel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__BlockadeCancel__Sequence__are_equal(const rmf_traffic_msgs__msg__BlockadeCancel__Sequence * lhs, const rmf_traffic_msgs__msg__BlockadeCancel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeCancel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeCancel__Sequence__copy(
  const rmf_traffic_msgs__msg__BlockadeCancel__Sequence * input,
  rmf_traffic_msgs__msg__BlockadeCancel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__BlockadeCancel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__BlockadeCancel * data =
      (rmf_traffic_msgs__msg__BlockadeCancel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__BlockadeCancel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__BlockadeCancel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeCancel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
