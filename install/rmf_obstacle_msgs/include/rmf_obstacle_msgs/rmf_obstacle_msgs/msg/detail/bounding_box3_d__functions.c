// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_obstacle_msgs:msg/BoundingBox3D.idl
// generated code does not contain a copyright notice
#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
rmf_obstacle_msgs__msg__BoundingBox3D__init(rmf_obstacle_msgs__msg__BoundingBox3D * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Pose__init(&msg->center)) {
    rmf_obstacle_msgs__msg__BoundingBox3D__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    rmf_obstacle_msgs__msg__BoundingBox3D__fini(msg);
    return false;
  }
  return true;
}

void
rmf_obstacle_msgs__msg__BoundingBox3D__fini(rmf_obstacle_msgs__msg__BoundingBox3D * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Pose__fini(&msg->center);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
}

bool
rmf_obstacle_msgs__msg__BoundingBox3D__are_equal(const rmf_obstacle_msgs__msg__BoundingBox3D * lhs, const rmf_obstacle_msgs__msg__BoundingBox3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  return true;
}

bool
rmf_obstacle_msgs__msg__BoundingBox3D__copy(
  const rmf_obstacle_msgs__msg__BoundingBox3D * input,
  rmf_obstacle_msgs__msg__BoundingBox3D * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Pose__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  return true;
}

rmf_obstacle_msgs__msg__BoundingBox3D *
rmf_obstacle_msgs__msg__BoundingBox3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_obstacle_msgs__msg__BoundingBox3D * msg = (rmf_obstacle_msgs__msg__BoundingBox3D *)allocator.allocate(sizeof(rmf_obstacle_msgs__msg__BoundingBox3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_obstacle_msgs__msg__BoundingBox3D));
  bool success = rmf_obstacle_msgs__msg__BoundingBox3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_obstacle_msgs__msg__BoundingBox3D__destroy(rmf_obstacle_msgs__msg__BoundingBox3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_obstacle_msgs__msg__BoundingBox3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__init(rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_obstacle_msgs__msg__BoundingBox3D * data = NULL;

  if (size) {
    data = (rmf_obstacle_msgs__msg__BoundingBox3D *)allocator.zero_allocate(size, sizeof(rmf_obstacle_msgs__msg__BoundingBox3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_obstacle_msgs__msg__BoundingBox3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_obstacle_msgs__msg__BoundingBox3D__fini(&data[i - 1]);
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
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__fini(rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * array)
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
      rmf_obstacle_msgs__msg__BoundingBox3D__fini(&array->data[i]);
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

rmf_obstacle_msgs__msg__BoundingBox3D__Sequence *
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * array = (rmf_obstacle_msgs__msg__BoundingBox3D__Sequence *)allocator.allocate(sizeof(rmf_obstacle_msgs__msg__BoundingBox3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__destroy(rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__are_equal(const rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * lhs, const rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_obstacle_msgs__msg__BoundingBox3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__copy(
  const rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * input,
  rmf_obstacle_msgs__msg__BoundingBox3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_obstacle_msgs__msg__BoundingBox3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_obstacle_msgs__msg__BoundingBox3D * data =
      (rmf_obstacle_msgs__msg__BoundingBox3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_obstacle_msgs__msg__BoundingBox3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_obstacle_msgs__msg__BoundingBox3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_obstacle_msgs__msg__BoundingBox3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
