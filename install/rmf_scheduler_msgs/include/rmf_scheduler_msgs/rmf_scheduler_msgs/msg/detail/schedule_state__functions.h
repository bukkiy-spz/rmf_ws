// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_scheduler_msgs:msg/ScheduleState.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__FUNCTIONS_H_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_scheduler_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_scheduler_msgs/msg/detail/schedule_state__struct.h"

/// Initialize msg/ScheduleState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_scheduler_msgs__msg__ScheduleState
 * )) before or use
 * rmf_scheduler_msgs__msg__ScheduleState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__msg__ScheduleState__init(rmf_scheduler_msgs__msg__ScheduleState * msg);

/// Finalize msg/ScheduleState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__msg__ScheduleState__fini(rmf_scheduler_msgs__msg__ScheduleState * msg);

/// Create msg/ScheduleState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_scheduler_msgs__msg__ScheduleState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
rmf_scheduler_msgs__msg__ScheduleState *
rmf_scheduler_msgs__msg__ScheduleState__create();

/// Destroy msg/ScheduleState message.
/**
 * It calls
 * rmf_scheduler_msgs__msg__ScheduleState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__msg__ScheduleState__destroy(rmf_scheduler_msgs__msg__ScheduleState * msg);

/// Check for msg/ScheduleState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__msg__ScheduleState__are_equal(const rmf_scheduler_msgs__msg__ScheduleState * lhs, const rmf_scheduler_msgs__msg__ScheduleState * rhs);

/// Copy a msg/ScheduleState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__msg__ScheduleState__copy(
  const rmf_scheduler_msgs__msg__ScheduleState * input,
  rmf_scheduler_msgs__msg__ScheduleState * output);

/// Initialize array of msg/ScheduleState messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_scheduler_msgs__msg__ScheduleState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__msg__ScheduleState__Sequence__init(rmf_scheduler_msgs__msg__ScheduleState__Sequence * array, size_t size);

/// Finalize array of msg/ScheduleState messages.
/**
 * It calls
 * rmf_scheduler_msgs__msg__ScheduleState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__msg__ScheduleState__Sequence__fini(rmf_scheduler_msgs__msg__ScheduleState__Sequence * array);

/// Create array of msg/ScheduleState messages.
/**
 * It allocates the memory for the array and calls
 * rmf_scheduler_msgs__msg__ScheduleState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
rmf_scheduler_msgs__msg__ScheduleState__Sequence *
rmf_scheduler_msgs__msg__ScheduleState__Sequence__create(size_t size);

/// Destroy array of msg/ScheduleState messages.
/**
 * It calls
 * rmf_scheduler_msgs__msg__ScheduleState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__msg__ScheduleState__Sequence__destroy(rmf_scheduler_msgs__msg__ScheduleState__Sequence * array);

/// Check for msg/ScheduleState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__msg__ScheduleState__Sequence__are_equal(const rmf_scheduler_msgs__msg__ScheduleState__Sequence * lhs, const rmf_scheduler_msgs__msg__ScheduleState__Sequence * rhs);

/// Copy an array of msg/ScheduleState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__msg__ScheduleState__Sequence__copy(
  const rmf_scheduler_msgs__msg__ScheduleState__Sequence * input,
  rmf_scheduler_msgs__msg__ScheduleState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__FUNCTIONS_H_
