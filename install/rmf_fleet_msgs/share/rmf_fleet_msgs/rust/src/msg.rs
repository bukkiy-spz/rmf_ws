#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_fleet_msgs__msg__Location

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Location {

    // This member is not documented.
    #[allow(missing_docs)]
    pub t: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub obey_approach_speed_limit: bool,

    /// Speed limit of the lane leading to this waypoint in m/s
    pub approach_speed_limit: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub level_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: u64,

}



impl Default for Location {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Location::default())
  }
}

impl rosidl_runtime_rs::Message for Location {
  type RmwMsg = super::msg::rmw::Location;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        t: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.t)).into_owned(),
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
        obey_approach_speed_limit: msg.obey_approach_speed_limit,
        approach_speed_limit: msg.approach_speed_limit,
        level_name: msg.level_name.as_str().into(),
        index: msg.index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        t: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.t)).into_owned(),
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      obey_approach_speed_limit: msg.obey_approach_speed_limit,
      approach_speed_limit: msg.approach_speed_limit,
        level_name: msg.level_name.as_str().into(),
      index: msg.index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      t: builtin_interfaces::msg::Time::from_rmw_message(msg.t),
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      obey_approach_speed_limit: msg.obey_approach_speed_limit,
      approach_speed_limit: msg.approach_speed_limit,
      level_name: msg.level_name.to_string(),
      index: msg.index,
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__RobotMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_request_id: u64,

}

impl RobotMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_IDLE: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CHARGING: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_MOVING: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_PAUSED: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_WAITING: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_EMERGENCY: u32 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_GOING_HOME: u32 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_DOCKING: u32 = 7;

    /// Use this when a command received from the fleet adapter
    /// has a problem and needs to be recomputed.
    pub const MODE_ADAPTER_ERROR: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CLEANING: u32 = 9;

}


impl Default for RobotMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotMode::default())
  }
}

impl rosidl_runtime_rs::Message for RobotMode {
  type RmwMsg = super::msg::rmw::RobotMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        mode_request_id: msg.mode_request_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      mode_request_id: msg.mode_request_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      mode_request_id: msg.mode_request_id,
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__RobotState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model: std::string::String,

    /// task_id is copied in from the most recent Request message,
    /// such as ModeRequest, DestinationRequest, or PathRequest
    pub task_id: std::string::String,

    /// The sequence number of this message. Every new message should increment the
    /// sequence number by 1.
    pub seq: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::msg::RobotMode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub location: super::msg::Location,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: Vec<super::msg::Location>,

}



impl Default for RobotState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotState::default())
  }
}

impl rosidl_runtime_rs::Message for RobotState {
  type RmwMsg = super::msg::rmw::RobotState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        model: msg.model.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        seq: msg.seq,
        mode: super::msg::RobotMode::into_rmw_message(std::borrow::Cow::Owned(msg.mode)).into_owned(),
        battery_percent: msg.battery_percent,
        location: super::msg::Location::into_rmw_message(std::borrow::Cow::Owned(msg.location)).into_owned(),
        path: msg.path
          .into_iter()
          .map(|elem| super::msg::Location::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        model: msg.model.as_str().into(),
        task_id: msg.task_id.as_str().into(),
      seq: msg.seq,
        mode: super::msg::RobotMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mode)).into_owned(),
      battery_percent: msg.battery_percent,
        location: super::msg::Location::into_rmw_message(std::borrow::Cow::Borrowed(&msg.location)).into_owned(),
        path: msg.path
          .iter()
          .map(|elem| super::msg::Location::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      model: msg.model.to_string(),
      task_id: msg.task_id.to_string(),
      seq: msg.seq,
      mode: super::msg::RobotMode::from_rmw_message(msg.mode),
      battery_percent: msg.battery_percent,
      location: super::msg::Location::from_rmw_message(msg.location),
      path: msg.path
          .into_iter()
          .map(super::msg::Location::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__FleetState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robots: Vec<super::msg::RobotState>,

}



impl Default for FleetState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FleetState::default())
  }
}

