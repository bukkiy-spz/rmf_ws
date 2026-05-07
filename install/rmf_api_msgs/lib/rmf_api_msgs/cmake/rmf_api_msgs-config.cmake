
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was rmf_api_msgs-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

set(rmf_api_msgs_CMAKE_DIR "${CMAKE_CURRENT_LIST_DIR}")

include(CMakeFindDependencyMacro)

find_dependency(nlohmann_json)

if(NOT TARGET rmf_api_msgs::rmf_api_msgs)
  include(${rmf_api_msgs_CMAKE_DIR}/rmf_api_msgs-targets.cmake)
endif()

include(${rmf_api_msgs_CMAKE_DIR}/rmf_api_generate_schema_headers.cmake)
set(RMF_API_GENERATE_SCHEMA_TEMPLATE ${rmf_api_msgs_CMAKE_DIR}/schemas_template.hpp.in)
