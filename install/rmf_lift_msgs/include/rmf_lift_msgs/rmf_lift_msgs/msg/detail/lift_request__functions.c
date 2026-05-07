// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_lift_msgs:msg/LiftRequest.idl
// generated code does not contain a copyright notice
#include "rmf_lift_msgs/msg/detail/lift_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lift_name`
// Member `session_id`
// Member `destination_floor`
#include "rosidl_runtime_c/string_functions.h"
// Member `request_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rmf_lift_msgs__msg__LiftRequest__init(rmf_lift_msgs__msg__LiftRequest * msg)
{
  if (!msg) {
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__init(&msg->lift_name)) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
    return false;
  }
  // request_time
  if (!builtin_interfaces__msg__Time__init(&msg->request_time)) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
    return false;
  }
  // request_type
  // destination_floor
  if (!rosidl_runtime_c__String__init(&msg->destination_floor)) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
    return false;
  }
  // door_state
  return true;
}

void
rmf_lift_msgs__msg__LiftRequest__fini(rmf_lift_msgs__msg__LiftRequest * msg)
{
  if (!msg) {
    return;
  }
  // lift_name
  rosidl_runtime_c__String__fini(&msg->lift_name);
  // request_time
  builtin_interfaces__msg__Time__fini(&msg->request_time);
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
  // request_type
  // destination_floor
  rosidl_runtime_c__String__fini(&msg->destination_floor);
  // door_state
}

bool
rmf_lift_msgs__msg__LiftRequest__are_equal(const rmf_lift_msgs__msg__LiftRequest * lhs, const rmf_lift_msgs__msg__LiftRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lift_name), &(rhs->lift_name)))
  {
    return false;
  }
  // request_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->request_time), &(rhs->request_time)))
  {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->session_id), &(rhs->session_id)))
  {
    return false;
  }
  // request_type
  if (lhs->request_type != rhs->request_type) {
    return false;
  }
  // destination_floor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->destination_floor), &(rhs->destination_floor)))
  {
    return false;
  }
  // door_state
  if (lhs->door_state != rhs->door_state) {
    return false;
  }
  return true;
}

bool
rmf_lift_msgs__msg__LiftRequest__copy(
  const rmf_lift_msgs__msg__LiftRequest * input,
  rmf_lift_msgs__msg__LiftRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__copy(
      &(input->lift_name), &(output->lift_name)))
  {
    return false;
  }
  // request_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->request_time), &(output->request_time)))
  {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__copy(
      &(input->session_id), &(output->session_id)))
  {
    return false;
  }
  // request_type
  output->request_type = input->request_type;
  // destination_floor
  if (!rosidl_runtime_c__String__copy(
      &(input->destination_floor), &(output->destination_floor)))
  {
    return false;
  }
  // door_state
  output->door_state = input->door_state;
  return true;
}

rmf_lift_msgs__msg__LiftRequest *
rmf_lift_msgs__msg__LiftRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_lift_msgs__msg__LiftRequest * msg = (rmf_lift_msgs__msg__LiftRequest *)allocator.allocate(sizeof(rmf_lift_msgs__msg__LiftRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_lift_msgs__msg__LiftRequest));
  bool success = rmf_lift_msgs__msg__LiftRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_lift_msgs__msg__LiftRequest__destroy(rmf_lift_msgs__msg__LiftRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_lift_msgs__msg__LiftRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_lift_msgs__msg__LiftRequest__Sequence__init(rmf_lift_msgs__msg__LiftRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_lift_msgs__msg__LiftRequest * data = NULL;

  if (size) {
    data = (rmf_lift_msgs__msg__LiftRequest *)allocator.zero_allocate(size, sizeof(rmf_lift_msgs__msg__LiftRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_lift_msgs__msg__LiftRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_lift_msgs__msg__LiftRequest__fini(&data[i - 1]);
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
rmf_lift_msgs__msg__LiftRequest__Sequence__fini(rmf_lift_msgs__msg__LiftRequest__Sequence * array)
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
      rmf_lift_msgs__msg__LiftRequest__fini(&array->data[i]);
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

rmf_lift_msgs__msg__LiftRequest__Sequence *
rmf_lift_msgs__msg__LiftRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_lift_msgs__msg__LiftRequest__Sequence * array = (rmf_lift_msgs__msg__LiftRequest__Sequence *)allocator.allocate(sizeof(rmf_lift_msgs__msg__LiftRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_lift_msgs__msg__LiftRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_lift_msgs__msg__LiftRequest__Sequence__destroy(rmf_lift_msgs__msg__LiftRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_lift_msgs__msg__LiftRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_lift_msgs__msg__LiftRequest__Sequence__are_equal(const rmf_lift_msgs__msg__LiftRequest__Sequence * lhs, const rmf_lift_msgs__msg__LiftRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_lift_msgs__msg__LiftRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_lift_msgs__msg__LiftRequest__Sequence__copy(
  const rmf_lift_msgs__msg__LiftRequest__Sequence * input,
  rmf_lift_msgs__msg__LiftRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_lift_msgs__msg__LiftRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_lift_msgs__msg__LiftRequest * data =
      (rmf_lift_msgs__msg__LiftRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_lift_msgs__msg__LiftRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_lift_msgs__msg__LiftRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_lift_msgs__msg__LiftRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
