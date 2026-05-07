// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_scheduler_msgs:msg/Payload.idl
// generated code does not contain a copyright notice
#include "rmf_scheduler_msgs/msg/detail/payload__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `topic`
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rmf_scheduler_msgs__msg__Payload__init(rmf_scheduler_msgs__msg__Payload * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // topic
  if (!rosidl_runtime_c__String__init(&msg->topic)) {
    rmf_scheduler_msgs__msg__Payload__fini(msg);
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    rmf_scheduler_msgs__msg__Payload__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    rmf_scheduler_msgs__msg__Payload__fini(msg);
    return false;
  }
  return true;
}

void
rmf_scheduler_msgs__msg__Payload__fini(rmf_scheduler_msgs__msg__Payload * msg)
{
  if (!msg) {
    return;
  }
  // type
  // topic
  rosidl_runtime_c__String__fini(&msg->topic);
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
rmf_scheduler_msgs__msg__Payload__are_equal(const rmf_scheduler_msgs__msg__Payload * lhs, const rmf_scheduler_msgs__msg__Payload * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic), &(rhs->topic)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
rmf_scheduler_msgs__msg__Payload__copy(
  const rmf_scheduler_msgs__msg__Payload * input,
  rmf_scheduler_msgs__msg__Payload * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // topic
  if (!rosidl_runtime_c__String__copy(
      &(input->topic), &(output->topic)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

rmf_scheduler_msgs__msg__Payload *
rmf_scheduler_msgs__msg__Payload__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__Payload * msg = (rmf_scheduler_msgs__msg__Payload *)allocator.allocate(sizeof(rmf_scheduler_msgs__msg__Payload), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_scheduler_msgs__msg__Payload));
  bool success = rmf_scheduler_msgs__msg__Payload__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_scheduler_msgs__msg__Payload__destroy(rmf_scheduler_msgs__msg__Payload * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_scheduler_msgs__msg__Payload__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_scheduler_msgs__msg__Payload__Sequence__init(rmf_scheduler_msgs__msg__Payload__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__Payload * data = NULL;

  if (size) {
    data = (rmf_scheduler_msgs__msg__Payload *)allocator.zero_allocate(size, sizeof(rmf_scheduler_msgs__msg__Payload), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_scheduler_msgs__msg__Payload__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_scheduler_msgs__msg__Payload__fini(&data[i - 1]);
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
rmf_scheduler_msgs__msg__Payload__Sequence__fini(rmf_scheduler_msgs__msg__Payload__Sequence * array)
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
      rmf_scheduler_msgs__msg__Payload__fini(&array->data[i]);
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

rmf_scheduler_msgs__msg__Payload__Sequence *
rmf_scheduler_msgs__msg__Payload__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__Payload__Sequence * array = (rmf_scheduler_msgs__msg__Payload__Sequence *)allocator.allocate(sizeof(rmf_scheduler_msgs__msg__Payload__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_scheduler_msgs__msg__Payload__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_scheduler_msgs__msg__Payload__Sequence__destroy(rmf_scheduler_msgs__msg__Payload__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_scheduler_msgs__msg__Payload__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_scheduler_msgs__msg__Payload__Sequence__are_equal(const rmf_scheduler_msgs__msg__Payload__Sequence * lhs, const rmf_scheduler_msgs__msg__Payload__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_scheduler_msgs__msg__Payload__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_scheduler_msgs__msg__Payload__Sequence__copy(
  const rmf_scheduler_msgs__msg__Payload__Sequence * input,
  rmf_scheduler_msgs__msg__Payload__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_scheduler_msgs__msg__Payload);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_scheduler_msgs__msg__Payload * data =
      (rmf_scheduler_msgs__msg__Payload *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_scheduler_msgs__msg__Payload__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_scheduler_msgs__msg__Payload__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_scheduler_msgs__msg__Payload__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
