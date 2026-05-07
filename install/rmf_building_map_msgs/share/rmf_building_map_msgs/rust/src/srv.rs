#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to rmf_building_map_msgs__srv__GetBuildingMap_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBuildingMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetBuildingMap_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBuildingMap_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetBuildingMap_Request {
  type RmwMsg = super::srv::rmw::GetBuildingMap_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to rmf_building_map_msgs__srv__GetBuildingMap_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBuildingMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub building_map: super::msg::BuildingMap,

}



impl Default for GetBuildingMap_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBuildingMap_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetBuildingMap_Response {
  type RmwMsg = super::srv::rmw::GetBuildingMap_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        building_map: super::msg::BuildingMap::into_rmw_message(std::borrow::Cow::Owned(msg.building_map)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        building_map: super::msg::BuildingMap::into_rmw_message(std::borrow::Cow::Borrowed(&msg.building_map)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      building_map: super::msg::BuildingMap::from_rmw_message(msg.building_map),
    }
  }
}






#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_building_map_msgs__srv__GetBuildingMap() -> *const std::ffi::c_void;
}

// Corresponds to rmf_building_map_msgs__srv__GetBuildingMap
#[allow(missing_docs, non_camel_case_types)]
pub struct GetBuildingMap;

impl rosidl_runtime_rs::Service for GetBuildingMap {
    type Request = GetBuildingMap_Request;
    type Response = GetBuildingMap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_building_map_msgs__srv__GetBuildingMap() }
    }
}


