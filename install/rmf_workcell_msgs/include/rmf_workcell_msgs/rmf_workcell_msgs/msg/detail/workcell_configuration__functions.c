// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
// generated code does not contain a copyright notice
#include "rmf_workcell_msgs/msg/detail/workcell_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `guid`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `assets`
#include "rmf_workcell_msgs/msg/detail/asset__functions.h"
// Member `traits`
#include "rmf_workcell_msgs/msg/detail/trait__functions.h"

bool
rmf_workcell_msgs__msg__WorkcellConfiguration__init(rmf_workcell_msgs__msg__WorkcellConfiguration * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    rmf_workcell_msgs__msg__WorkcellConfiguration__fini(msg);
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__init(&msg->guid)) {
    rmf_workcell_msgs__msg__WorkcellConfiguration__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    rmf_workcell_msgs__msg__WorkcellConfiguration__fini(msg);
    return false;
  }
  // assets
  if (!rmf_workcell_msgs__msg__Asset__Sequence__init(&msg->assets, 0)) {
    rmf_workcell_msgs__msg__WorkcellConfiguration__fini(msg);
    return false;
  }
  // traits
  if (!rmf_workcell_msgs__msg__Trait__Sequence__init(&msg->traits, 0)) {
    rmf_workcell_msgs__msg__WorkcellConfiguration__fini(msg);
    return false;
  }
  return true;
}

void
rmf_workcell_msgs__msg__WorkcellConfiguration__fini(rmf_workcell_msgs__msg__WorkcellConfiguration * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
  // guid
  rosidl_runtime_c__String__fini(&msg->guid);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // assets
  rmf_workcell_msgs__msg__Asset__Sequence__fini(&msg->assets);
  // traits
  rmf_workcell_msgs__msg__Trait__Sequence__fini(&msg->traits);
}

bool
rmf_workcell_msgs__msg__WorkcellConfiguration__are_equal(const rmf_workcell_msgs__msg__WorkcellConfiguration * lhs, const rmf_workcell_msgs__msg__WorkcellConfiguration * rhs)
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
  // guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->guid), &(rhs->guid)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // assets
  if (!rmf_workcell_msgs__msg__Asset__Sequence__are_equal(
      &(lhs->assets), &(rhs->assets)))
  {
    return false;
  }
  // traits
  if (!rmf_workcell_msgs__msg__Trait__Sequence__are_equal(
      &(lhs->traits), &(rhs->traits)))
  {
    return false;
  }
  return true;
}

bool
rmf_workcell_msgs__msg__WorkcellConfiguration__copy(
  const rmf_workcell_msgs__msg__WorkcellConfiguration * input,
  rmf_workcell_msgs__msg__WorkcellConfiguration * output)
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
  // guid
  if (!rosidl_runtime_c__String__copy(
      &(input->guid), &(output->guid)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // assets
  if (!rmf_workcell_msgs__msg__Asset__Sequence__copy(
      &(input->assets), &(output->assets)))
  {
    return false;
  }
  // traits
  if (!rmf_workcell_msgs__msg__Trait__Sequence__copy(
      &(input->traits), &(output->traits)))
  {
    return false;
  }
  return true;
}

rmf_workcell_msgs__msg__WorkcellConfiguration *
rmf_workcell_msgs__msg__WorkcellConfiguration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_workcell_msgs__msg__WorkcellConfiguration * msg = (rmf_workcell_msgs__msg__WorkcellConfiguration *)allocator.allocate(sizeof(rmf_workcell_msgs__msg__WorkcellConfiguration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_workcell_msgs__msg__WorkcellConfiguration));
  bool success = rmf_workcell_msgs__msg__WorkcellConfiguration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_workcell_msgs__msg__WorkcellConfiguration__destroy(rmf_workcell_msgs__msg__WorkcellConfiguration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_workcell_msgs__msg__WorkcellConfiguration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__init(rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_workcell_msgs__msg__WorkcellConfiguration * data = NULL;

  if (size) {
    data = (rmf_workcell_msgs__msg__WorkcellConfiguration *)allocator.zero_allocate(size, sizeof(rmf_workcell_msgs__msg__WorkcellConfiguration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_workcell_msgs__msg__WorkcellConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_workcell_msgs__msg__WorkcellConfiguration__fini(&data[i - 1]);
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
rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__fini(rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence * array)
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
      rmf_workcell_msgs__msg__WorkcellConfiguration__fini(&array->data[i]);
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

rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence *
rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence * array = (rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence *)allocator.allocate(sizeof(rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__destroy(rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__are_equal(const rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence * lhs, const rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_workcell_msgs__msg__WorkcellConfiguration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__copy(
  const rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence * input,
  rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_workcell_msgs__msg__WorkcellConfiguration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_workcell_msgs__msg__WorkcellConfiguration * data =
      (rmf_workcell_msgs__msg__WorkcellConfiguration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_workcell_msgs__msg__WorkcellConfiguration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_workcell_msgs__msg__WorkcellConfiguration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_workcell_msgs__msg__WorkcellConfiguration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