impl rosidl_runtime_rs::Message for FleetState {
  type RmwMsg = super::msg::rmw::FleetState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        robots: msg.robots
          .into_iter()
          .map(|elem| super::msg::RobotState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        robots: msg.robots
          .iter()
          .map(|elem| super::msg::RobotState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      robots: msg.robots
          .into_iter()
          .map(super::msg::RobotState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__ModeRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModeRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::msg::RobotMode,

    /// task_id must be copied into future RobotState messages
    pub task_id: std::string::String,

    /// Some mode changes require parameters. For example, the name of a dock.
    pub parameters: Vec<super::msg::ModeParameter>,

}



impl Default for ModeRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ModeRequest::default())
  }
}

impl rosidl_runtime_rs::Message for ModeRequest {
  type RmwMsg = super::msg::rmw::ModeRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        mode: super::msg::RobotMode::into_rmw_message(std::borrow::Cow::Owned(msg.mode)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        parameters: msg.parameters
          .into_iter()
          .map(|elem| super::msg::ModeParameter::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        mode: super::msg::RobotMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mode)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        parameters: msg.parameters
          .iter()
          .map(|elem| super::msg::ModeParameter::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      robot_name: msg.robot_name.to_string(),
      mode: super::msg::RobotMode::from_rmw_message(msg.mode),
      task_id: msg.task_id.to_string(),
      parameters: msg.parameters
          .into_iter()
          .map(super::msg::ModeParameter::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__DestinationRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DestinationRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub destination: super::msg::Location,

    /// task_id must be copied into future RobotState messages
    pub task_id: std::string::String,

}



impl Default for DestinationRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DestinationRequest::default())
  }
}

impl rosidl_runtime_rs::Message for DestinationRequest {
  type RmwMsg = super::msg::rmw::DestinationRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        destination: super::msg::Location::into_rmw_message(std::borrow::Cow::Owned(msg.destination)).into_owned(),
        task_id: msg.task_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        destination: super::msg::Location::into_rmw_message(std::borrow::Cow::Borrowed(&msg.destination)).into_owned(),
        task_id: msg.task_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      robot_name: msg.robot_name.to_string(),
      destination: super::msg::Location::from_rmw_message(msg.destination),
      task_id: msg.task_id.to_string(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__PathRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: Vec<super::msg::Location>,

    /// task_id must be copied into future RobotState messages
    pub task_id: std::string::String,

}



impl Default for PathRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PathRequest::default())
  }
}

impl rosidl_runtime_rs::Message for PathRequest {
  type RmwMsg = super::msg::rmw::PathRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        path: msg.path
          .into_iter()
          .map(|elem| super::msg::Location::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        task_id: msg.task_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        path: msg.path
          .iter()
          .map(|elem| super::msg::Location::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        task_id: msg.task_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      robot_name: msg.robot_name.to_string(),
      path: msg.path
          .into_iter()
          .map(super::msg::Location::from_rmw_message)
          .collect(),
      task_id: msg.task_id.to_string(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__PauseRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PauseRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_request_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub at_checkpoint: u32,

}

impl PauseRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_PAUSE_IMMEDIATELY: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_PAUSE_AT_CHECKPOINT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_RESUME: u32 = 2;

}


impl Default for PauseRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PauseRequest::default())
  }
}

impl rosidl_runtime_rs::Message for PauseRequest {
  type RmwMsg = super::msg::rmw::PauseRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        mode_request_id: msg.mode_request_id,
        type_: msg.type_,
        at_checkpoint: msg.at_checkpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
      mode_request_id: msg.mode_request_id,
      type_: msg.type_,
      at_checkpoint: msg.at_checkpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      robot_name: msg.robot_name.to_string(),
      mode_request_id: msg.mode_request_id,
      type_: msg.type_,
      at_checkpoint: msg.at_checkpoint,
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__ModeParameter

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModeParameter {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: std::string::String,

}



impl Default for ModeParameter {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ModeParameter::default())
  }
}

