#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_task::rmf_task" for configuration "Release"
set_property(TARGET rmf_task::rmf_task APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_task::rmf_task PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_task.so"
  IMPORTED_SONAME_RELEASE "librmf_task.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_task::rmf_task )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_task::rmf_task "${_IMPORT_PREFIX}/lib/librmf_task.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
