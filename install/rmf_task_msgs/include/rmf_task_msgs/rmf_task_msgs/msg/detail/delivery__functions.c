// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Delivery.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/delivery__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `task_id`
// Member `pickup_place_name`
// Member `pickup_dispenser`
// Member `dropoff_place_name`
// Member `dropoff_ingestor`
#include "rosidl_runtime_c/string_functions.h"
// Member `items`
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"
// Member `pickup_behavior`
// Member `dropoff_behavior`
#include "rmf_task_msgs/msg/detail/behavior__functions.h"

bool
rmf_task_msgs__msg__Delivery__init(rmf_task_msgs__msg__Delivery * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // items
  if (!rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(&msg->items, 0)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // pickup_place_name
  if (!rosidl_runtime_c__String__init(&msg->pickup_place_name)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // pickup_dispenser
  if (!rosidl_runtime_c__String__init(&msg->pickup_dispenser)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // pickup_behavior
  if (!rmf_task_msgs__msg__Behavior__init(&msg->pickup_behavior)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // dropoff_place_name
  if (!rosidl_runtime_c__String__init(&msg->dropoff_place_name)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // dropoff_ingestor
  if (!rosidl_runtime_c__String__init(&msg->dropoff_ingestor)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  // dropoff_behavior
  if (!rmf_task_msgs__msg__Behavior__init(&msg->dropoff_behavior)) {
    rmf_task_msgs__msg__Delivery__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__Delivery__fini(rmf_task_msgs__msg__Delivery * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // items
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(&msg->items);
  // pickup_place_name
  rosidl_runtime_c__String__fini(&msg->pickup_place_name);
  // pickup_dispenser
  rosidl_runtime_c__String__fini(&msg->pickup_dispenser);
  // pickup_behavior
  rmf_task_msgs__msg__Behavior__fini(&msg->pickup_behavior);
  // dropoff_place_name
  rosidl_runtime_c__String__fini(&msg->dropoff_place_name);
  // dropoff_ingestor
  rosidl_runtime_c__String__fini(&msg->dropoff_ingestor);
  // dropoff_behavior
  rmf_task_msgs__msg__Behavior__fini(&msg->dropoff_behavior);
}

bool
rmf_task_msgs__msg__Delivery__are_equal(const rmf_task_msgs__msg__Delivery * lhs, const rmf_task_msgs__msg__Delivery * rhs)
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
  // items
  if (!rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__are_equal(
      &(lhs->items), &(rhs->items)))
  {
    return false;
  }
  // pickup_place_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pickup_place_name), &(rhs->pickup_place_name)))
  {
    return false;
  }
  // pickup_dispenser
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pickup_dispenser), &(rhs->pickup_dispenser)))
  {
    return false;
  }
  // pickup_behavior
  if (!rmf_task_msgs__msg__Behavior__are_equal(
      &(lhs->pickup_behavior), &(rhs->pickup_behavior)))
  {
    return false;
  }
  // dropoff_place_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dropoff_place_name), &(rhs->dropoff_place_name)))
  {
    return false;
  }
  // dropoff_ingestor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dropoff_ingestor), &(rhs->dropoff_ingestor)))
  {
    return false;
  }
  // dropoff_behavior
  if (!rmf_task_msgs__msg__Behavior__are_equal(
      &(lhs->dropoff_behavior), &(rhs->dropoff_behavior)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__Delivery__copy(
  const rmf_task_msgs__msg__Delivery * input,
  rmf_task_msgs__msg__Delivery * output)
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
  // items
  if (!rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__copy(
      &(input->items), &(output->items)))
  {
    return false;
  }
  // pickup_place_name
  if (!rosidl_runtime_c__String__copy(
      &(input->pickup_place_name), &(output->pickup_place_name)))
  {
    return false;
  }
  // pickup_dispenser
  if (!rosidl_runtime_c__String__copy(
      &(input->pickup_dispenser), &(output->pickup_dispenser)))
  {
    return false;
  }
  // pickup_behavior
  if (!rmf_task_msgs__msg__Behavior__copy(
      &(input->pickup_behavior), &(output->pickup_behavior)))
  {
    return false;
  }
  // dropoff_place_name
  if (!rosidl_runtime_c__String__copy(
      &(input->dropoff_place_name), &(output->dropoff_place_name)))
  {
    return false;
  }
  // dropoff_ingestor
  if (!rosidl_runtime_c__String__copy(
      &(input->dropoff_ingestor), &(output->dropoff_ingestor)))
  {
    return false;
  }
  // dropoff_behavior
  if (!rmf_task_msgs__msg__Behavior__copy(
      &(input->dropoff_behavior), &(output->dropoff_behavior)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__Delivery *
rmf_task_msgs__msg__Delivery__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Delivery * msg = (rmf_task_msgs__msg__Delivery *)allocator.allocate(sizeof(rmf_task_msgs__msg__Delivery), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Delivery));
  bool success = rmf_task_msgs__msg__Delivery__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Delivery__destroy(rmf_task_msgs__msg__Delivery * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__Delivery__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__Delivery__Sequence__init(rmf_task_msgs__msg__Delivery__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Delivery * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__Delivery *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__Delivery), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Delivery__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Delivery__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Delivery__Sequence__fini(rmf_task_msgs__msg__Delivery__Sequence * array)
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
      rmf_task_msgs__msg__Delivery__fini(&array->data[i]);
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

rmf_task_msgs__msg__Delivery__Sequence *
rmf_task_msgs__msg__Delivery__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Delivery__Sequence * array = (rmf_task_msgs__msg__Delivery__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__Delivery__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Delivery__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Delivery__Sequence__destroy(rmf_task_msgs__msg__Delivery__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__Delivery__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__Delivery__Sequence__are_equal(const rmf_task_msgs__msg__Delivery__Sequence * lhs, const rmf_task_msgs__msg__Delivery__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__Delivery__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__Delivery__Sequence__copy(
  const rmf_task_msgs__msg__Delivery__Sequence * input,
  rmf_task_msgs__msg__Delivery__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__Delivery);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__Delivery * data =
      (rmf_task_msgs__msg__Delivery *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__Delivery__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__Delivery__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__Delivery__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
