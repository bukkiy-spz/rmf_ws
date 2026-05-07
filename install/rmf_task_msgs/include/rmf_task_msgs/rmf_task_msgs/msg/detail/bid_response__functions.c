// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/BidResponse.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/bid_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `task_id`
// Member `errors`
#include "rosidl_runtime_c/string_functions.h"
// Member `proposal`
#include "rmf_task_msgs/msg/detail/bid_proposal__functions.h"

bool
rmf_task_msgs__msg__BidResponse__init(rmf_task_msgs__msg__BidResponse * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__BidResponse__fini(msg);
    return false;
  }
  // has_proposal
  // proposal
  if (!rmf_task_msgs__msg__BidProposal__init(&msg->proposal)) {
    rmf_task_msgs__msg__BidResponse__fini(msg);
    return false;
  }
  // errors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->errors, 0)) {
    rmf_task_msgs__msg__BidResponse__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__BidResponse__fini(rmf_task_msgs__msg__BidResponse * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // has_proposal
  // proposal
  rmf_task_msgs__msg__BidProposal__fini(&msg->proposal);
  // errors
  rosidl_runtime_c__String__Sequence__fini(&msg->errors);
}

bool
rmf_task_msgs__msg__BidResponse__are_equal(const rmf_task_msgs__msg__BidResponse * lhs, const rmf_task_msgs__msg__BidResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // has_proposal
  if (lhs->has_proposal != rhs->has_proposal) {
    return false;
  }
  // proposal
  if (!rmf_task_msgs__msg__BidProposal__are_equal(
      &(lhs->proposal), &(rhs->proposal)))
  {
    return false;
  }
  // errors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->errors), &(rhs->errors)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__BidResponse__copy(
  const rmf_task_msgs__msg__BidResponse * input,
  rmf_task_msgs__msg__BidResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // has_proposal
  output->has_proposal = input->has_proposal;
  // proposal
  if (!rmf_task_msgs__msg__BidProposal__copy(
      &(input->proposal), &(output->proposal)))
  {
    return false;
  }
  // errors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->errors), &(output->errors)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__BidResponse *
rmf_task_msgs__msg__BidResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__BidResponse * msg = (rmf_task_msgs__msg__BidResponse *)allocator.allocate(sizeof(rmf_task_msgs__msg__BidResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__BidResponse));
  bool success = rmf_task_msgs__msg__BidResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__BidResponse__destroy(rmf_task_msgs__msg__BidResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__BidResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__BidResponse__Sequence__init(rmf_task_msgs__msg__BidResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__BidResponse * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__BidResponse *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__BidResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__BidResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__BidResponse__fini(&data[i - 1]);
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
rmf_task_msgs__msg__BidResponse__Sequence__fini(rmf_task_msgs__msg__BidResponse__Sequence * array)
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
      rmf_task_msgs__msg__BidResponse__fini(&array->data[i]);
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

rmf_task_msgs__msg__BidResponse__Sequence *
rmf_task_msgs__msg__BidResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__BidResponse__Sequence * array = (rmf_task_msgs__msg__BidResponse__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__BidResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__BidResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__BidResponse__Sequence__destroy(rmf_task_msgs__msg__BidResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__BidResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__BidResponse__Sequence__are_equal(const rmf_task_msgs__msg__BidResponse__Sequence * lhs, const rmf_task_msgs__msg__BidResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__BidResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__BidResponse__Sequence__copy(
  const rmf_task_msgs__msg__BidResponse__Sequence * input,
  rmf_task_msgs__msg__BidResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__BidResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__BidResponse * data =
      (rmf_task_msgs__msg__BidResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__BidResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__BidResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__BidResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
