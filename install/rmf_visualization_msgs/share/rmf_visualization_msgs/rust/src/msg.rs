#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_visualization_msgs__msg__RvizParam

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RvizParam {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub query_duration: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_duration: i64,

}



impl Default for RvizParam {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RvizParam::default())
  }
}

impl rosidl_runtime_rs::Message for RvizParam {
  type RmwMsg = super::msg::rmw::RvizParam;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_name: msg.map_name.as_str().into(),
        query_duration: msg.query_duration,
        start_duration: msg.start_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map_name: msg.map_name.as_str().into(),
      query_duration: msg.query_duration,
      start_duration: msg.start_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      map_name: msg.map_name.to_string(),
      query_duration: msg.query_duration,
      start_duration: msg.start_duration,
    }
  }
}


