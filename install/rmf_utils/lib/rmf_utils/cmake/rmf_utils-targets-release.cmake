#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_utils::rmf_utils" for configuration "Release"
set_property(TARGET rmf_utils::rmf_utils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_utils::rmf_utils PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_utils.so"
  IMPORTED_SONAME_RELEASE "librmf_utils.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_utils::rmf_utils )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_utils::rmf_utils "${_IMPORT_PREFIX}/lib/librmf_utils.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
