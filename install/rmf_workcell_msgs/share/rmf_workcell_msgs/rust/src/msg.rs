#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_workcell_msgs__msg__Asset

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Asset {

    // This member is not documented.
    #[allow(missing_docs)]
    pub guid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: std::string::String,

}



impl Default for Asset {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Asset::default())
  }
}

impl rosidl_runtime_rs::Message for Asset {
  type RmwMsg = super::msg::rmw::Asset;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        guid: msg.guid.as_str().into(),
        type_: msg.type_.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        guid: msg.guid.as_str().into(),
        type_: msg.type_.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      guid: msg.guid.to_string(),
      type_: msg.type_.to_string(),
    }
  }
}


// Corresponds to rmf_workcell_msgs__msg__Trait

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trait {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: Vec<std::string::String>,

}



impl Default for Trait {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Trait::default())
  }
}

impl rosidl_runtime_rs::Message for Trait {
  type RmwMsg = super::msg::rmw::Trait;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        value: msg.value
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        value: msg.value
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      key: msg.key.to_string(),
      value: msg.value
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to rmf_workcell_msgs__msg__WorkcellConfiguration

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorkcellConfiguration {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub guid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assets: Vec<super::msg::Asset>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub traits: Vec<super::msg::Trait>,

}



impl Default for WorkcellConfiguration {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WorkcellConfiguration::default())
  }
}

impl rosidl_runtime_rs::Message for WorkcellConfiguration {
  type RmwMsg = super::msg::rmw::WorkcellConfiguration;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.time)).into_owned(),
        guid: msg.guid.as_str().into(),
        type_: msg.type_.as_str().into(),
        assets: msg.assets
          .into_iter()
          .map(|elem| super::msg::Asset::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        traits: msg.traits
          .into_iter()
          .map(|elem| super::msg::Trait::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time)).into_owned(),
        guid: msg.guid.as_str().into(),
        type_: msg.type_.as_str().into(),
        assets: msg.assets
          .iter()
          .map(|elem| super::msg::Asset::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        traits: msg.traits
          .iter()
          .map(|elem| super::msg::Trait::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time: builtin_interfaces::msg::Time::from_rmw_message(msg.time),
      guid: msg.guid.to_string(),
      type_: msg.type_.to_string(),
      assets: msg.assets
          .into_iter()
          .map(super::msg::Asset::from_rmw_message)
          .collect(),
      traits: msg.traits
          .into_iter()
          .map(super::msg::Trait::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_workcell_msgs__msg__WorkcellState
/// This is a template message for all types of workcells to build off from,
/// which allows generic workcell libraries to have access to common message
/// fields.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorkcellState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::Time,

    /// A unique ID for this workcell
    pub guid: std::string::String,

    /// Different basic modes that the workcell could be in
    pub mode: i32,

    /// Queued up requests that are being handled by this workcell
    pub request_guid_queue: Vec<std::string::String>,

}

impl WorkcellState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IDLE: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BUSY: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFFLINE: i32 = 2;

}


impl Default for WorkcellState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WorkcellState::default())
  }
}

impl rosidl_runtime_rs::Message for WorkcellState {
  type RmwMsg = super::msg::rmw::WorkcellState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.time)).into_owned(),
        guid: msg.guid.as_str().into(),
        mode: msg.mode,
        request_guid_queue: msg.request_guid_queue
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time)).into_owned(),
        guid: msg.guid.as_str().into(),
      mode: msg.mode,
        request_guid_queue: msg.request_guid_queue
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time: builtin_interfaces::msg::Time::from_rmw_message(msg.time),
      guid: msg.guid.to_string(),
      mode: msg.mode,
      request_guid_queue: msg.request_guid_queue
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to rmf_workcell_msgs__msg__WorkcellRequest
/// This is a template message for all types of workcells to build off from,
/// which allows generic workcell libraries to have access to common message
/// fields.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorkcellRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::Time,

    /// A unique ID for this request
    pub request_guid: std::string::String,

    /// The unique ID of the workcell that this request is aimed at
    pub target_guid: std::string::String,

}



impl Default for WorkcellRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WorkcellRequest::default())
  }
}

impl rosidl_runtime_rs::Message for WorkcellRequest {
  type RmwMsg = super::msg::rmw::WorkcellRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.time)).into_owned(),
        request_guid: msg.request_guid.as_str().into(),
        target_guid: msg.target_guid.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time)).into_owned(),
        request_guid: msg.request_guid.as_str().into(),
        target_guid: msg.target_guid.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time: builtin_interfaces::msg::Time::from_rmw_message(msg.time),
      request_guid: msg.request_guid.to_string(),
      target_guid: msg.target_guid.to_string(),
    }
  }
}


// Corresponds to rmf_workcell_msgs__msg__WorkcellResult
/// This is a template message for all types of workcells to build off from,
/// which allows generic workcell libraries to have access to common message
/// fields.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorkcellResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::Time,

    /// A unique ID for the request which this result is for
    pub request_guid: std::string::String,

    /// The unique ID of the workcell that this result was sent from
    pub source_guid: std::string::String,

    /// Different basic result statuses
    pub status: u8,

}

impl WorkcellResult {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACKNOWLEDGED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCESS: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: u8 = 2;

}


impl Default for WorkcellResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WorkcellResult::default())
  }
}

impl rosidl_runtime_rs::Message for WorkcellResult {
  type RmwMsg = super::msg::rmw::WorkcellResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.time)).into_owned(),
        request_guid: msg.request_guid.as_str().into(),
        source_guid: msg.source_guid.as_str().into(),
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time)).into_owned(),
        request_guid: msg.request_guid.as_str().into(),
        source_guid: msg.source_guid.as_str().into(),
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time: builtin_interfaces::msg::Time::from_rmw_message(msg.time),
      request_guid: msg.request_guid.to_string(),
      source_guid: msg.source_guid.to_string(),
      status: msg.status,
    }
  }
}


