#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_door_msgs__msg__DoorMode
/// The DoorMode message captures the "mode" of an automatic door controller.
/// Most door controllers default to running in "closed" mode, and transition
/// through some sort of "moving" mode until reaching the "open" mode.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoorMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u32,

}

impl DoorMode {
    /// "value" must be one of the following enumerations:
    pub const MODE_CLOSED: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_MOVING: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_OPEN: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_OFFLINE: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_UNKNOWN: u32 = 4;

}


impl Default for DoorMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DoorMode::default())
  }
}

impl rosidl_runtime_rs::Message for DoorMode {
  type RmwMsg = super::msg::rmw::DoorMode;

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


// Corresponds to rmf_door_msgs__msg__DoorState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub door_time: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mode: super::msg::DoorMode,

}



impl Default for DoorState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DoorState::default())
  }
}

impl rosidl_runtime_rs::Message for DoorState {
  type RmwMsg = super::msg::rmw::DoorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        door_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.door_time)).into_owned(),
        door_name: msg.door_name.as_str().into(),
        current_mode: super::msg::DoorMode::into_rmw_message(std::borrow::Cow::Owned(msg.current_mode)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        door_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.door_time)).into_owned(),
        door_name: msg.door_name.as_str().into(),
        current_mode: super::msg::DoorMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_mode)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      door_time: builtin_interfaces::msg::Time::from_rmw_message(msg.door_time),
      door_name: msg.door_name.to_string(),
      current_mode: super::msg::DoorMode::from_rmw_message(msg.current_mode),
    }
  }
}


// Corresponds to rmf_door_msgs__msg__DoorRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoorRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request_time: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requester_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_mode: super::msg::DoorMode,

}



impl Default for DoorRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DoorRequest::default())
  }
}

impl rosidl_runtime_rs::Message for DoorRequest {
  type RmwMsg = super::msg::rmw::DoorRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.request_time)).into_owned(),
        requester_id: msg.requester_id.as_str().into(),
        door_name: msg.door_name.as_str().into(),
        requested_mode: super::msg::DoorMode::into_rmw_message(std::borrow::Cow::Owned(msg.requested_mode)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request_time)).into_owned(),
        requester_id: msg.requester_id.as_str().into(),
        door_name: msg.door_name.as_str().into(),
        requested_mode: super::msg::DoorMode::into_rmw_message(std::borrow::Cow::Borrowed(&msg.requested_mode)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request_time: builtin_interfaces::msg::Time::from_rmw_message(msg.request_time),
      requester_id: msg.requester_id.to_string(),
      door_name: msg.door_name.to_string(),
      requested_mode: super::msg::DoorMode::from_rmw_message(msg.requested_mode),
    }
  }
}


// Corresponds to rmf_door_msgs__msg__DoorSessions

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoorSessions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub door_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sessions: Vec<super::msg::Session>,

}



impl Default for DoorSessions {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DoorSessions::default())
  }
}

impl rosidl_runtime_rs::Message for DoorSessions {
  type RmwMsg = super::msg::rmw::DoorSessions;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        door_name: msg.door_name.as_str().into(),
        sessions: msg.sessions
          .into_iter()
          .map(|elem| super::msg::Session::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        door_name: msg.door_name.as_str().into(),
        sessions: msg.sessions
          .iter()
          .map(|elem| super::msg::Session::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      door_name: msg.door_name.to_string(),
      sessions: msg.sessions
          .into_iter()
          .map(super::msg::Session::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_door_msgs__msg__Session

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Session {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request_time: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requester_id: std::string::String,

}



impl Default for Session {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Session::default())
  }
}

impl rosidl_runtime_rs::Message for Session {
  type RmwMsg = super::msg::rmw::Session;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.request_time)).into_owned(),
        requester_id: msg.requester_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request_time)).into_owned(),
        requester_id: msg.requester_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request_time: builtin_interfaces::msg::Time::from_rmw_message(msg.request_time),
      requester_id: msg.requester_id.to_string(),
    }
  }
}


// Corresponds to rmf_door_msgs__msg__SupervisorHeartbeat

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SupervisorHeartbeat {

    // This member is not documented.
    #[allow(missing_docs)]
    pub all_sessions: Vec<super::msg::DoorSessions>,

}



impl Default for SupervisorHeartbeat {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SupervisorHeartbeat::default())
  }
}

impl rosidl_runtime_rs::Message for SupervisorHeartbeat {
  type RmwMsg = super::msg::rmw::SupervisorHeartbeat;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        all_sessions: msg.all_sessions
          .into_iter()
          .map(|elem| super::msg::DoorSessions::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        all_sessions: msg.all_sessions
          .iter()
          .map(|elem| super::msg::DoorSessions::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      all_sessions: msg.all_sessions
          .into_iter()
          .map(super::msg::DoorSessions::from_rmw_message)
          .collect(),
    }
  }
}


