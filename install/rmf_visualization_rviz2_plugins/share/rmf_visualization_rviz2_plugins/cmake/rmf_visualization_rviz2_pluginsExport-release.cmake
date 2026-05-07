#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_visualization_rviz2_plugins::rmf_visualization_rviz2_plugins" for configuration "Release"
set_property(TARGET rmf_visualization_rviz2_plugins::rmf_visualization_rviz2_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_visualization_rviz2_plugins::rmf_visualization_rviz2_plugins PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_visualization_rviz2_plugins.so"
  IMPORTED_SONAME_RELEASE "librmf_visualization_rviz2_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_visualization_rviz2_plugins::rmf_visualization_rviz2_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_visualization_rviz2_plugins::rmf_visualization_rviz2_plugins "${_IMPORT_PREFIX}/lib/librmf_visualization_rviz2_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
