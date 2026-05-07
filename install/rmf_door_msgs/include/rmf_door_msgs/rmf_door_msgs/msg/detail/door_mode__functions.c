// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_door_msgs:msg/DoorMode.idl
// generated code does not contain a copyright notice
#include "rmf_door_msgs/msg/detail/door_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rmf_door_msgs__msg__DoorMode__init(rmf_door_msgs__msg__DoorMode * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
rmf_door_msgs__msg__DoorMode__fini(rmf_door_msgs__msg__DoorMode * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
rmf_door_msgs__msg__DoorMode__are_equal(const rmf_door_msgs__msg__DoorMode * lhs, const rmf_door_msgs__msg__DoorMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
rmf_door_msgs__msg__DoorMode__copy(
  const rmf_door_msgs__msg__DoorMode * input,
  rmf_door_msgs__msg__DoorMode * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

rmf_door_msgs__msg__DoorMode *
rmf_door_msgs__msg__DoorMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_door_msgs__msg__DoorMode * msg = (rmf_door_msgs__msg__DoorMode *)allocator.allocate(sizeof(rmf_door_msgs__msg__DoorMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_door_msgs__msg__DoorMode));
  bool success = rmf_door_msgs__msg__DoorMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_door_msgs__msg__DoorMode__destroy(rmf_door_msgs__msg__DoorMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_door_msgs__msg__DoorMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_door_msgs__msg__DoorMode__Sequence__init(rmf_door_msgs__msg__DoorMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_door_msgs__msg__DoorMode * data = NULL;

  if (size) {
    data = (rmf_door_msgs__msg__DoorMode *)allocator.zero_allocate(size, sizeof(rmf_door_msgs__msg__DoorMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_door_msgs__msg__DoorMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_door_msgs__msg__DoorMode__fini(&data[i - 1]);
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
rmf_door_msgs__msg__DoorMode__Sequence__fini(rmf_door_msgs__msg__DoorMode__Sequence * array)
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
      rmf_door_msgs__msg__DoorMode__fini(&array->data[i]);
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

rmf_door_msgs__msg__DoorMode__Sequence *
rmf_door_msgs__msg__DoorMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_door_msgs__msg__DoorMode__Sequence * array = (rmf_door_msgs__msg__DoorMode__Sequence *)allocator.allocate(sizeof(rmf_door_msgs__msg__DoorMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_door_msgs__msg__DoorMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_door_msgs__msg__DoorMode__Sequence__destroy(rmf_door_msgs__msg__DoorMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_door_msgs__msg__DoorMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_door_msgs__msg__DoorMode__Sequence__are_equal(const rmf_door_msgs__msg__DoorMode__Sequence * lhs, const rmf_door_msgs__msg__DoorMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_door_msgs__msg__DoorMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_door_msgs__msg__DoorMode__Sequence__copy(
  const rmf_door_msgs__msg__DoorMode__Sequence * input,
  rmf_door_msgs__msg__DoorMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_door_msgs__msg__DoorMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_door_msgs__msg__DoorMode * data =
      (rmf_door_msgs__msg__DoorMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_door_msgs__msg__DoorMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_door_msgs__msg__DoorMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_door_msgs__msg__DoorMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
