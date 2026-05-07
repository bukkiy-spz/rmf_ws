#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_charger_msgs__msg__ChargerState
/// Time when this state message was created

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub charger_time: builtin_interfaces::msg::Time,

    /// One of the previously enumerated states
    pub state: u32,

    /// The charger name should be unique in the RMF system and
    /// should match a charger name appearing in the traffic map
    pub charger_name: std::string::String,

    /// The error_message field should be blank unless state is CHARGER_ERROR
    pub error_message: std::string::String,

    /// The request_id field will be populated with the ID that started the
    /// charging cycle if state is anything other than CHARGER_IDLE
    pub request_id: std::string::String,

    /// The robot that is currently assigned to this charger (if any)
    pub robot_fleet: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,

    /// This contains the duration till the robot becomes fully charged.
    pub time_to_fully_charged: builtin_interfaces::msg::Duration,

}

impl ChargerState {
    /// Charger is not occupied
    pub const CHARGER_IDLE: u32 = 1;

    /// Charger has been assigned a robot
    pub const CHARGER_ASSIGNED: u32 = 2;

    /// Charger is charging
    pub const CHARGER_CHARGING: u32 = 3;

    /// Charger has been disconnected from a robot
    pub const CHARGER_RELEASED: u32 = 4;

    /// Error state, see error_message for info
    pub const CHARGER_ERROR: u32 = 200;

}


impl Default for ChargerState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChargerState::default())
  }
}

impl rosidl_runtime_rs::Message for ChargerState {
  type RmwMsg = super::msg::rmw::ChargerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        charger_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.charger_time)).into_owned(),
        state: msg.state,
        charger_name: msg.charger_name.as_str().into(),
        error_message: msg.error_message.as_str().into(),
        request_id: msg.request_id.as_str().into(),
        robot_fleet: msg.robot_fleet.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        time_to_fully_charged: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.time_to_fully_charged)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        charger_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.charger_time)).into_owned(),
      state: msg.state,
        charger_name: msg.charger_name.as_str().into(),
        error_message: msg.error_message.as_str().into(),
        request_id: msg.request_id.as_str().into(),
        robot_fleet: msg.robot_fleet.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        time_to_fully_charged: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_to_fully_charged)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      charger_time: builtin_interfaces::msg::Time::from_rmw_message(msg.charger_time),
      state: msg.state,
      charger_name: msg.charger_name.to_string(),
      error_message: msg.error_message.to_string(),
      request_id: msg.request_id.to_string(),
      robot_fleet: msg.robot_fleet.to_string(),
      robot_name: msg.robot_name.to_string(),
      time_to_fully_charged: builtin_interfaces::msg::Duration::from_rmw_message(msg.time_to_fully_charged),
    }
  }
}


// Corresponds to rmf_charger_msgs__msg__ChargerRequest
/// The name of the charger that should process this message

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargerRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub charger_name: std::string::String,

    /// The robot that wishes to charge
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: std::string::String,

    /// The maximum amount of time to wait for the charging to start.
    /// If the robot takes longer than this to arrive and start charging,
    /// the charge request will be canceled.
    pub start_timeout: builtin_interfaces::msg::Duration,

    /// A unique ID for each request. It is advised that you prefix this
    /// with the sender's node name. This is used for error tracking
    /// later on
    pub request_id: std::string::String,

}



impl Default for ChargerRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChargerRequest::default())
  }
}

impl rosidl_runtime_rs::Message for ChargerRequest {
  type RmwMsg = super::msg::rmw::ChargerRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        charger_name: msg.charger_name.as_str().into(),
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        start_timeout: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.start_timeout)).into_owned(),
        request_id: msg.request_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        charger_name: msg.charger_name.as_str().into(),
        fleet_name: msg.fleet_name.as_str().into(),
        robot_name: msg.robot_name.as_str().into(),
        start_timeout: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start_timeout)).into_owned(),
        request_id: msg.request_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      charger_name: msg.charger_name.to_string(),
      fleet_name: msg.fleet_name.to_string(),
      robot_name: msg.robot_name.to_string(),
      start_timeout: builtin_interfaces::msg::Duration::from_rmw_message(msg.start_timeout),
      request_id: msg.request_id.to_string(),
    }
  }
}


// Corresponds to rmf_charger_msgs__msg__ChargerCancel

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargerCancel {
    /// the charger that should process this message
    pub charger_name: std::string::String,

    /// A unique ID for each request. It is advised that you prefix this
    /// with the sender's node name. This is used for error tracking
    /// later on
    pub request_id: std::string::String,

}



impl Default for ChargerCancel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChargerCancel::default())
  }
}

impl rosidl_runtime_rs::Message for ChargerCancel {
  type RmwMsg = super::msg::rmw::ChargerCancel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        charger_name: msg.charger_name.as_str().into(),
        request_id: msg.request_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        charger_name: msg.charger_name.as_str().into(),
        request_id: msg.request_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      charger_name: msg.charger_name.to_string(),
      request_id: msg.request_id.to_string(),
    }
  }
}