impl rosidl_runtime_rs::Message for ModeParameter {
  type RmwMsg = super::msg::rmw::ModeParameter;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      value: msg.value.to_string(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__DockParameter
/// The name of the waypoint where the docking begins

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockParameter {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start: std::string::String,

    /// The name of the waypoint where the docking ends
    pub finish: std::string::String,

    /// The points in the docking path
    pub path: Vec<super::msg::Location>,

}



impl Default for DockParameter {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DockParameter::default())
  }
}

impl rosidl_runtime_rs::Message for DockParameter {
  type RmwMsg = super::msg::rmw::DockParameter;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start: msg.start.as_str().into(),
        finish: msg.finish.as_str().into(),
        path: msg.path
          .into_iter()
          .map(|elem| super::msg::Location::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start: msg.start.as_str().into(),
        finish: msg.finish.as_str().into(),
        path: msg.path
          .iter()
          .map(|elem| super::msg::Location::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      start: msg.start.to_string(),
      finish: msg.finish.to_string(),
      path: msg.path
          .into_iter()
          .map(super::msg::Location::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__Dock

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Dock {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: Vec<super::msg::DockParameter>,

}



impl Default for Dock {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Dock::default())
  }
}

impl rosidl_runtime_rs::Message for Dock {
  type RmwMsg = super::msg::rmw::Dock;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        params: msg.params
          .into_iter()
          .map(|elem| super::msg::DockParameter::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        params: msg.params
          .iter()
          .map(|elem| super::msg::DockParameter::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      params: msg.params
          .into_iter()
          .map(super::msg::DockParameter::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__DockSummary

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockSummary {

    // This member is not documented.
    #[allow(missing_docs)]
    pub docks: Vec<super::msg::Dock>,

}



impl Default for DockSummary {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DockSummary::default())
  }
}

impl rosidl_runtime_rs::Message for DockSummary {
  type RmwMsg = super::msg::rmw::DockSummary;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        docks: msg.docks
          .into_iter()
          .map(|elem| super::msg::Dock::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        docks: msg.docks
          .iter()
          .map(|elem| super::msg::Dock::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      docks: msg.docks
          .into_iter()
          .map(super::msg::Dock::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__LaneRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub open_lanes: Vec<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub close_lanes: Vec<u64>,

}



impl Default for LaneRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LaneRequest::default())
  }
}

impl rosidl_runtime_rs::Message for LaneRequest {
  type RmwMsg = super::msg::rmw::LaneRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        open_lanes: msg.open_lanes.into(),
        close_lanes: msg.close_lanes.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        open_lanes: msg.open_lanes.as_slice().into(),
        close_lanes: msg.close_lanes.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      open_lanes: msg.open_lanes
          .into_iter()
          .collect(),
      close_lanes: msg.close_lanes
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__ClosedLanes

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClosedLanes {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub closed_lanes: Vec<u64>,

}



impl Default for ClosedLanes {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ClosedLanes::default())
  }
}

impl rosidl_runtime_rs::Message for ClosedLanes {
  type RmwMsg = super::msg::rmw::ClosedLanes;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        closed_lanes: msg.closed_lanes.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        closed_lanes: msg.closed_lanes.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      closed_lanes: msg.closed_lanes
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__InterruptRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InterruptRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub interrupt_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub labels: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,

}

impl InterruptRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_INTERRUPT: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_RESUME: u8 = 1;

}


impl Default for InterruptRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::InterruptRequest::default())
  }
}

impl rosidl_runtime_rs::Message for InterruptRequest {
  type RmwMsg = super::msg::rmw::InterruptRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        interrupt_id: msg.interrupt_id.as_str().into(),
        labels: msg.labels
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        type_: msg.type_,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        interrupt_id: msg.interrupt_id.as_str().into(),
        labels: msg.labels
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      type_: msg.type_,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      robot_name: msg.robot_name.to_string(),
      interrupt_id: msg.interrupt_id.to_string(),
      labels: msg.labels
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      type_: msg.type_,
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__SpeedLimitedLane
/// The index of the lane with a speed limit

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpeedLimitedLane {

    // This member is not documented.
    #[allow(missing_docs)]
    pub lane_index: u64,

    /// The imposed speed limit for the lane
    pub speed_limit: f64,

}



impl Default for SpeedLimitedLane {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SpeedLimitedLane::default())
  }
}

