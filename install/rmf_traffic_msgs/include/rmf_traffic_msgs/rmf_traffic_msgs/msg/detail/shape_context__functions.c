// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ShapeContext.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/shape_context__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `convex_shapes`
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__functions.h"

bool
rmf_traffic_msgs__msg__ShapeContext__init(rmf_traffic_msgs__msg__ShapeContext * msg)
{
  if (!msg) {
    return false;
  }
  // convex_shapes
  if (!rmf_traffic_msgs__msg__ConvexShapeContext__init(&msg->convex_shapes)) {
    rmf_traffic_msgs__msg__ShapeContext__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__ShapeContext__fini(rmf_traffic_msgs__msg__ShapeContext * msg)
{
  if (!msg) {
    return;
  }
  // convex_shapes
  rmf_traffic_msgs__msg__ConvexShapeContext__fini(&msg->convex_shapes);
}

bool
rmf_traffic_msgs__msg__ShapeContext__are_equal(const rmf_traffic_msgs__msg__ShapeContext * lhs, const rmf_traffic_msgs__msg__ShapeContext * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // convex_shapes
  if (!rmf_traffic_msgs__msg__ConvexShapeContext__are_equal(
      &(lhs->convex_shapes), &(rhs->convex_shapes)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ShapeContext__copy(
  const rmf_traffic_msgs__msg__ShapeContext * input,
  rmf_traffic_msgs__msg__ShapeContext * output)
{
  if (!input || !output) {
    return false;
  }
  // convex_shapes
  if (!rmf_traffic_msgs__msg__ConvexShapeContext__copy(
      &(input->convex_shapes), &(output->convex_shapes)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__ShapeContext *
rmf_traffic_msgs__msg__ShapeContext__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ShapeContext * msg = (rmf_traffic_msgs__msg__ShapeContext *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ShapeContext), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ShapeContext));
  bool success = rmf_traffic_msgs__msg__ShapeContext__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ShapeContext__destroy(rmf_traffic_msgs__msg__ShapeContext * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__ShapeContext__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__ShapeContext__Sequence__init(rmf_traffic_msgs__msg__ShapeContext__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ShapeContext * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__ShapeContext *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__ShapeContext), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ShapeContext__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ShapeContext__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ShapeContext__Sequence__fini(rmf_traffic_msgs__msg__ShapeContext__Sequence * array)
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
      rmf_traffic_msgs__msg__ShapeContext__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ShapeContext__Sequence *
rmf_traffic_msgs__msg__ShapeContext__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ShapeContext__Sequence * array = (rmf_traffic_msgs__msg__ShapeContext__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ShapeContext__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ShapeContext__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ShapeContext__Sequence__destroy(rmf_traffic_msgs__msg__ShapeContext__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__ShapeContext__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__ShapeContext__Sequence__are_equal(const rmf_traffic_msgs__msg__ShapeContext__Sequence * lhs, const rmf_traffic_msgs__msg__ShapeContext__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__ShapeContext__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ShapeContext__Sequence__copy(
  const rmf_traffic_msgs__msg__ShapeContext__Sequence * input,
  rmf_traffic_msgs__msg__ShapeContext__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__ShapeContext);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__ShapeContext * data =
      (rmf_traffic_msgs__msg__ShapeContext *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__ShapeContext__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__ShapeContext__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__ShapeContext__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
