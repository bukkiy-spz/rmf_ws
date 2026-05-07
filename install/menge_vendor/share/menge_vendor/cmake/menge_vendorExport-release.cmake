#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "menge_vendor::menge_vendor" for configuration "Release"
set_property(TARGET menge_vendor::menge_vendor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(menge_vendor::menge_vendor PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmenge_vendor.so"
  IMPORTED_SONAME_RELEASE "libmenge_vendor.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS menge_vendor::menge_vendor )
list(APPEND _IMPORT_CHECK_FILES_FOR_menge_vendor::menge_vendor "${_IMPORT_PREFIX}/lib/libmenge_vendor.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
