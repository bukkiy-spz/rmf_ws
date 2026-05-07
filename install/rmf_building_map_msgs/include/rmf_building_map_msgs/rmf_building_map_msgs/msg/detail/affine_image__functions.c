// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/AffineImage.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/affine_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rmf_building_map_msgs__msg__AffineImage__init(rmf_building_map_msgs__msg__AffineImage * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__AffineImage__fini(msg);
    return false;
  }
  // x_offset
  // y_offset
  // yaw
  // scale
  // encoding
  if (!rosidl_runtime_c__String__init(&msg->encoding)) {
    rmf_building_map_msgs__msg__AffineImage__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    rmf_building_map_msgs__msg__AffineImage__fini(msg);
    return false;
  }
  return true;
}

void
rmf_building_map_msgs__msg__AffineImage__fini(rmf_building_map_msgs__msg__AffineImage * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x_offset
  // y_offset
  // yaw
  // scale
  // encoding
  rosidl_runtime_c__String__fini(&msg->encoding);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
rmf_building_map_msgs__msg__AffineImage__are_equal(const rmf_building_map_msgs__msg__AffineImage * lhs, const rmf_building_map_msgs__msg__AffineImage * rhs)
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
  // x_offset
  if (lhs->x_offset != rhs->x_offset) {
    return false;
  }
  // y_offset
  if (lhs->y_offset != rhs->y_offset) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // scale
  if (lhs->scale != rhs->scale) {
    return false;
  }
  // encoding
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->encoding), &(rhs->encoding)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
rmf_building_map_msgs__msg__AffineImage__copy(
  const rmf_building_map_msgs__msg__AffineImage * input,
  rmf_building_map_msgs__msg__AffineImage * output)
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
  // x_offset
  output->x_offset = input->x_offset;
  // y_offset
  output->y_offset = input->y_offset;
  // yaw
  output->yaw = input->yaw;
  // scale
  output->scale = input->scale;
  // encoding
  if (!rosidl_runtime_c__String__copy(
      &(input->encoding), &(output->encoding)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

rmf_building_map_msgs__msg__AffineImage *
rmf_building_map_msgs__msg__AffineImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__AffineImage * msg = (rmf_building_map_msgs__msg__AffineImage *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__AffineImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__AffineImage));
  bool success = rmf_building_map_msgs__msg__AffineImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__AffineImage__destroy(rmf_building_map_msgs__msg__AffineImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_building_map_msgs__msg__AffineImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_building_map_msgs__msg__AffineImage__Sequence__init(rmf_building_map_msgs__msg__AffineImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__AffineImage * data = NULL;

  if (size) {
    data = (rmf_building_map_msgs__msg__AffineImage *)allocator.zero_allocate(size, sizeof(rmf_building_map_msgs__msg__AffineImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__AffineImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__AffineImage__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__AffineImage__Sequence__fini(rmf_building_map_msgs__msg__AffineImage__Sequence * array)
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
      rmf_building_map_msgs__msg__AffineImage__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__AffineImage__Sequence *
rmf_building_map_msgs__msg__AffineImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__AffineImage__Sequence * array = (rmf_building_map_msgs__msg__AffineImage__Sequence *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__AffineImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__AffineImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__AffineImage__Sequence__destroy(rmf_building_map_msgs__msg__AffineImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_building_map_msgs__msg__AffineImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_building_map_msgs__msg__AffineImage__Sequence__are_equal(const rmf_building_map_msgs__msg__AffineImage__Sequence * lhs, const rmf_building_map_msgs__msg__AffineImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_building_map_msgs__msg__AffineImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_building_map_msgs__msg__AffineImage__Sequence__copy(
  const rmf_building_map_msgs__msg__AffineImage__Sequence * input,
  rmf_building_map_msgs__msg__AffineImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_building_map_msgs__msg__AffineImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_building_map_msgs__msg__AffineImage * data =
      (rmf_building_map_msgs__msg__AffineImage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_building_map_msgs__msg__AffineImage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_building_map_msgs__msg__AffineImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_building_map_msgs__msg__AffineImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
