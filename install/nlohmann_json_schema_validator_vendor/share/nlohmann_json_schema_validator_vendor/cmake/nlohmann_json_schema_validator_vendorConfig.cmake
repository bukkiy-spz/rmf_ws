# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_nlohmann_json_schema_validator_vendor_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED nlohmann_json_schema_validator_vendor_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(nlohmann_json_schema_validator_vendor_FOUND FALSE)
  elseif(NOT nlohmann_json_schema_validator_vendor_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(nlohmann_json_schema_validator_vendor_FOUND FALSE)
  endif()
  return()
endif()
set(_nlohmann_json_schema_validator_vendor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT nlohmann_json_schema_validator_vendor_FIND_QUIETLY)
  message(STATUS "Found nlohmann_json_schema_validator_vendor: 0.2.5 (${nlohmann_json_schema_validator_vendor_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'nlohmann_json_schema_validator_vendor' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${nlohmann_json_schema_validator_vendor_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(nlohmann_json_schema_validator_vendor_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${nlohmann_json_schema_validator_vendor_DIR}/${_extra}")
endforeach()
