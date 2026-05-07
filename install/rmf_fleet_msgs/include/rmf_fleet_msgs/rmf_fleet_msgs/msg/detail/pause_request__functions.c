// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/PauseRequest.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/pause_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fleet_name`
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_fleet_msgs__msg__PauseRequest__init(rmf_fleet_msgs__msg__PauseRequest * msg)
{
  if (!msg) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_fleet_msgs__msg__PauseRequest__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_fleet_msgs__msg__PauseRequest__fini(msg);
    return false;
  }
  // mode_request_id
  // type
  // at_checkpoint
  return true;
}

void
rmf_fleet_msgs__msg__PauseRequest__fini(rmf_fleet_msgs__msg__PauseRequest * msg)
{
  if (!msg) {
    return;
  }
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // mode_request_id
  // type
  // at_checkpoint
}

bool
rmf_fleet_msgs__msg__PauseRequest__are_equal(const rmf_fleet_msgs__msg__PauseRequest * lhs, const rmf_fleet_msgs__msg__PauseRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fleet_name), &(rhs->fleet_name)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // mode_request_id
  if (lhs->mode_request_id != rhs->mode_request_id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // at_checkpoint
  if (lhs->at_checkpoint != rhs->at_checkpoint) {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__PauseRequest__copy(
  const rmf_fleet_msgs__msg__PauseRequest * input,
  rmf_fleet_msgs__msg__PauseRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__copy(
      &(input->fleet_name), &(output->fleet_name)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // mode_request_id
  output->mode_request_id = input->mode_request_id;
  // type
  output->type = input->type;
  // at_checkpoint
  output->at_checkpoint = input->at_checkpoint;
  return true;
}

rmf_fleet_msgs__msg__PauseRequest *
rmf_fleet_msgs__msg__PauseRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__PauseRequest * msg = (rmf_fleet_msgs__msg__PauseRequest *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__PauseRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__PauseRequest));
  bool success = rmf_fleet_msgs__msg__PauseRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__PauseRequest__destroy(rmf_fleet_msgs__msg__PauseRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__PauseRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__PauseRequest__Sequence__init(rmf_fleet_msgs__msg__PauseRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__PauseRequest * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__PauseRequest *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__PauseRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__PauseRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__PauseRequest__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__PauseRequest__Sequence__fini(rmf_fleet_msgs__msg__PauseRequest__Sequence * array)
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
      rmf_fleet_msgs__msg__PauseRequest__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__PauseRequest__Sequence *
rmf_fleet_msgs__msg__PauseRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__PauseRequest__Sequence * array = (rmf_fleet_msgs__msg__PauseRequest__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__PauseRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__PauseRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__PauseRequest__Sequence__destroy(rmf_fleet_msgs__msg__PauseRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__PauseRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__PauseRequest__Sequence__are_equal(const rmf_fleet_msgs__msg__PauseRequest__Sequence * lhs, const rmf_fleet_msgs__msg__PauseRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__PauseRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__PauseRequest__Sequence__copy(
  const rmf_fleet_msgs__msg__PauseRequest__Sequence * input,
  rmf_fleet_msgs__msg__PauseRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__PauseRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__PauseRequest * data =
      (rmf_fleet_msgs__msg__PauseRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__PauseRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__PauseRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__PauseRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
