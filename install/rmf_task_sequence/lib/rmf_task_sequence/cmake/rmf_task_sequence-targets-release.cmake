#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_task_sequence::rmf_task_sequence" for configuration "Release"
set_property(TARGET rmf_task_sequence::rmf_task_sequence APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_task_sequence::rmf_task_sequence PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_task_sequence.so"
  IMPORTED_SONAME_RELEASE "librmf_task_sequence.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_task_sequence::rmf_task_sequence )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_task_sequence::rmf_task_sequence "${_IMPORT_PREFIX}/lib/librmf_task_sequence.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
