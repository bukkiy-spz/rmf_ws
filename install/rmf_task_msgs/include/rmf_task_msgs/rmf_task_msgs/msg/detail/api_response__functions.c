// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/ApiResponse.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/api_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `json_msg`
// Member `request_id`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__msg__ApiResponse__init(rmf_task_msgs__msg__ApiResponse * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // json_msg
  if (!rosidl_runtime_c__String__init(&msg->json_msg)) {
    rmf_task_msgs__msg__ApiResponse__fini(msg);
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__init(&msg->request_id)) {
    rmf_task_msgs__msg__ApiResponse__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__ApiResponse__fini(rmf_task_msgs__msg__ApiResponse * msg)
{
  if (!msg) {
    return;
  }
  // type
  // json_msg
  rosidl_runtime_c__String__fini(&msg->json_msg);
  // request_id
  rosidl_runtime_c__String__fini(&msg->request_id);
}

bool
rmf_task_msgs__msg__ApiResponse__are_equal(const rmf_task_msgs__msg__ApiResponse * lhs, const rmf_task_msgs__msg__ApiResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // json_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->json_msg), &(rhs->json_msg)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_id), &(rhs->request_id)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__ApiResponse__copy(
  const rmf_task_msgs__msg__ApiResponse * input,
  rmf_task_msgs__msg__ApiResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // json_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->json_msg), &(output->json_msg)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__copy(
      &(input->request_id), &(output->request_id)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__ApiResponse *
rmf_task_msgs__msg__ApiResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__ApiResponse * msg = (rmf_task_msgs__msg__ApiResponse *)allocator.allocate(sizeof(rmf_task_msgs__msg__ApiResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__ApiResponse));
  bool success = rmf_task_msgs__msg__ApiResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__ApiResponse__destroy(rmf_task_msgs__msg__ApiResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__ApiResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__ApiResponse__Sequence__init(rmf_task_msgs__msg__ApiResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__ApiResponse * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__ApiResponse *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__ApiResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__ApiResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__ApiResponse__fini(&data[i - 1]);
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
rmf_task_msgs__msg__ApiResponse__Sequence__fini(rmf_task_msgs__msg__ApiResponse__Sequence * array)
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
      rmf_task_msgs__msg__ApiResponse__fini(&array->data[i]);
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

rmf_task_msgs__msg__ApiResponse__Sequence *
rmf_task_msgs__msg__ApiResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__ApiResponse__Sequence * array = (rmf_task_msgs__msg__ApiResponse__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__ApiResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__ApiResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__ApiResponse__Sequence__destroy(rmf_task_msgs__msg__ApiResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__ApiResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__ApiResponse__Sequence__are_equal(const rmf_task_msgs__msg__ApiResponse__Sequence * lhs, const rmf_task_msgs__msg__ApiResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__ApiResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__ApiResponse__Sequence__copy(
  const rmf_task_msgs__msg__ApiResponse__Sequence * input,
  rmf_task_msgs__msg__ApiResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__ApiResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__ApiResponse * data =
      (rmf_task_msgs__msg__ApiResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__ApiResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__ApiResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__ApiResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
