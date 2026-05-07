// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertCategory.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_CATEGORY__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_CATEGORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MISSING'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertCategory__MISSING = 0ul
};

/// Constant 'WRONG'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertCategory__WRONG = 1ul
};

/// Constant 'OBSTRUCTED'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertCategory__OBSTRUCTED = 2ul
};

/// Constant 'CANCELLED'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertCategory__CANCELLED = 3ul
};

/// Struct defined in msg/DeliveryAlertCategory in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__DeliveryAlertCategory
{
  uint32_t value;
} rmf_fleet_msgs__msg__DeliveryAlertCategory;

// Struct for a sequence of rmf_fleet_msgs__msg__DeliveryAlertCategory.
typedef struct rmf_fleet_msgs__msg__DeliveryAlertCategory__Sequence
{
  rmf_fleet_msgs__msg__DeliveryAlertCategory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__DeliveryAlertCategory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_CATEGORY__STRUCT_H_
