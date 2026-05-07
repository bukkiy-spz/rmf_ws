// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/NegotiationConclusion.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/negotiation_conclusion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `table`
#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"

bool
rmf_traffic_msgs__msg__NegotiationConclusion__init(rmf_traffic_msgs__msg__NegotiationConclusion * msg)
{
  if (!msg) {
    return false;
  }
  // conflict_version
  // resolved
  // table
  if (!rmf_traffic_msgs__msg__NegotiationKey__Sequence__init(&msg->table, 0)) {
    rmf_traffic_msgs__msg__NegotiationConclusion__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__NegotiationConclusion__fini(rmf_traffic_msgs__msg__NegotiationConclusion * msg)
{
  if (!msg) {
    return;
  }
  // conflict_version
  // resolved
  // table
  rmf_traffic_msgs__msg__NegotiationKey__Sequence__fini(&msg->table);
}

bool
rmf_traffic_msgs__msg__NegotiationConclusion__are_equal(const rmf_traffic_msgs__msg__NegotiationConclusion * lhs, const rmf_traffic_msgs__msg__NegotiationConclusion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // conflict_version
  if (lhs->conflict_version != rhs->conflict_version) {
    return false;
  }
  // resolved
  if (lhs->resolved != rhs->resolved) {
    return false;
  }
  // table
  if (!rmf_traffic_msgs__msg__NegotiationKey__Sequence__are_equal(
      &(lhs->table), &(rhs->table)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationConclusion__copy(
  const rmf_traffic_msgs__msg__NegotiationConclusion * input,
  rmf_traffic_msgs__msg__NegotiationConclusion * output)
{
  if (!input || !output) {
    return false;
  }
  // conflict_version
  output->conflict_version = input->conflict_version;
  // resolved
  output->resolved = input->resolved;
  // table
  if (!rmf_traffic_msgs__msg__NegotiationKey__Sequence__copy(
      &(input->table), &(output->table)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__NegotiationConclusion *
rmf_traffic_msgs__msg__NegotiationConclusion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationConclusion * msg = (rmf_traffic_msgs__msg__NegotiationConclusion *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationConclusion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__NegotiationConclusion));
  bool success = rmf_traffic_msgs__msg__NegotiationConclusion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__NegotiationConclusion__destroy(rmf_traffic_msgs__msg__NegotiationConclusion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__NegotiationConclusion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__init(rmf_traffic_msgs__msg__NegotiationConclusion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationConclusion * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__NegotiationConclusion *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__NegotiationConclusion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__NegotiationConclusion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__NegotiationConclusion__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__fini(rmf_traffic_msgs__msg__NegotiationConclusion__Sequence * array)
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
      rmf_traffic_msgs__msg__NegotiationConclusion__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__NegotiationConclusion__Sequence *
rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationConclusion__Sequence * array = (rmf_traffic_msgs__msg__NegotiationConclusion__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationConclusion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__destroy(rmf_traffic_msgs__msg__NegotiationConclusion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__are_equal(const rmf_traffic_msgs__msg__NegotiationConclusion__Sequence * lhs, const rmf_traffic_msgs__msg__NegotiationConclusion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationConclusion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__copy(
  const rmf_traffic_msgs__msg__NegotiationConclusion__Sequence * input,
  rmf_traffic_msgs__msg__NegotiationConclusion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__NegotiationConclusion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__NegotiationConclusion * data =
      (rmf_traffic_msgs__msg__NegotiationConclusion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__NegotiationConclusion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__NegotiationConclusion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationConclusion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
