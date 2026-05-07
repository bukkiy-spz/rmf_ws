#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_fleet_adapter::rmf_fleet_adapter" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::rmf_fleet_adapter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::rmf_fleet_adapter PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "rmf_websocket::rmf_websocket;nlohmann_json_schema_validator"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmf_fleet_adapter.so"
  IMPORTED_SONAME_RELEASE "librmf_fleet_adapter.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::rmf_fleet_adapter )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::rmf_fleet_adapter "${_IMPORT_PREFIX}/lib/librmf_fleet_adapter.so" )

# Import target "rmf_fleet_adapter::read_only" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::read_only APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::read_only PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/read_only"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::read_only )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::read_only "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/read_only" )

# Import target "rmf_fleet_adapter::read_only_blockade" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::read_only_blockade APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::read_only_blockade PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/read_only_blockade"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::read_only_blockade )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::read_only_blockade "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/read_only_blockade" )

# Import target "rmf_fleet_adapter::mock_traffic_light" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::mock_traffic_light APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::mock_traffic_light PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/mock_traffic_light"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::mock_traffic_light )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::mock_traffic_light "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/mock_traffic_light" )

# Import target "rmf_fleet_adapter::full_control" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::full_control APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::full_control PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/full_control"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::full_control )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::full_control "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/full_control" )

# Import target "rmf_fleet_adapter::lift_supervisor" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::lift_supervisor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::lift_supervisor PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/lift_supervisor"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::lift_supervisor )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::lift_supervisor "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/lift_supervisor" )

# Import target "rmf_fleet_adapter::experimental_lift_watchdog" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::experimental_lift_watchdog APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::experimental_lift_watchdog PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/experimental_lift_watchdog"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::experimental_lift_watchdog )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::experimental_lift_watchdog "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/experimental_lift_watchdog" )

# Import target "rmf_fleet_adapter::door_supervisor" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::door_supervisor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::door_supervisor PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/door_supervisor"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::door_supervisor )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::door_supervisor "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/door_supervisor" )

# Import target "rmf_fleet_adapter::robot_state_aggregator" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::robot_state_aggregator APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::robot_state_aggregator PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/robot_state_aggregator"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::robot_state_aggregator )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::robot_state_aggregator "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/robot_state_aggregator" )

# Import target "rmf_fleet_adapter::test_read_only_adapter" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::test_read_only_adapter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::test_read_only_adapter PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/test_read_only_adapter"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::test_read_only_adapter )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::test_read_only_adapter "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/test_read_only_adapter" )

# Import target "rmf_fleet_adapter::task_aggregator" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::task_aggregator APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::task_aggregator PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/task_aggregator"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::task_aggregator )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::task_aggregator "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/task_aggregator" )

# Import target "rmf_fleet_adapter::open_lanes" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::open_lanes APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::open_lanes PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/open_lanes"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::open_lanes )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::open_lanes "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/open_lanes" )

# Import target "rmf_fleet_adapter::close_lanes" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::close_lanes APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::close_lanes PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/close_lanes"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::close_lanes )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::close_lanes "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/close_lanes" )

# Import target "rmf_fleet_adapter::interrupt_robot" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::interrupt_robot APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::interrupt_robot PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/interrupt_robot"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::interrupt_robot )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::interrupt_robot "${_IMPORT_PREFIX}/lib/rmf_fleet_adapter/interrupt_robot" )

# Import target "rmf_fleet_adapter::robot_state_aggregator_main" for configuration "Release"
set_property(TARGET rmf_fleet_adapter::robot_state_aggregator_main APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_fleet_adapter::robot_state_aggregator_main PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librobot_state_aggregator_main.so"
  IMPORTED_SONAME_RELEASE "librobot_state_aggregator_main.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_fleet_adapter::robot_state_aggregator_main )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_fleet_adapter::robot_state_aggregator_main "${_IMPORT_PREFIX}/lib/librobot_state_aggregator_main.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
