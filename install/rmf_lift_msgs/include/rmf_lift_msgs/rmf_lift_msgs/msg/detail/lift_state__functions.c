// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_lift_msgs:msg/LiftState.idl
// generated code does not contain a copyright notice
#include "rmf_lift_msgs/msg/detail/lift_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lift_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `lift_name`
// Member `available_floors`
// Member `current_floor`
// Member `destination_floor`
// Member `session_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `available_modes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rmf_lift_msgs__msg__LiftState__init(rmf_lift_msgs__msg__LiftState * msg)
{
  if (!msg) {
    return false;
  }
  // lift_time
  if (!builtin_interfaces__msg__Time__init(&msg->lift_time)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__init(&msg->lift_name)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // available_floors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->available_floors, 0)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // current_floor
  if (!rosidl_runtime_c__String__init(&msg->current_floor)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // destination_floor
  if (!rosidl_runtime_c__String__init(&msg->destination_floor)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // door_state
  // motion_state
  // available_modes
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->available_modes, 0)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  // current_mode
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_lift_msgs__msg__LiftState__fini(rmf_lift_msgs__msg__LiftState * msg)
{
  if (!msg) {
    return;
  }
  // lift_time
  builtin_interfaces__msg__Time__fini(&msg->lift_time);
  // lift_name
  rosidl_runtime_c__String__fini(&msg->lift_name);
  // available_floors
  rosidl_runtime_c__String__Sequence__fini(&msg->available_floors);
  // current_floor
  rosidl_runtime_c__String__fini(&msg->current_floor);
  // destination_floor
  rosidl_runtime_c__String__fini(&msg->destination_floor);
  // door_state
  // motion_state
  // available_modes
  rosidl_runtime_c__uint8__Sequence__fini(&msg->available_modes);
  // current_mode
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
}

bool
rmf_lift_msgs__msg__LiftState__are_equal(const rmf_lift_msgs__msg__LiftState * lhs, const rmf_lift_msgs__msg__LiftState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lift_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->lift_time), &(rhs->lift_time)))
  {
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lift_name), &(rhs->lift_name)))
  {
    return false;
  }
  // available_floors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->available_floors), &(rhs->available_floors)))
  {
    return false;
  }
  // current_floor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_floor), &(rhs->current_floor)))
  {
    return false;
  }
  // destination_floor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->destination_floor), &(rhs->destination_floor)))
  {
    return false;
  }
  // door_state
  if (lhs->door_state != rhs->door_state) {
    return false;
  }
  // motion_state
  if (lhs->motion_state != rhs->motion_state) {
    return false;
  }
  // available_modes
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->available_modes), &(rhs->available_modes)))
  {
    return false;
  }
  // current_mode
  if (lhs->current_mode != rhs->current_mode) {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->session_id), &(rhs->session_id)))
  {
    return false;
  }
  return true;
}

bool
rmf_lift_msgs__msg__LiftState__copy(
  const rmf_lift_msgs__msg__LiftState * input,
  rmf_lift_msgs__msg__LiftState * output)
{
  if (!input || !output) {
    return false;
  }
  // lift_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->lift_time), &(output->lift_time)))
  {
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__copy(
      &(input->lift_name), &(output->lift_name)))
  {
    return false;
  }
  // available_floors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->available_floors), &(output->available_floors)))
  {
    return false;
  }
  // current_floor
  if (!rosidl_runtime_c__String__copy(
      &(input->current_floor), &(output->current_floor)))
  {
    return false;
  }
  // destination_floor
  if (!rosidl_runtime_c__String__copy(
      &(input->destination_floor), &(output->destination_floor)))
  {
    return false;
  }
  // door_state
  output->door_state = input->door_state;
  // motion_state
  output->motion_state = input->motion_state;
  // available_modes
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->available_modes), &(output->available_modes)))
  {
    return false;
  }
  // current_mode
  output->current_mode = input->current_mode;
  // session_id
  if (!rosidl_runtime_c__String__copy(
      &(input->session_id), &(output->session_id)))
  {
    return false;
  }
  return true;
}

rmf_lift_msgs__msg__LiftState *
rmf_lift_msgs__msg__LiftState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_lift_msgs__msg__LiftState * msg = (rmf_lift_msgs__msg__LiftState *)allocator.allocate(sizeof(rmf_lift_msgs__msg__LiftState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_lift_msgs__msg__LiftState));
  bool success = rmf_lift_msgs__msg__LiftState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_lift_msgs__msg__LiftState__destroy(rmf_lift_msgs__msg__LiftState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_lift_msgs__msg__LiftState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_lift_msgs__msg__LiftState__Sequence__init(rmf_lift_msgs__msg__LiftState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_lift_msgs__msg__LiftState * data = NULL;

  if (size) {
    data = (rmf_lift_msgs__msg__LiftState *)allocator.zero_allocate(size, sizeof(rmf_lift_msgs__msg__LiftState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_lift_msgs__msg__LiftState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_lift_msgs__msg__LiftState__fini(&data[i - 1]);
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
rmf_lift_msgs__msg__LiftState__Sequence__fini(rmf_lift_msgs__msg__LiftState__Sequence * array)
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
      rmf_lift_msgs__msg__LiftState__fini(&array->data[i]);
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

rmf_lift_msgs__msg__LiftState__Sequence *
rmf_lift_msgs__msg__LiftState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_lift_msgs__msg__LiftState__Sequence * array = (rmf_lift_msgs__msg__LiftState__Sequence *)allocator.allocate(sizeof(rmf_lift_msgs__msg__LiftState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_lift_msgs__msg__LiftState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_lift_msgs__msg__LiftState__Sequence__destroy(rmf_lift_msgs__msg__LiftState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_lift_msgs__msg__LiftState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_lift_msgs__msg__LiftState__Sequence__are_equal(const rmf_lift_msgs__msg__LiftState__Sequence * lhs, const rmf_lift_msgs__msg__LiftState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_lift_msgs__msg__LiftState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_lift_msgs__msg__LiftState__Sequence__copy(
  const rmf_lift_msgs__msg__LiftState__Sequence * input,
  rmf_lift_msgs__msg__LiftState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_lift_msgs__msg__LiftState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_lift_msgs__msg__LiftState * data =
      (rmf_lift_msgs__msg__LiftState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_lift_msgs__msg__LiftState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_lift_msgs__msg__LiftState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_lift_msgs__msg__LiftState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
