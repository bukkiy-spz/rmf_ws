// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"

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
rmf_dispenser_msgs__msg__DispenserRequestItem__init(rmf_dispenser_msgs__msg__DispenserRequestItem * msg)
{
  if (!msg) {
    return false;
  }
  // type_guid
  if (!rosidl_runtime_c__String__init(&msg->type_guid)) {
    rmf_dispenser_msgs__msg__DispenserRequestItem__fini(msg);
    return false;
  }
  // quantity
  // compartment_name
  if (!rosidl_runtime_c__String__init(&msg->compartment_name)) {
    rmf_dispenser_msgs__msg__DispenserRequestItem__fini(msg);
    return false;
  }
  return true;
}

void
rmf_dispenser_msgs__msg__DispenserRequestItem__fini(rmf_dispenser_msgs__msg__DispenserRequestItem * msg)
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
rmf_dispenser_msgs__msg__DispenserRequestItem__are_equal(const rmf_dispenser_msgs__msg__DispenserRequestItem * lhs, const rmf_dispenser_msgs__msg__DispenserRequestItem * rhs)
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
rmf_dispenser_msgs__msg__DispenserRequestItem__copy(
  const rmf_dispenser_msgs__msg__DispenserRequestItem * input,
  rmf_dispenser_msgs__msg__DispenserRequestItem * output)
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

rmf_dispenser_msgs__msg__DispenserRequestItem *
rmf_dispenser_msgs__msg__DispenserRequestItem__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_dispenser_msgs__msg__DispenserRequestItem * msg = (rmf_dispenser_msgs__msg__DispenserRequestItem *)allocator.allocate(sizeof(rmf_dispenser_msgs__msg__DispenserRequestItem), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_dispenser_msgs__msg__DispenserRequestItem));
  bool success = rmf_dispenser_msgs__msg__DispenserRequestItem__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_dispenser_msgs__msg__DispenserRequestItem__destroy(rmf_dispenser_msgs__msg__DispenserRequestItem * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_dispenser_msgs__msg__DispenserRequestItem__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_dispenser_msgs__msg__DispenserRequestItem * data = NULL;

  if (size) {
    data = (rmf_dispenser_msgs__msg__DispenserRequestItem *)allocator.zero_allocate(size, sizeof(rmf_dispenser_msgs__msg__DispenserRequestItem), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_dispenser_msgs__msg__DispenserRequestItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_dispenser_msgs__msg__DispenserRequestItem__fini(&data[i - 1]);
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
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array)
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
      rmf_dispenser_msgs__msg__DispenserRequestItem__fini(&array->data[i]);
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

rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array = (rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)allocator.allocate(sizeof(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__destroy(rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__are_equal(const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * lhs, const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_dispenser_msgs__msg__DispenserRequestItem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__copy(
  const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * input,
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_dispenser_msgs__msg__DispenserRequestItem);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_dispenser_msgs__msg__DispenserRequestItem * data =
      (rmf_dispenser_msgs__msg__DispenserRequestItem *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_dispenser_msgs__msg__DispenserRequestItem__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_dispenser_msgs__msg__DispenserRequestItem__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_dispenser_msgs__msg__DispenserRequestItem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
