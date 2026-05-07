#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_visualization_schedule::rmf_visualization_schedule" for configuration "Release"
set_property(TARGET rmf_visualization_schedule::rmf_visualization_schedule APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_visualization_schedule::rmf_visualization_schedule PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_visualization_schedule.so"
  IMPORTED_SONAME_RELEASE "librmf_visualization_schedule.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_visualization_schedule::rmf_visualization_schedule )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_visualization_schedule::rmf_visualization_schedule "${_IMPORT_PREFIX}/lib/librmf_visualization_schedule.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