impl rosidl_runtime_rs::Message for SpeedLimitedLane {
  type RmwMsg = super::msg::rmw::SpeedLimitedLane;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        lane_index: msg.lane_index,
        speed_limit: msg.speed_limit,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      lane_index: msg.lane_index,
      speed_limit: msg.speed_limit,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      lane_index: msg.lane_index,
      speed_limit: msg.speed_limit,
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__SpeedLimitRequest
/// The name of the fleet

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpeedLimitRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,

    /// The lanes to impose speed limits upon.
    pub speed_limits: Vec<super::msg::SpeedLimitedLane>,

    /// The indices of lanes to remove speed limits
    pub remove_limits: Vec<u64>,

}



impl Default for SpeedLimitRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SpeedLimitRequest::default())
  }
}

impl rosidl_runtime_rs::Message for SpeedLimitRequest {
  type RmwMsg = super::msg::rmw::SpeedLimitRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        speed_limits: msg.speed_limits
          .into_iter()
          .map(|elem| super::msg::SpeedLimitedLane::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        remove_limits: msg.remove_limits.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        speed_limits: msg.speed_limits
          .iter()
          .map(|elem| super::msg::SpeedLimitedLane::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        remove_limits: msg.remove_limits.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      speed_limits: msg.speed_limits
          .into_iter()
          .map(super::msg::SpeedLimitedLane::from_rmw_message)
          .collect(),
      remove_limits: msg.remove_limits
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__LaneStates
/// The name of the fleet with closed or speed limited lanes

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,

    /// The indices of the lanes that are currently closed
    pub closed_lanes: Vec<u64>,

    /// Lanes that have speed limits
    pub speed_limits: Vec<super::msg::SpeedLimitedLane>,

}



impl Default for LaneStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LaneStates::default())
  }
}

impl rosidl_runtime_rs::Message for LaneStates {
  type RmwMsg = super::msg::rmw::LaneStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        closed_lanes: msg.closed_lanes.into(),
        speed_limits: msg.speed_limits
          .into_iter()
          .map(|elem| super::msg::SpeedLimitedLane::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        closed_lanes: msg.closed_lanes.as_slice().into(),
        speed_limits: msg.speed_limits
          .iter()
          .map(|elem| super::msg::SpeedLimitedLane::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      closed_lanes: msg.closed_lanes
          .into_iter()
          .collect(),
      speed_limits: msg.speed_limits
          .into_iter()
          .map(super::msg::SpeedLimitedLane::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__ChargingAssignment

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargingAssignment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoint_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

}

impl ChargingAssignment {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CHARGE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_WAIT: u8 = 1;

}


impl Default for ChargingAssignment {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChargingAssignment::default())
  }
}

impl rosidl_runtime_rs::Message for ChargingAssignment {
  type RmwMsg = super::msg::rmw::ChargingAssignment;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        waypoint_name: msg.waypoint_name.as_str().into(),
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        waypoint_name: msg.waypoint_name.as_str().into(),
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_name: msg.robot_name.to_string(),
      waypoint_name: msg.waypoint_name.to_string(),
      mode: msg.mode,
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__ChargingAssignments

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargingAssignments {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assignments: Vec<super::msg::ChargingAssignment>,

}



impl Default for ChargingAssignments {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChargingAssignments::default())
  }
}

