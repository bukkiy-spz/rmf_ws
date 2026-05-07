// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_obstacle_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice
#include "rmf_obstacle_msgs/msg/detail/obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `source`
// Member `level_name`
// Member `classification`
#include "rosidl_runtime_c/string_functions.h"
// Member `bbox`
#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `lifetime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
rmf_obstacle_msgs__msg__Obstacle__init(rmf_obstacle_msgs__msg__Obstacle * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rmf_obstacle_msgs__msg__Obstacle__fini(msg);
    return false;
  }
  // id
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    rmf_obstacle_msgs__msg__Obstacle__fini(msg);
    return false;
  }
  // level_name
  if (!rosidl_runtime_c__String__init(&msg->level_name)) {
    rmf_obstacle_msgs__msg__Obstacle__fini(msg);
    return false;
  }
  // classification
  if (!rosidl_runtime_c__String__init(&msg->classification)) {
    rmf_obstacle_msgs__msg__Obstacle__fini(msg);
    return false;
  }
  // bbox
  if (!rmf_obstacle_msgs__msg__BoundingBox3D__init(&msg->bbox)) {
    rmf_obstacle_msgs__msg__Obstacle__fini(msg);
    return false;
  }
  // data_resolution
  // data
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->data, 0)) {
    rmf_obstacle_msgs__msg__Obstacle__fini(msg);
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__init(&msg->lifetime)) {
    rmf_obstacle_msgs__msg__Obstacle__fini(msg);
    return false;
  }
  // action
  return true;
}

void
rmf_obstacle_msgs__msg__Obstacle__fini(rmf_obstacle_msgs__msg__Obstacle * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // level_name
  rosidl_runtime_c__String__fini(&msg->level_name);
  // classification
  rosidl_runtime_c__String__fini(&msg->classification);
  // bbox
  rmf_obstacle_msgs__msg__BoundingBox3D__fini(&msg->bbox);
  // data_resolution
  // data
  rosidl_runtime_c__int8__Sequence__fini(&msg->data);
  // lifetime
  builtin_interfaces__msg__Duration__fini(&msg->lifetime);
  // action
}

bool
rmf_obstacle_msgs__msg__Obstacle__are_equal(const rmf_obstacle_msgs__msg__Obstacle * lhs, const rmf_obstacle_msgs__msg__Obstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // level_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->level_name), &(rhs->level_name)))
  {
    return false;
  }
  // classification
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->classification), &(rhs->classification)))
  {
    return false;
  }
  // bbox
  if (!rmf_obstacle_msgs__msg__BoundingBox3D__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  // data_resolution
  if (lhs->data_resolution != rhs->data_resolution) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->lifetime), &(rhs->lifetime)))
  {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  return true;
}

bool
rmf_obstacle_msgs__msg__Obstacle__copy(
  const rmf_obstacle_msgs__msg__Obstacle * input,
  rmf_obstacle_msgs__msg__Obstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // level_name
  if (!rosidl_runtime_c__String__copy(
      &(input->level_name), &(output->level_name)))
  {
    return false;
  }
  // classification
  if (!rosidl_runtime_c__String__copy(
      &(input->classification), &(output->classification)))
  {
    return false;
  }
  // bbox
  if (!rmf_obstacle_msgs__msg__BoundingBox3D__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  // data_resolution
  output->data_resolution = input->data_resolution;
  // data
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->lifetime), &(output->lifetime)))
  {
    return false;
  }
  // action
  output->action = input->action;
  return true;
}

rmf_obstacle_msgs__msg__Obstacle *
rmf_obstacle_msgs__msg__Obstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_obstacle_msgs__msg__Obstacle * msg = (rmf_obstacle_msgs__msg__Obstacle *)allocator.allocate(sizeof(rmf_obstacle_msgs__msg__Obstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_obstacle_msgs__msg__Obstacle));
  bool success = rmf_obstacle_msgs__msg__Obstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_obstacle_msgs__msg__Obstacle__destroy(rmf_obstacle_msgs__msg__Obstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_obstacle_msgs__msg__Obstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_obstacle_msgs__msg__Obstacle__Sequence__init(rmf_obstacle_msgs__msg__Obstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_obstacle_msgs__msg__Obstacle * data = NULL;

  if (size) {
    data = (rmf_obstacle_msgs__msg__Obstacle *)allocator.zero_allocate(size, sizeof(rmf_obstacle_msgs__msg__Obstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_obstacle_msgs__msg__Obstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_obstacle_msgs__msg__Obstacle__fini(&data[i - 1]);
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
rmf_obstacle_msgs__msg__Obstacle__Sequence__fini(rmf_obstacle_msgs__msg__Obstacle__Sequence * array)
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
      rmf_obstacle_msgs__msg__Obstacle__fini(&array->data[i]);
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

rmf_obstacle_msgs__msg__Obstacle__Sequence *
rmf_obstacle_msgs__msg__Obstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_obstacle_msgs__msg__Obstacle__Sequence * array = (rmf_obstacle_msgs__msg__Obstacle__Sequence *)allocator.allocate(sizeof(rmf_obstacle_msgs__msg__Obstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_obstacle_msgs__msg__Obstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_obstacle_msgs__msg__Obstacle__Sequence__destroy(rmf_obstacle_msgs__msg__Obstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_obstacle_msgs__msg__Obstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_obstacle_msgs__msg__Obstacle__Sequence__are_equal(const rmf_obstacle_msgs__msg__Obstacle__Sequence * lhs, const rmf_obstacle_msgs__msg__Obstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_obstacle_msgs__msg__Obstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_obstacle_msgs__msg__Obstacle__Sequence__copy(
  const rmf_obstacle_msgs__msg__Obstacle__Sequence * input,
  rmf_obstacle_msgs__msg__Obstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_obstacle_msgs__msg__Obstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_obstacle_msgs__msg__Obstacle * data =
      (rmf_obstacle_msgs__msg__Obstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_obstacle_msgs__msg__Obstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_obstacle_msgs__msg__Obstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_obstacle_msgs__msg__Obstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
