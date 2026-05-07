// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_workcell_msgs:msg/Asset.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__FUNCTIONS_H_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_workcell_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_workcell_msgs/msg/detail/asset__struct.h"

/// Initialize msg/Asset message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_workcell_msgs__msg__Asset
 * )) before or use
 * rmf_workcell_msgs__msg__Asset__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__Asset__init(rmf_workcell_msgs__msg__Asset * msg);

/// Finalize msg/Asset message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
void
rmf_workcell_msgs__msg__Asset__fini(rmf_workcell_msgs__msg__Asset * msg);

/// Create msg/Asset message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_workcell_msgs__msg__Asset__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
rmf_workcell_msgs__msg__Asset *
rmf_workcell_msgs__msg__Asset__create();

/// Destroy msg/Asset message.
/**
 * It calls
 * rmf_workcell_msgs__msg__Asset__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
void
rmf_workcell_msgs__msg__Asset__destroy(rmf_workcell_msgs__msg__Asset * msg);

/// Check for msg/Asset message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__Asset__are_equal(const rmf_workcell_msgs__msg__Asset * lhs, const rmf_workcell_msgs__msg__Asset * rhs);

/// Copy a msg/Asset message.
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
rmf_workcell_msgs__msg__Asset__copy(
  const rmf_workcell_msgs__msg__Asset * input,
  rmf_workcell_msgs__msg__Asset * output);

/// Initialize array of msg/Asset messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_workcell_msgs__msg__Asset__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__Asset__Sequence__init(rmf_workcell_msgs__msg__Asset__Sequence * array, size_t size);

/// Finalize array of msg/Asset messages.
/**
 * It calls
 * rmf_workcell_msgs__msg__Asset__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
void
rmf_workcell_msgs__msg__Asset__Sequence__fini(rmf_workcell_msgs__msg__Asset__Sequence * array);

/// Create array of msg/Asset messages.
/**
 * It allocates the memory for the array and calls
 * rmf_workcell_msgs__msg__Asset__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
rmf_workcell_msgs__msg__Asset__Sequence *
rmf_workcell_msgs__msg__Asset__Sequence__create(size_t size);

/// Destroy array of msg/Asset messages.
/**
 * It calls
 * rmf_workcell_msgs__msg__Asset__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
void
rmf_workcell_msgs__msg__Asset__Sequence__destroy(rmf_workcell_msgs__msg__Asset__Sequence * array);

/// Check for msg/Asset message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
bool
rmf_workcell_msgs__msg__Asset__Sequence__are_equal(const rmf_workcell_msgs__msg__Asset__Sequence * lhs, const rmf_workcell_msgs__msg__Asset__Sequence * rhs);

/// Copy an array of msg/Asset messages.
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
rmf_workcell_msgs__msg__Asset__Sequence__copy(
  const rmf_workcell_msgs__msg__Asset__Sequence * input,
  rmf_workcell_msgs__msg__Asset__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__FUNCTIONS_H_
