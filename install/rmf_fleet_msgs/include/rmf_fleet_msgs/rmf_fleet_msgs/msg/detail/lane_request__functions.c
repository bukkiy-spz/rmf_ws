// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/LaneRequest.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/lane_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fleet_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `open_lanes`
// Member `close_lanes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rmf_fleet_msgs__msg__LaneRequest__init(rmf_fleet_msgs__msg__LaneRequest * msg)
{
  if (!msg) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_fleet_msgs__msg__LaneRequest__fini(msg);
    return false;
  }
  // open_lanes
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->open_lanes, 0)) {
    rmf_fleet_msgs__msg__LaneRequest__fini(msg);
    return false;
  }
  // close_lanes
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->close_lanes, 0)) {
    rmf_fleet_msgs__msg__LaneRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__LaneRequest__fini(rmf_fleet_msgs__msg__LaneRequest * msg)
{
  if (!msg) {
    return;
  }
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // open_lanes
  rosidl_runtime_c__uint64__Sequence__fini(&msg->open_lanes);
  // close_lanes
  rosidl_runtime_c__uint64__Sequence__fini(&msg->close_lanes);
}

bool
rmf_fleet_msgs__msg__LaneRequest__are_equal(const rmf_fleet_msgs__msg__LaneRequest * lhs, const rmf_fleet_msgs__msg__LaneRequest * rhs)
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
  // open_lanes
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->open_lanes), &(rhs->open_lanes)))
  {
    return false;
  }
  // close_lanes
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->close_lanes), &(rhs->close_lanes)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__LaneRequest__copy(
  const rmf_fleet_msgs__msg__LaneRequest * input,
  rmf_fleet_msgs__msg__LaneRequest * output)
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
  // open_lanes
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->open_lanes), &(output->open_lanes)))
  {
    return false;
  }
  // close_lanes
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->close_lanes), &(output->close_lanes)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__msg__LaneRequest *
rmf_fleet_msgs__msg__LaneRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__LaneRequest * msg = (rmf_fleet_msgs__msg__LaneRequest *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__LaneRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__LaneRequest));
  bool success = rmf_fleet_msgs__msg__LaneRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__LaneRequest__destroy(rmf_fleet_msgs__msg__LaneRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__LaneRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__LaneRequest__Sequence__init(rmf_fleet_msgs__msg__LaneRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__LaneRequest * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__LaneRequest *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__LaneRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__LaneRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__LaneRequest__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__LaneRequest__Sequence__fini(rmf_fleet_msgs__msg__LaneRequest__Sequence * array)
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
      rmf_fleet_msgs__msg__LaneRequest__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__LaneRequest__Sequence *
rmf_fleet_msgs__msg__LaneRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__LaneRequest__Sequence * array = (rmf_fleet_msgs__msg__LaneRequest__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__LaneRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__LaneRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__LaneRequest__Sequence__destroy(rmf_fleet_msgs__msg__LaneRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__LaneRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__LaneRequest__Sequence__are_equal(const rmf_fleet_msgs__msg__LaneRequest__Sequence * lhs, const rmf_fleet_msgs__msg__LaneRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__LaneRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__LaneRequest__Sequence__copy(
  const rmf_fleet_msgs__msg__LaneRequest__Sequence * input,
  rmf_fleet_msgs__msg__LaneRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__LaneRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__LaneRequest * data =
      (rmf_fleet_msgs__msg__LaneRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__LaneRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__LaneRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__LaneRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
