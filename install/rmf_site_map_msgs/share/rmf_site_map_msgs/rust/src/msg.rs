#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_site_map_msgs__msg__SiteMap

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SiteMap {

    // This member is not documented.
    #[allow(missing_docs)]
    pub encoding: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<u8>,

}

impl SiteMap {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_UNDEFINED: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_GPKG: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_GPKG_GZ: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_GEOJSON: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_GEOJSON_GZ: u32 = 4;

}


impl Default for SiteMap {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SiteMap::default())
  }
}

impl rosidl_runtime_rs::Message for SiteMap {
  type RmwMsg = super::msg::rmw::SiteMap;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        encoding: msg.encoding,
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      encoding: msg.encoding,
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      encoding: msg.encoding,
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


