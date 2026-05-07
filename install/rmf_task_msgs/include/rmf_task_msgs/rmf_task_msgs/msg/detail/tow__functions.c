// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Tow.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/tow__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `task_id`
// Member `object_type`
// Member `object_id`
// Member `pickup_place_name`
// Member `dropoff_place_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__msg__Tow__init(rmf_task_msgs__msg__Tow * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__init(&msg->object_type)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  // is_object_id_known
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  // pickup_place_name
  if (!rosidl_runtime_c__String__init(&msg->pickup_place_name)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  // is_dropoff_place_known
  // dropoff_place_name
  if (!rosidl_runtime_c__String__init(&msg->dropoff_place_name)) {
    rmf_task_msgs__msg__Tow__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__Tow__fini(rmf_task_msgs__msg__Tow * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // object_type
  rosidl_runtime_c__String__fini(&msg->object_type);
  // is_object_id_known
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // pickup_place_name
  rosidl_runtime_c__String__fini(&msg->pickup_place_name);
  // is_dropoff_place_known
  // dropoff_place_name
  rosidl_runtime_c__String__fini(&msg->dropoff_place_name);
}

bool
rmf_task_msgs__msg__Tow__are_equal(const rmf_task_msgs__msg__Tow * lhs, const rmf_task_msgs__msg__Tow * rhs)
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
  // object_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_type), &(rhs->object_type)))
  {
    return false;
  }
  // is_object_id_known
  if (lhs->is_object_id_known != rhs->is_object_id_known) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // pickup_place_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pickup_place_name), &(rhs->pickup_place_name)))
  {
    return false;
  }
  // is_dropoff_place_known
  if (lhs->is_dropoff_place_known != rhs->is_dropoff_place_known) {
    return false;
  }
  // dropoff_place_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dropoff_place_name), &(rhs->dropoff_place_name)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__Tow__copy(
  const rmf_task_msgs__msg__Tow * input,
  rmf_task_msgs__msg__Tow * output)
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
  // object_type
  if (!rosidl_runtime_c__String__copy(
      &(input->object_type), &(output->object_type)))
  {
    return false;
  }
  // is_object_id_known
  output->is_object_id_known = input->is_object_id_known;
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // pickup_place_name
  if (!rosidl_runtime_c__String__copy(
      &(input->pickup_place_name), &(output->pickup_place_name)))
  {
    return false;
  }
  // is_dropoff_place_known
  output->is_dropoff_place_known = input->is_dropoff_place_known;
  // dropoff_place_name
  if (!rosidl_runtime_c__String__copy(
      &(input->dropoff_place_name), &(output->dropoff_place_name)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__Tow *
rmf_task_msgs__msg__Tow__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Tow * msg = (rmf_task_msgs__msg__Tow *)allocator.allocate(sizeof(rmf_task_msgs__msg__Tow), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Tow));
  bool success = rmf_task_msgs__msg__Tow__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Tow__destroy(rmf_task_msgs__msg__Tow * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__Tow__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__Tow__Sequence__init(rmf_task_msgs__msg__Tow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Tow * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__Tow *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__Tow), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Tow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Tow__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Tow__Sequence__fini(rmf_task_msgs__msg__Tow__Sequence * array)
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
      rmf_task_msgs__msg__Tow__fini(&array->data[i]);
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

rmf_task_msgs__msg__Tow__Sequence *
rmf_task_msgs__msg__Tow__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Tow__Sequence * array = (rmf_task_msgs__msg__Tow__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__Tow__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Tow__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Tow__Sequence__destroy(rmf_task_msgs__msg__Tow__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__Tow__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__Tow__Sequence__are_equal(const rmf_task_msgs__msg__Tow__Sequence * lhs, const rmf_task_msgs__msg__Tow__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__Tow__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__Tow__Sequence__copy(
  const rmf_task_msgs__msg__Tow__Sequence * input,
  rmf_task_msgs__msg__Tow__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__Tow);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__Tow * data =
      (rmf_task_msgs__msg__Tow *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__Tow__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__Tow__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__Tow__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
