#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_ingestor_msgs__msg__IngestorRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IngestorRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::Time,

    /// A unique ID for this request
    pub request_guid: std::string::String,

    /// The unique name of the ingestor that this request is aimed at
    pub target_guid: std::string::String,

    /// below are custom workcell message fields
    pub transporter_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub items: Vec<super::msg::IngestorRequestItem>,

}



impl Default for IngestorRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IngestorRequest::default())
  }
}

impl rosidl_runtime_rs::Message for IngestorRequest {
  type RmwMsg = super::msg::rmw::IngestorRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.time)).into_owned(),
        request_guid: msg.request_guid.as_str().into(),
        target_guid: msg.target_guid.as_str().into(),
        transporter_type: msg.transporter_type.as_str().into(),
        items: msg.items
          .into_iter()
          .map(|elem| super::msg::IngestorRequestItem::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time)).into_owned(),
        request_guid: msg.request_guid.as_str().into(),
        target_guid: msg.target_guid.as_str().into(),
        transporter_type: msg.transporter_type.as_str().into(),
        items: msg.items
          .iter()
          .map(|elem| super::msg::IngestorRequestItem::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time: builtin_interfaces::msg::Time::from_rmw_message(msg.time),
      request_guid: msg.request_guid.to_string(),
      target_guid: msg.target_guid.to_string(),
      transporter_type: msg.transporter_type.to_string(),
      items: msg.items
          .into_iter()
          .map(super::msg::IngestorRequestItem::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_ingestor_msgs__msg__IngestorRequestItem

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IngestorRequestItem {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_guid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub quantity: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub compartment_name: std::string::String,

}



impl Default for IngestorRequestItem {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IngestorRequestItem::default())
  }
}

impl rosidl_runtime_rs::Message for IngestorRequestItem {
  type RmwMsg = super::msg::rmw::IngestorRequestItem;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_guid: msg.type_guid.as_str().into(),
        quantity: msg.quantity,
        compartment_name: msg.compartment_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_guid: msg.type_guid.as_str().into(),
      quantity: msg.quantity,
        compartment_name: msg.compartment_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_guid: msg.type_guid.to_string(),
      quantity: msg.quantity,
      compartment_name: msg.compartment_name.to_string(),
    }
  }
}


// Corresponds to rmf_ingestor_msgs__msg__IngestorResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IngestorResult {

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

impl IngestorResult {

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


impl Default for IngestorResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IngestorResult::default())
  }
}

impl rosidl_runtime_rs::Message for IngestorResult {
  type RmwMsg = super::msg::rmw::IngestorResult;

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


// Corresponds to rmf_ingestor_msgs__msg__IngestorState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IngestorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::Time,

    /// A unique ID for this workcell
    pub guid: std::string::String,

    /// Different basic modes that the workcell could be in
    pub mode: i32,

    /// Queued up requests that are being handled by this workcell
    pub request_guid_queue: Vec<std::string::String>,

    /// below are custom workcell message fields
    pub seconds_remaining: f32,

}

impl IngestorState {

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


impl Default for IngestorState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IngestorState::default())
  }
}

impl rosidl_runtime_rs::Message for IngestorState {
  type RmwMsg = super::msg::rmw::IngestorState;

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
        seconds_remaining: msg.seconds_remaining,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time)).into_owned(),
        guid: msg.guid.as_str().into(),
      mode: msg.mode,
        request_guid_queue: msg.request_guid_queue
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      seconds_remaining: msg.seconds_remaining,
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
      seconds_remaining: msg.seconds_remaining,
    }
  }
}