impl rosidl_runtime_rs::Message for ChargingAssignments {
  type RmwMsg = super::msg::rmw::ChargingAssignments;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        assignments: msg.assignments
          .into_iter()
          .map(|elem| super::msg::ChargingAssignment::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        assignments: msg.assignments
          .iter()
          .map(|elem| super::msg::ChargingAssignment::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      assignments: msg.assignments
          .into_iter()
          .map(super::msg::ChargingAssignment::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__MutexGroupAssignment
/// This message maps a mutex group name to the name of an agent that is currently
/// holding the claim to that group.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MutexGroupAssignment {
    /// Name of the mutex group that is being described.
    pub group: std::string::String,

    /// Traffic Participant ID of the agent that has currently claimed the group.
    /// If the group is unclaimed, this will be the max uint64 value.
    pub claimant: u64,

    /// Time stamp of when the claim request began.
    pub claim_time: builtin_interfaces::msg::Time,

}



impl Default for MutexGroupAssignment {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MutexGroupAssignment::default())
  }
}

impl rosidl_runtime_rs::Message for MutexGroupAssignment {
  type RmwMsg = super::msg::rmw::MutexGroupAssignment;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group: msg.group.as_str().into(),
        claimant: msg.claimant,
        claim_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.claim_time)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group: msg.group.as_str().into(),
      claimant: msg.claimant,
        claim_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.claim_time)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      group: msg.group.to_string(),
      claimant: msg.claimant,
      claim_time: builtin_interfaces::msg::Time::from_rmw_message(msg.claim_time),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__MutexGroupManualRelease
/// This message allows operators to manually request that a robot release one or
/// more mutex groups that it is currently holding.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MutexGroupManualRelease {
    /// Name of the mutex groups to release
    pub release_mutex_groups: Vec<std::string::String>,

    /// The name of the fleet that the robot belongs to
    pub fleet: std::string::String,

    /// The name of the robot that needs to release the mutex groups
    pub robot: std::string::String,

}



impl Default for MutexGroupManualRelease {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MutexGroupManualRelease::default())
  }
}

impl rosidl_runtime_rs::Message for MutexGroupManualRelease {
  type RmwMsg = super::msg::rmw::MutexGroupManualRelease;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        release_mutex_groups: msg.release_mutex_groups
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        fleet: msg.fleet.as_str().into(),
        robot: msg.robot.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        release_mutex_groups: msg.release_mutex_groups
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        fleet: msg.fleet.as_str().into(),
        robot: msg.robot.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      release_mutex_groups: msg.release_mutex_groups
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      fleet: msg.fleet.to_string(),
      robot: msg.robot.to_string(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__MutexGroupRequest
/// This message is used to attempt to claim a mutex group. It should be sent
/// periodically for the entire duration that the claimer needs the mutex because
/// mutex groups have a limited-time leasing period that will timeout if a request
/// heartbeat is not received in some amount of time.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MutexGroupRequest {
    /// Name of the mutex group that is being claimed
    pub group: std::string::String,

    /// Name of the agent that is trying to claim the mutex group.
    pub claimant: u64,

    /// Time stamp of when the claim request began. The same time stamp should be used
    /// for all subsequent heartbeat messages related to this claim. If the claim time
    /// changes then this claim will be treated a new claim and may be deprioritized.
    /// Earlier claims have priority over later claims.
    pub claim_time: builtin_interfaces::msg::Time,

    /// What kind of request is this?
    pub mode: u32,

}

impl MutexGroupRequest {
    /// Request to release the mutex group from this claimer
    pub const MODE_RELEASE: u32 = 0;

    /// Request to lock the mutex group for this claimer
    pub const MODE_LOCK: u32 = 1;

}


impl Default for MutexGroupRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MutexGroupRequest::default())
  }
}

impl rosidl_runtime_rs::Message for MutexGroupRequest {
  type RmwMsg = super::msg::rmw::MutexGroupRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group: msg.group.as_str().into(),
        claimant: msg.claimant,
        claim_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.claim_time)).into_owned(),
        mode: msg.mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group: msg.group.as_str().into(),
      claimant: msg.claimant,
        claim_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.claim_time)).into_owned(),
      mode: msg.mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      group: msg.group.to_string(),
      claimant: msg.claimant,
      claim_time: builtin_interfaces::msg::Time::from_rmw_message(msg.claim_time),
      mode: msg.mode,
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__MutexGroupStates
/// A map of all the current mutex group assignments

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MutexGroupStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub assignments: Vec<super::msg::MutexGroupAssignment>,

}



