// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type_guid`
// Member `compartment_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_ingestor_msgs__msg__IngestorRequestItem__init(rmf_ingestor_msgs__msg__IngestorRequestItem * msg)
{
  if (!msg) {
    return false;
  }
  // type_guid
  if (!rosidl_runtime_c__String__init(&msg->type_guid)) {
    rmf_ingestor_msgs__msg__IngestorRequestItem__fini(msg);
    return false;
  }
  // quantity
  // compartment_name
  if (!rosidl_runtime_c__String__init(&msg->compartment_name)) {
    rmf_ingestor_msgs__msg__IngestorRequestItem__fini(msg);
    return false;
  }
  return true;
}

void
rmf_ingestor_msgs__msg__IngestorRequestItem__fini(rmf_ingestor_msgs__msg__IngestorRequestItem * msg)
{
  if (!msg) {
    return;
  }
  // type_guid
  rosidl_runtime_c__String__fini(&msg->type_guid);
  // quantity
  // compartment_name
  rosidl_runtime_c__String__fini(&msg->compartment_name);
}

bool
rmf_ingestor_msgs__msg__IngestorRequestItem__are_equal(const rmf_ingestor_msgs__msg__IngestorRequestItem * lhs, const rmf_ingestor_msgs__msg__IngestorRequestItem * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type_guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type_guid), &(rhs->type_guid)))
  {
    return false;
  }
  // quantity
  if (lhs->quantity != rhs->quantity) {
    return false;
  }
  // compartment_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->compartment_name), &(rhs->compartment_name)))
  {
    return false;
  }
  return true;
}

bool
rmf_ingestor_msgs__msg__IngestorRequestItem__copy(
  const rmf_ingestor_msgs__msg__IngestorRequestItem * input,
  rmf_ingestor_msgs__msg__IngestorRequestItem * output)
{
  if (!input || !output) {
    return false;
  }
  // type_guid
  if (!rosidl_runtime_c__String__copy(
      &(input->type_guid), &(output->type_guid)))
  {
    return false;
  }
  // quantity
  output->quantity = input->quantity;
  // compartment_name
  if (!rosidl_runtime_c__String__copy(
      &(input->compartment_name), &(output->compartment_name)))
  {
    return false;
  }
  return true;
}

rmf_ingestor_msgs__msg__IngestorRequestItem *
rmf_ingestor_msgs__msg__IngestorRequestItem__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_ingestor_msgs__msg__IngestorRequestItem * msg = (rmf_ingestor_msgs__msg__IngestorRequestItem *)allocator.allocate(sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem));
  bool success = rmf_ingestor_msgs__msg__IngestorRequestItem__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_ingestor_msgs__msg__IngestorRequestItem__destroy(rmf_ingestor_msgs__msg__IngestorRequestItem * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_ingestor_msgs__msg__IngestorRequestItem__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_ingestor_msgs__msg__IngestorRequestItem * data = NULL;

  if (size) {
    data = (rmf_ingestor_msgs__msg__IngestorRequestItem *)allocator.zero_allocate(size, sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_ingestor_msgs__msg__IngestorRequestItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_ingestor_msgs__msg__IngestorRequestItem__fini(&data[i - 1]);
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
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array)
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
      rmf_ingestor_msgs__msg__IngestorRequestItem__fini(&array->data[i]);
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

rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array = (rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *)allocator.allocate(sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__destroy(rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__are_equal(const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * lhs, const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_ingestor_msgs__msg__IngestorRequestItem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__copy(
  const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * input,
  rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_ingestor_msgs__msg__IngestorRequestItem * data =
      (rmf_ingestor_msgs__msg__IngestorRequestItem *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_ingestor_msgs__msg__IngestorRequestItem__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_ingestor_msgs__msg__IngestorRequestItem__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_ingestor_msgs__msg__IngestorRequestItem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
