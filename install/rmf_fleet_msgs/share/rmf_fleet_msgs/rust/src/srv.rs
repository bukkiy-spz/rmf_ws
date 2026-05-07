#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to rmf_fleet_msgs__srv__LiftClearance_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LiftClearance_Request {
    /// Name of the robot that wants to enter a lift
    pub robot_name: std::string::String,

    /// Name of the lift that the robot wants to enter
    pub lift_name: std::string::String,

}



impl Default for LiftClearance_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LiftClearance_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LiftClearance_Request {
  type RmwMsg = super::srv::rmw::LiftClearance_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        lift_name: msg.lift_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_name: msg.robot_name.as_str().into(),
        lift_name: msg.lift_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_name: msg.robot_name.to_string(),
      lift_name: msg.lift_name.to_string(),
    }
  }
}


// Corresponds to rmf_fleet_msgs__srv__LiftClearance_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LiftClearance_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub decision: u32,

}

impl LiftClearance_Response {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DECISION_CLEAR: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DECISION_CROWDED: u32 = 2;

}


impl Default for LiftClearance_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LiftClearance_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LiftClearance_Response {
  type RmwMsg = super::srv::rmw::LiftClearance_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        decision: msg.decision,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      decision: msg.decision,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      decision: msg.decision,
    }
  }
}






#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_fleet_msgs__srv__LiftClearance() -> *const std::ffi::c_void;
}

// Corresponds to rmf_fleet_msgs__srv__LiftClearance
#[allow(missing_docs, non_camel_case_types)]
pub struct LiftClearance;

impl rosidl_runtime_rs::Service for LiftClearance {
    type Request = LiftClearance_Request;
    type Response = LiftClearance_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_fleet_msgs__srv__LiftClearance() }
    }
}


