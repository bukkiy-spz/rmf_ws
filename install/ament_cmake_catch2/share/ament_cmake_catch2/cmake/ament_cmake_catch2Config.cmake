# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ament_cmake_catch2_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ament_cmake_catch2_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ament_cmake_catch2_FOUND FALSE)
  elseif(NOT ament_cmake_catch2_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ament_cmake_catch2_FOUND FALSE)
  endif()
  return()
endif()
set(_ament_cmake_catch2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ament_cmake_catch2_FIND_QUIETLY)
  message(STATUS "Found ament_cmake_catch2: 1.2.1 (${ament_cmake_catch2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ament_cmake_catch2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ament_cmake_catch2_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ament_cmake_catch2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_add_catch2.cmake;ament_add_catch2_test.cmake")
foreach(_extra ${_extras})
  include("${ament_cmake_catch2_DIR}/${_extra}")
endforeach()