impl Default for MutexGroupStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MutexGroupStates::default())
  }
}

impl rosidl_runtime_rs::Message for MutexGroupStates {
  type RmwMsg = super::msg::rmw::MutexGroupStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        assignments: msg.assignments
          .into_iter()
          .map(|elem| super::msg::MutexGroupAssignment::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        assignments: msg.assignments
          .iter()
          .map(|elem| super::msg::MutexGroupAssignment::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      assignments: msg.assignments
          .into_iter()
          .map(super::msg::MutexGroupAssignment::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__BeaconState
/// This message defines data from a robot beacon

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BeaconState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub online: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub category: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub activated: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub level: std::string::String,

}



impl Default for BeaconState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BeaconState::default())
  }
}

impl rosidl_runtime_rs::Message for BeaconState {
  type RmwMsg = super::msg::rmw::BeaconState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
        online: msg.online,
        category: msg.category.as_str().into(),
        activated: msg.activated,
        level: msg.level.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
      online: msg.online,
        category: msg.category.as_str().into(),
      activated: msg.activated,
        level: msg.level.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id.to_string(),
      online: msg.online,
      category: msg.category.to_string(),
      activated: msg.activated,
      level: msg.level.to_string(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__DeliveryAlert

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryAlert {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub category: super::msg::DeliveryAlertCategory,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tier: super::msg::DeliveryAlertTier,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action: super::msg::DeliveryAlertAction,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for DeliveryAlert {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeliveryAlert::default())
  }
}

impl rosidl_runtime_rs::Message for DeliveryAlert {
  type RmwMsg = super::msg::rmw::DeliveryAlert;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
        category: super::msg::DeliveryAlertCategory::into_rmw_message(std::borrow::Cow::Owned(msg.category)).into_owned(),
        tier: super::msg::DeliveryAlertTier::into_rmw_message(std::borrow::Cow::Owned(msg.tier)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        action: super::msg::DeliveryAlertAction::into_rmw_message(std::borrow::Cow::Owned(msg.action)).into_owned(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
        category: super::msg::DeliveryAlertCategory::into_rmw_message(std::borrow::Cow::Borrowed(&msg.category)).into_owned(),
        tier: super::msg::DeliveryAlertTier::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tier)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        action: super::msg::DeliveryAlertAction::into_rmw_message(std::borrow::Cow::Borrowed(&msg.action)).into_owned(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id.to_string(),
      category: super::msg::DeliveryAlertCategory::from_rmw_message(msg.category),
      tier: super::msg::DeliveryAlertTier::from_rmw_message(msg.tier),
      task_id: msg.task_id.to_string(),
      action: super::msg::DeliveryAlertAction::from_rmw_message(msg.action),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__DeliveryAlertAction

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryAlertAction {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u32,

}

impl DeliveryAlertAction {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WAITING: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCEL: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OVERRIDE: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RESUME: u32 = 3;

}


impl Default for DeliveryAlertAction {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeliveryAlertAction::default())
  }
}

impl rosidl_runtime_rs::Message for DeliveryAlertAction {
  type RmwMsg = super::msg::rmw::DeliveryAlertAction;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__DeliveryAlertCategory

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryAlertCategory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u32,

}

impl DeliveryAlertCategory {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MISSING: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WRONG: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OBSTRUCTED: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELLED: u32 = 3;

}


impl Default for DeliveryAlertCategory {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeliveryAlertCategory::default())
  }
}

impl rosidl_runtime_rs::Message for DeliveryAlertCategory {
  type RmwMsg = super::msg::rmw::DeliveryAlertCategory;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to rmf_fleet_msgs__msg__DeliveryAlertTier

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryAlertTier {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u32,

}

impl DeliveryAlertTier {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WARNING: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR: u32 = 1;

}


impl Default for DeliveryAlertTier {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeliveryAlertTier::default())
  }
}

impl rosidl_runtime_rs::Message for DeliveryAlertTier {
  type RmwMsg = super::msg::rmw::DeliveryAlertTier;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


