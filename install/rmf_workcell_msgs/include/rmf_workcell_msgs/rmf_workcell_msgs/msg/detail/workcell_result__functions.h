// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_workcell_msgs:msg/WorkcellResult.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_RESULT__FUNCTIONS_H_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_workcell_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_workcell_msgs/msg/detail/workcell_result__struct.h"

/// Initialize msg/WorkcellResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_workcell_msgs__msg__WorkcellResult
 * )) before or use
 * rmf_workcell_msgs__msg__WorkcellResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__WorkcellResult__init(rmf_workcell_msgs__msg__WorkcellResult * msg);

/// Finalize msg/WorkcellResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
void
rmf_workcell_msgs__msg__WorkcellResult__fini(rmf_workcell_msgs__msg__WorkcellResult * msg);

/// Create msg/WorkcellResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_workcell_msgs__msg__WorkcellResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
rmf_workcell_msgs__msg__WorkcellResult *
rmf_workcell_msgs__msg__WorkcellResult__create();

/// Destroy msg/WorkcellResult message.
/**
 * It calls
 * rmf_workcell_msgs__msg__WorkcellResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
void
rmf_workcell_msgs__msg__WorkcellResult__destroy(rmf_workcell_msgs__msg__WorkcellResult * msg);

/// Check for msg/WorkcellResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__WorkcellResult__are_equal(const rmf_workcell_msgs__msg__WorkcellResult * lhs, const rmf_workcell_msgs__msg__WorkcellResult * rhs);

/// Copy a msg/WorkcellResult message.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__WorkcellResult__copy(
  const rmf_workcell_msgs__msg__WorkcellResult * input,
  rmf_workcell_msgs__msg__WorkcellResult * output);

/// Initialize array of msg/WorkcellResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_workcell_msgs__msg__WorkcellResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__WorkcellResult__Sequence__init(rmf_workcell_msgs__msg__WorkcellResult__Sequence * array, size_t size);

/// Finalize array of msg/WorkcellResult messages.
/**
 * It calls
 * rmf_workcell_msgs__msg__WorkcellResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
void
rmf_workcell_msgs__msg__WorkcellResult__Sequence__fini(rmf_workcell_msgs__msg__WorkcellResult__Sequence * array);

/// Create array of msg/WorkcellResult messages.
/**
 * It allocates the memory for the array and calls
 * rmf_workcell_msgs__msg__WorkcellResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
rmf_workcell_msgs__msg__WorkcellResult__Sequence *
rmf_workcell_msgs__msg__WorkcellResult__Sequence__create(size_t size);

/// Destroy array of msg/WorkcellResult messages.
/**
 * It calls
 * rmf_workcell_msgs__msg__WorkcellResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
void
rmf_workcell_msgs__msg__WorkcellResult__Sequence__destroy(rmf_workcell_msgs__msg__WorkcellResult__Sequence * array);

/// Check for msg/WorkcellResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__WorkcellResult__Sequence__are_equal(const rmf_workcell_msgs__msg__WorkcellResult__Sequence * lhs, const rmf_workcell_msgs__msg__WorkcellResult__Sequence * rhs);

/// Copy an array of msg/WorkcellResult messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__WorkcellResult__Sequence__copy(
  const rmf_workcell_msgs__msg__WorkcellResult__Sequence * input,
  rmf_workcell_msgs__msg__WorkcellResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_RESULT__FUNCTIONS_H_
