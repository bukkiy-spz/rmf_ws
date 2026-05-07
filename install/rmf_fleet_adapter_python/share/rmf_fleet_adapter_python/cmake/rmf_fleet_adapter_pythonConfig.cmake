# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rmf_fleet_adapter_python_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rmf_fleet_adapter_python_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rmf_fleet_adapter_python_FOUND FALSE)
  elseif(NOT rmf_fleet_adapter_python_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rmf_fleet_adapter_python_FOUND FALSE)
  endif()
  return()
endif()
set(_rmf_fleet_adapter_python_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rmf_fleet_adapter_python_FIND_QUIETLY)
  message(STATUS "Found rmf_fleet_adapter_python: 2.1.8 (${rmf_fleet_adapter_python_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rmf_fleet_adapter_python' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rmf_fleet_adapter_python_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rmf_fleet_adapter_python_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rmf_fleet_adapter_python_DIR}/${_extra}")
endforeach()
