// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_dispenser_msgs:msg/DispenserRequest.idl
// generated code does not contain a copyright notice
#include "rmf_dispenser_msgs/msg/detail/dispenser_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `request_guid`
// Member `target_guid`
// Member `transporter_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `items`
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"

bool
rmf_dispenser_msgs__msg__DispenserRequest__init(rmf_dispenser_msgs__msg__DispenserRequest * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    rmf_dispenser_msgs__msg__DispenserRequest__fini(msg);
    return false;
  }
  // request_guid
  if (!rosidl_runtime_c__String__init(&msg->request_guid)) {
    rmf_dispenser_msgs__msg__DispenserRequest__fini(msg);
    return false;
  }
  // target_guid
  if (!rosidl_runtime_c__String__init(&msg->target_guid)) {
    rmf_dispenser_msgs__msg__DispenserRequest__fini(msg);
    return false;
  }
  // transporter_type
  if (!rosidl_runtime_c__String__init(&msg->transporter_type)) {
    rmf_dispenser_msgs__msg__DispenserRequest__fini(msg);
    return false;
  }
  // items
  if (!rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(&msg->items, 0)) {
    rmf_dispenser_msgs__msg__DispenserRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_dispenser_msgs__msg__DispenserRequest__fini(rmf_dispenser_msgs__msg__DispenserRequest * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
  // request_guid
  rosidl_runtime_c__String__fini(&msg->request_guid);
  // target_guid
  rosidl_runtime_c__String__fini(&msg->target_guid);
  // transporter_type
  rosidl_runtime_c__String__fini(&msg->transporter_type);
  // items
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(&msg->items);
}

bool
rmf_dispenser_msgs__msg__DispenserRequest__are_equal(const rmf_dispenser_msgs__msg__DispenserRequest * lhs, const rmf_dispenser_msgs__msg__DispenserRequest * rhs)
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
  // target_guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_guid), &(rhs->target_guid)))
  {
    return false;
  }
  // transporter_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->transporter_type), &(rhs->transporter_type)))
  {
    return false;
  }
  // items
  if (!rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__are_equal(
      &(lhs->items), &(rhs->items)))
  {
    return false;
  }
  return true;
}

bool
rmf_dispenser_msgs__msg__DispenserRequest__copy(
  const rmf_dispenser_msgs__msg__DispenserRequest * input,
  rmf_dispenser_msgs__msg__DispenserRequest * output)
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
  // target_guid
  if (!rosidl_runtime_c__String__copy(
      &(input->target_guid), &(output->target_guid)))
  {
    return false;
  }
  // transporter_type
  if (!rosidl_runtime_c__String__copy(
      &(input->transporter_type), &(output->transporter_type)))
  {
    return false;
  }
  // items
  if (!rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__copy(
      &(input->items), &(output->items)))
  {
    return false;
  }
  return true;
}

rmf_dispenser_msgs__msg__DispenserRequest *
rmf_dispenser_msgs__msg__DispenserRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_dispenser_msgs__msg__DispenserRequest * msg = (rmf_dispenser_msgs__msg__DispenserRequest *)allocator.allocate(sizeof(rmf_dispenser_msgs__msg__DispenserRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_dispenser_msgs__msg__DispenserRequest));
  bool success = rmf_dispenser_msgs__msg__DispenserRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_dispenser_msgs__msg__DispenserRequest__destroy(rmf_dispenser_msgs__msg__DispenserRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_dispenser_msgs__msg__DispenserRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_dispenser_msgs__msg__DispenserRequest__Sequence__init(rmf_dispenser_msgs__msg__DispenserRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_dispenser_msgs__msg__DispenserRequest * data = NULL;

  if (size) {
    data = (rmf_dispenser_msgs__msg__DispenserRequest *)allocator.zero_allocate(size, sizeof(rmf_dispenser_msgs__msg__DispenserRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_dispenser_msgs__msg__DispenserRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_dispenser_msgs__msg__DispenserRequest__fini(&data[i - 1]);
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
rmf_dispenser_msgs__msg__DispenserRequest__Sequence__fini(rmf_dispenser_msgs__msg__DispenserRequest__Sequence * array)
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
      rmf_dispenser_msgs__msg__DispenserRequest__fini(&array->data[i]);
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

rmf_dispenser_msgs__msg__DispenserRequest__Sequence *
rmf_dispenser_msgs__msg__DispenserRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_dispenser_msgs__msg__DispenserRequest__Sequence * array = (rmf_dispenser_msgs__msg__DispenserRequest__Sequence *)allocator.allocate(sizeof(rmf_dispenser_msgs__msg__DispenserRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_dispenser_msgs__msg__DispenserRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_dispenser_msgs__msg__DispenserRequest__Sequence__destroy(rmf_dispenser_msgs__msg__DispenserRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_dispenser_msgs__msg__DispenserRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_dispenser_msgs__msg__DispenserRequest__Sequence__are_equal(const rmf_dispenser_msgs__msg__DispenserRequest__Sequence * lhs, const rmf_dispenser_msgs__msg__DispenserRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_dispenser_msgs__msg__DispenserRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_dispenser_msgs__msg__DispenserRequest__Sequence__copy(
  const rmf_dispenser_msgs__msg__DispenserRequest__Sequence * input,
  rmf_dispenser_msgs__msg__DispenserRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_dispenser_msgs__msg__DispenserRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_dispenser_msgs__msg__DispenserRequest * data =
      (rmf_dispenser_msgs__msg__DispenserRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_dispenser_msgs__msg__DispenserRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_dispenser_msgs__msg__DispenserRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_dispenser_msgs__msg__DispenserRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
