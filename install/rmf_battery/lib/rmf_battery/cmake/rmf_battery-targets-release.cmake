#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_battery::rmf_battery" for configuration "Release"
set_property(TARGET rmf_battery::rmf_battery APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_battery::rmf_battery PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_battery.so"
  IMPORTED_SONAME_RELEASE "librmf_battery.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_battery::rmf_battery )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_battery::rmf_battery "${_IMPORT_PREFIX}/lib/librmf_battery.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
