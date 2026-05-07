// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/Param.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `value_string`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_building_map_msgs__msg__Param__init(rmf_building_map_msgs__msg__Param * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__Param__fini(msg);
    return false;
  }
  // type
  // value_int
  // value_float
  // value_string
  if (!rosidl_runtime_c__String__init(&msg->value_string)) {
    rmf_building_map_msgs__msg__Param__fini(msg);
    return false;
  }
  // value_bool
  return true;
}

void
rmf_building_map_msgs__msg__Param__fini(rmf_building_map_msgs__msg__Param * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  // value_int
  // value_float
  // value_string
  rosidl_runtime_c__String__fini(&msg->value_string);
  // value_bool
}

bool
rmf_building_map_msgs__msg__Param__are_equal(const rmf_building_map_msgs__msg__Param * lhs, const rmf_building_map_msgs__msg__Param * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // value_int
  if (lhs->value_int != rhs->value_int) {
    return false;
  }
  // value_float
  if (lhs->value_float != rhs->value_float) {
    return false;
  }
  // value_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value_string), &(rhs->value_string)))
  {
    return false;
  }
  // value_bool
  if (lhs->value_bool != rhs->value_bool) {
    return false;
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Param__copy(
  const rmf_building_map_msgs__msg__Param * input,
  rmf_building_map_msgs__msg__Param * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // value_int
  output->value_int = input->value_int;
  // value_float
  output->value_float = input->value_float;
  // value_string
  if (!rosidl_runtime_c__String__copy(
      &(input->value_string), &(output->value_string)))
  {
    return false;
  }
  // value_bool
  output->value_bool = input->value_bool;
  return true;
}

rmf_building_map_msgs__msg__Param *
rmf_building_map_msgs__msg__Param__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Param * msg = (rmf_building_map_msgs__msg__Param *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Param), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__Param));
  bool success = rmf_building_map_msgs__msg__Param__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__Param__destroy(rmf_building_map_msgs__msg__Param * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_building_map_msgs__msg__Param__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_building_map_msgs__msg__Param__Sequence__init(rmf_building_map_msgs__msg__Param__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Param * data = NULL;

  if (size) {
    data = (rmf_building_map_msgs__msg__Param *)allocator.zero_allocate(size, sizeof(rmf_building_map_msgs__msg__Param), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__Param__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__Param__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__Param__Sequence__fini(rmf_building_map_msgs__msg__Param__Sequence * array)
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
      rmf_building_map_msgs__msg__Param__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__Param__Sequence *
rmf_building_map_msgs__msg__Param__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Param__Sequence * array = (rmf_building_map_msgs__msg__Param__Sequence *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Param__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__Param__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__Param__Sequence__destroy(rmf_building_map_msgs__msg__Param__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_building_map_msgs__msg__Param__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_building_map_msgs__msg__Param__Sequence__are_equal(const rmf_building_map_msgs__msg__Param__Sequence * lhs, const rmf_building_map_msgs__msg__Param__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_building_map_msgs__msg__Param__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Param__Sequence__copy(
  const rmf_building_map_msgs__msg__Param__Sequence * input,
  rmf_building_map_msgs__msg__Param__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_building_map_msgs__msg__Param);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_building_map_msgs__msg__Param * data =
      (rmf_building_map_msgs__msg__Param *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_building_map_msgs__msg__Param__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_building_map_msgs__msg__Param__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_building_map_msgs__msg__Param__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
