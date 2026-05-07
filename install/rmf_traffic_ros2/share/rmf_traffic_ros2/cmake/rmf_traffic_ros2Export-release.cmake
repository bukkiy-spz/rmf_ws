#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_traffic_ros2::rmf_traffic_ros2" for configuration "Release"
set_property(TARGET rmf_traffic_ros2::rmf_traffic_ros2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_traffic_ros2::rmf_traffic_ros2 PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_traffic_ros2.so"
  IMPORTED_SONAME_RELEASE "librmf_traffic_ros2.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_traffic_ros2::rmf_traffic_ros2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_traffic_ros2::rmf_traffic_ros2 "${_IMPORT_PREFIX}/lib/librmf_traffic_ros2.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
