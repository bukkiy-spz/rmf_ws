// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/NegotiationRepeat.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/negotiation_repeat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `table`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rmf_traffic_msgs__msg__NegotiationRepeat__init(rmf_traffic_msgs__msg__NegotiationRepeat * msg)
{
  if (!msg) {
    return false;
  }
  // conflict_version
  // table
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->table, 0)) {
    rmf_traffic_msgs__msg__NegotiationRepeat__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__NegotiationRepeat__fini(rmf_traffic_msgs__msg__NegotiationRepeat * msg)
{
  if (!msg) {
    return;
  }
  // conflict_version
  // table
  rosidl_runtime_c__uint64__Sequence__fini(&msg->table);
}

bool
rmf_traffic_msgs__msg__NegotiationRepeat__are_equal(const rmf_traffic_msgs__msg__NegotiationRepeat * lhs, const rmf_traffic_msgs__msg__NegotiationRepeat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // conflict_version
  if (lhs->conflict_version != rhs->conflict_version) {
    return false;
  }
  // table
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->table), &(rhs->table)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationRepeat__copy(
  const rmf_traffic_msgs__msg__NegotiationRepeat * input,
  rmf_traffic_msgs__msg__NegotiationRepeat * output)
{
  if (!input || !output) {
    return false;
  }
  // conflict_version
  output->conflict_version = input->conflict_version;
  // table
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->table), &(output->table)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__NegotiationRepeat *
rmf_traffic_msgs__msg__NegotiationRepeat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationRepeat * msg = (rmf_traffic_msgs__msg__NegotiationRepeat *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationRepeat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__NegotiationRepeat));
  bool success = rmf_traffic_msgs__msg__NegotiationRepeat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__NegotiationRepeat__destroy(rmf_traffic_msgs__msg__NegotiationRepeat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__NegotiationRepeat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__init(rmf_traffic_msgs__msg__NegotiationRepeat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationRepeat * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__NegotiationRepeat *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__NegotiationRepeat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__NegotiationRepeat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__NegotiationRepeat__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__fini(rmf_traffic_msgs__msg__NegotiationRepeat__Sequence * array)
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
      rmf_traffic_msgs__msg__NegotiationRepeat__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__NegotiationRepeat__Sequence *
rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationRepeat__Sequence * array = (rmf_traffic_msgs__msg__NegotiationRepeat__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationRepeat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__destroy(rmf_traffic_msgs__msg__NegotiationRepeat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__are_equal(const rmf_traffic_msgs__msg__NegotiationRepeat__Sequence * lhs, const rmf_traffic_msgs__msg__NegotiationRepeat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationRepeat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__copy(
  const rmf_traffic_msgs__msg__NegotiationRepeat__Sequence * input,
  rmf_traffic_msgs__msg__NegotiationRepeat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__NegotiationRepeat);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__NegotiationRepeat * data =
      (rmf_traffic_msgs__msg__NegotiationRepeat *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__NegotiationRepeat__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__NegotiationRepeat__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationRepeat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
