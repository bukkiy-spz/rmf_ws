// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_site_map_msgs:msg/SiteMap.idl
// generated code does not contain a copyright notice

#ifndef RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__STRUCT_H_
#define RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAP_DATA_UNDEFINED'.
enum
{
  rmf_site_map_msgs__msg__SiteMap__MAP_DATA_UNDEFINED = 0ul
};

/// Constant 'MAP_DATA_GPKG'.
enum
{
  rmf_site_map_msgs__msg__SiteMap__MAP_DATA_GPKG = 1ul
};

/// Constant 'MAP_DATA_GPKG_GZ'.
enum
{
  rmf_site_map_msgs__msg__SiteMap__MAP_DATA_GPKG_GZ = 2ul
};

/// Constant 'MAP_DATA_GEOJSON'.
enum
{
  rmf_site_map_msgs__msg__SiteMap__MAP_DATA_GEOJSON = 3ul
};

/// Constant 'MAP_DATA_GEOJSON_GZ'.
enum
{
  rmf_site_map_msgs__msg__SiteMap__MAP_DATA_GEOJSON_GZ = 4ul
};

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SiteMap in the package rmf_site_map_msgs.
typedef struct rmf_site_map_msgs__msg__SiteMap
{
  uint32_t encoding;
  rosidl_runtime_c__uint8__Sequence data;
} rmf_site_map_msgs__msg__SiteMap;

// Struct for a sequence of rmf_site_map_msgs__msg__SiteMap.
typedef struct rmf_site_map_msgs__msg__SiteMap__Sequence
{
  rmf_site_map_msgs__msg__SiteMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_site_map_msgs__msg__SiteMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__STRUCT_H_
