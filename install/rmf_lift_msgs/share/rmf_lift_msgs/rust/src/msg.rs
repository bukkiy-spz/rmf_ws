#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_lift_msgs__msg__LiftState
/// lift_time records when the information in this message was generated

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LiftState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub lift_time: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lift_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub available_floors: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_floor: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub destination_floor: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_state: u8,

    /// We can only set human or agv mode, but we can read other modes: fire, etc.
    pub available_modes: Vec<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mode: u8,

    /// we can add more "read-only" modes as we come across more of them.
    /// this field records the session_id that has been granted control of the lift
    /// until it sends a request with a request_type of REQUEST_END_SESSION
    pub session_id: std::string::String,

}

impl LiftState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_CLOSED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_MOVING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_OPEN: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_STOPPED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_UP: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_DOWN: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_UNKNOWN: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_HUMAN: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_AGV: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_FIRE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_OFFLINE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_EMERGENCY: u8 = 5;

}


impl Default for LiftState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LiftState::default())
  }
}

impl rosidl_runtime_rs::Message for LiftState {
  type RmwMsg = super::msg::rmw::LiftState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        lift_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.lift_time)).into_owned(),
        lift_name: msg.lift_name.as_str().into(),
        available_floors: msg.available_floors
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        current_floor: msg.current_floor.as_str().into(),
        destination_floor: msg.destination_floor.as_str().into(),
        door_state: msg.door_state,
        motion_state: msg.motion_state,
        available_modes: msg.available_modes.into(),
        current_mode: msg.current_mode,
        session_id: msg.session_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        lift_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.lift_time)).into_owned(),
        lift_name: msg.lift_name.as_str().into(),
        available_floors: msg.available_floors
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        current_floor: msg.current_floor.as_str().into(),
        destination_floor: msg.destination_floor.as_str().into(),
      door_state: msg.door_state,
      motion_state: msg.motion_state,
        available_modes: msg.available_modes.as_slice().into(),
      current_mode: msg.current_mode,
        session_id: msg.session_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      lift_time: builtin_interfaces::msg::Time::from_rmw_message(msg.lift_time),
      lift_name: msg.lift_name.to_string(),
      available_floors: msg.available_floors
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      current_floor: msg.current_floor.to_string(),
      destination_floor: msg.destination_floor.to_string(),
      door_state: msg.door_state,
      motion_state: msg.motion_state,
      available_modes: msg.available_modes
          .into_iter()
          .collect(),
      current_mode: msg.current_mode,
      session_id: msg.session_id.to_string(),
    }
  }
}


// Corresponds to rmf_lift_msgs__msg__LiftRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LiftRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub lift_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_time: builtin_interfaces::msg::Time,

    /// session_id should be unique at least between different requesters.
    /// For example, session_id could be the requester's node name.
    pub session_id: std::string::String,

    /// AGV mode means that the doors are always open when the lift is stopped
    /// Human mode means that LiftDoorRequest messages must be used to open/close
    /// the doors explicitly, since they may "time out" and close automatically.
    pub request_type: u8,

    /// The destination_floor must be one of the values returned in a LiftState.
    pub destination_floor: std::string::String,

    /// Explicit door requests are necessary in "human" mode to open/close doors.
    /// Door requests are not necessary in "AGV" mode, when the doors are always
    /// held open when the lift cabin is stopped.
    pub door_state: u8,

}

impl LiftRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_END_SESSION: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_AGV_MODE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_HUMAN_MODE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_CLOSED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_OPEN: u8 = 2;

}


impl Default for LiftRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LiftRequest::default())
  }
}

impl rosidl_runtime_rs::Message for LiftRequest {
  type RmwMsg = super::msg::rmw::LiftRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        lift_name: msg.lift_name.as_str().into(),
        request_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.request_time)).into_owned(),
        session_id: msg.session_id.as_str().into(),
        request_type: msg.request_type,
        destination_floor: msg.destination_floor.as_str().into(),
        door_state: msg.door_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        lift_name: msg.lift_name.as_str().into(),
        request_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request_time)).into_owned(),
        session_id: msg.session_id.as_str().into(),
      request_type: msg.request_type,
        destination_floor: msg.destination_floor.as_str().into(),
      door_state: msg.door_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      lift_name: msg.lift_name.to_string(),
      request_time: builtin_interfaces::msg::Time::from_rmw_message(msg.request_time),
      session_id: msg.session_id.to_string(),
      request_type: msg.request_type,
      destination_floor: msg.destination_floor.to_string(),
      door_state: msg.door_state,
    }
  }
}


