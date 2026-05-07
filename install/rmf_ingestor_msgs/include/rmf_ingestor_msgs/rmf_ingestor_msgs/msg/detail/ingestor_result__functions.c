// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_ingestor_msgs:msg/IngestorResult.idl
// generated code does not contain a copyright notice
#include "rmf_ingestor_msgs/msg/detail/ingestor_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `request_guid`
// Member `source_guid`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_ingestor_msgs__msg__IngestorResult__init(rmf_ingestor_msgs__msg__IngestorResult * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    rmf_ingestor_msgs__msg__IngestorResult__fini(msg);
    return false;
  }
  // request_guid
  if (!rosidl_runtime_c__String__init(&msg->request_guid)) {
    rmf_ingestor_msgs__msg__IngestorResult__fini(msg);
    return false;
  }
  // source_guid
  if (!rosidl_runtime_c__String__init(&msg->source_guid)) {
    rmf_ingestor_msgs__msg__IngestorResult__fini(msg);
    return false;
  }
  // status
  return true;
}

void
rmf_ingestor_msgs__msg__IngestorResult__fini(rmf_ingestor_msgs__msg__IngestorResult * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
  // request_guid
  rosidl_runtime_c__String__fini(&msg->request_guid);
  // source_guid
  rosidl_runtime_c__String__fini(&msg->source_guid);
  // status
}

bool
rmf_ingestor_msgs__msg__IngestorResult__are_equal(const rmf_ingestor_msgs__msg__IngestorResult * lhs, const rmf_ingestor_msgs__msg__IngestorResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  // request_guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_guid), &(rhs->request_guid)))
  {
    return false;
  }
  // source_guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source_guid), &(rhs->source_guid)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
rmf_ingestor_msgs__msg__IngestorResult__copy(
  const rmf_ingestor_msgs__msg__IngestorResult * input,
  rmf_ingestor_msgs__msg__IngestorResult * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  // request_guid
  if (!rosidl_runtime_c__String__copy(
      &(input->request_guid), &(output->request_guid)))
  {
    return false;
  }
  // source_guid
  if (!rosidl_runtime_c__String__copy(
      &(input->source_guid), &(output->source_guid)))
  {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

rmf_ingestor_msgs__msg__IngestorResult *
rmf_ingestor_msgs__msg__IngestorResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_ingestor_msgs__msg__IngestorResult * msg = (rmf_ingestor_msgs__msg__IngestorResult *)allocator.allocate(sizeof(rmf_ingestor_msgs__msg__IngestorResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_ingestor_msgs__msg__IngestorResult));
  bool success = rmf_ingestor_msgs__msg__IngestorResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_ingestor_msgs__msg__IngestorResult__destroy(rmf_ingestor_msgs__msg__IngestorResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_ingestor_msgs__msg__IngestorResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_ingestor_msgs__msg__IngestorResult__Sequence__init(rmf_ingestor_msgs__msg__IngestorResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_ingestor_msgs__msg__IngestorResult * data = NULL;

  if (size) {
    data = (rmf_ingestor_msgs__msg__IngestorResult *)allocator.zero_allocate(size, sizeof(rmf_ingestor_msgs__msg__IngestorResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_ingestor_msgs__msg__IngestorResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_ingestor_msgs__msg__IngestorResult__fini(&data[i - 1]);
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
rmf_ingestor_msgs__msg__IngestorResult__Sequence__fini(rmf_ingestor_msgs__msg__IngestorResult__Sequence * array)
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
      rmf_ingestor_msgs__msg__IngestorResult__fini(&array->data[i]);
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

rmf_ingestor_msgs__msg__IngestorResult__Sequence *
rmf_ingestor_msgs__msg__IngestorResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_ingestor_msgs__msg__IngestorResult__Sequence * array = (rmf_ingestor_msgs__msg__IngestorResult__Sequence *)allocator.allocate(sizeof(rmf_ingestor_msgs__msg__IngestorResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_ingestor_msgs__msg__IngestorResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_ingestor_msgs__msg__IngestorResult__Sequence__destroy(rmf_ingestor_msgs__msg__IngestorResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_ingestor_msgs__msg__IngestorResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_ingestor_msgs__msg__IngestorResult__Sequence__are_equal(const rmf_ingestor_msgs__msg__IngestorResult__Sequence * lhs, const rmf_ingestor_msgs__msg__IngestorResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_ingestor_msgs__msg__IngestorResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_ingestor_msgs__msg__IngestorResult__Sequence__copy(
  const rmf_ingestor_msgs__msg__IngestorResult__Sequence * input,
  rmf_ingestor_msgs__msg__IngestorResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_ingestor_msgs__msg__IngestorResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_ingestor_msgs__msg__IngestorResult * data =
      (rmf_ingestor_msgs__msg__IngestorResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_ingestor_msgs__msg__IngestorResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_ingestor_msgs__msg__IngestorResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_ingestor_msgs__msg__IngestorResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
