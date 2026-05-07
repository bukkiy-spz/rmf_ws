#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to rmf_traffic_msgs__srv__RegisterQuery_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterQuery_Request {
    /// The query to be registered
    pub query: super::msg::ScheduleQuery,

}



impl Default for RegisterQuery_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RegisterQuery_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RegisterQuery_Request {
  type RmwMsg = super::srv::rmw::RegisterQuery_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        query: super::msg::ScheduleQuery::into_rmw_message(std::borrow::Cow::Owned(msg.query)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        query: super::msg::ScheduleQuery::into_rmw_message(std::borrow::Cow::Borrowed(&msg.query)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      query: super::msg::ScheduleQuery::from_rmw_message(msg.query),
    }
  }
}


// Corresponds to rmf_traffic_msgs__srv__RegisterQuery_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterQuery_Response {
    /// The identity of the schedule node that provided this registration
    pub node_id: super::msg::ScheduleIdentity,

    /// The ID given to the registered query. Use this ID when making a query request.
    pub query_id: u64,

    /// A string to notify exceptional issues that came up while trying to fulfill the
    /// request.
    pub error: std::string::String,

}



impl Default for RegisterQuery_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RegisterQuery_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RegisterQuery_Response {
  type RmwMsg = super::srv::rmw::RegisterQuery_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Owned(msg.node_id)).into_owned(),
        query_id: msg.query_id,
        error: msg.error.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Borrowed(&msg.node_id)).into_owned(),
      query_id: msg.query_id,
        error: msg.error.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: super::msg::ScheduleIdentity::from_rmw_message(msg.node_id),
      query_id: msg.query_id,
      error: msg.error.to_string(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__srv__RequestChanges_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestChanges_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub query_id: u64,

    /// Version to request changes from; ignored if full_update is true
    pub version: u64,

    /// Request a full update rather than from a specific version
    pub full_update: bool,

}



impl Default for RequestChanges_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RequestChanges_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RequestChanges_Request {
  type RmwMsg = super::srv::rmw::RequestChanges_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        query_id: msg.query_id,
        version: msg.version,
        full_update: msg.full_update,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      query_id: msg.query_id,
      version: msg.version,
      full_update: msg.full_update,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      query_id: msg.query_id,
      version: msg.version,
      full_update: msg.full_update,
    }
  }
}


// Corresponds to rmf_traffic_msgs__srv__RequestChanges_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestChanges_Response {
    /// Response to the request
    pub node_id: super::msg::ScheduleIdentity,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: std::string::String,

}

impl RequestChanges_Response {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_ACCEPTED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN_QUERY_ID: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR: u8 = 3;

}


impl Default for RequestChanges_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RequestChanges_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RequestChanges_Response {
  type RmwMsg = super::srv::rmw::RequestChanges_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Owned(msg.node_id)).into_owned(),
        result: msg.result,
        error: msg.error.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Borrowed(&msg.node_id)).into_owned(),
      result: msg.result,
        error: msg.error.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: super::msg::ScheduleIdentity::from_rmw_message(msg.node_id),
      result: msg.result,
      error: msg.error.to_string(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__srv__RegisterParticipant_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterParticipant_Request {
    /// The description of the participant that is being registered
    pub description: super::msg::ParticipantDescription,

}



impl Default for RegisterParticipant_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RegisterParticipant_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RegisterParticipant_Request {
  type RmwMsg = super::srv::rmw::RegisterParticipant_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        description: super::msg::ParticipantDescription::into_rmw_message(std::borrow::Cow::Owned(msg.description)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        description: super::msg::ParticipantDescription::into_rmw_message(std::borrow::Cow::Borrowed(&msg.description)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      description: super::msg::ParticipantDescription::from_rmw_message(msg.description),
    }
  }
}


// Corresponds to rmf_traffic_msgs__srv__RegisterParticipant_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterParticipant_Response {
    /// The ID given to the registered participant
    pub participant_id: u64,

    /// The last itinerary version that this participant had
    pub last_itinerary_version: u64,

    /// The last Route ID that this participant had
    pub last_plan_id: u64,

    /// The next storage base for this participant to use
    pub next_storage_base: u64,

    /// A string to notify about exceptional issues that came up while trying to
    /// fulfill the request
    pub error: std::string::String,

}



impl Default for RegisterParticipant_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RegisterParticipant_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RegisterParticipant_Response {
  type RmwMsg = super::srv::rmw::RegisterParticipant_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant_id: msg.participant_id,
        last_itinerary_version: msg.last_itinerary_version,
        last_plan_id: msg.last_plan_id,
        next_storage_base: msg.next_storage_base,
        error: msg.error.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant_id: msg.participant_id,
      last_itinerary_version: msg.last_itinerary_version,
      last_plan_id: msg.last_plan_id,
      next_storage_base: msg.next_storage_base,
        error: msg.error.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant_id: msg.participant_id,
      last_itinerary_version: msg.last_itinerary_version,
      last_plan_id: msg.last_plan_id,
      next_storage_base: msg.next_storage_base,
      error: msg.error.to_string(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__srv__UnregisterParticipant_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnregisterParticipant_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant_id: u64,

}



impl Default for UnregisterParticipant_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UnregisterParticipant_Request::default())
  }
}

impl rosidl_runtime_rs::Message for UnregisterParticipant_Request {
  type RmwMsg = super::srv::rmw::UnregisterParticipant_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant_id: msg.participant_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant_id: msg.participant_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant_id: msg.participant_id,
    }
  }
}


// Corresponds to rmf_traffic_msgs__srv__UnregisterParticipant_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnregisterParticipant_Response {
    /// Confirmation that the participant was unregistered
    pub confirmation: bool,

    /// A description of any errors that were encountered, such as the participant_id
    /// being unknown
    pub error: std::string::String,

}



impl Default for UnregisterParticipant_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UnregisterParticipant_Response::default())
  }
}

impl rosidl_runtime_rs::Message for UnregisterParticipant_Response {
  type RmwMsg = super::srv::rmw::UnregisterParticipant_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        confirmation: msg.confirmation,
        error: msg.error.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      confirmation: msg.confirmation,
        error: msg.error.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      confirmation: msg.confirmation,
      error: msg.error.to_string(),
    }
  }
}






#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RegisterQuery() -> *const std::ffi::c_void;
}

// Corresponds to rmf_traffic_msgs__srv__RegisterQuery
#[allow(missing_docs, non_camel_case_types)]
pub struct RegisterQuery;

impl rosidl_runtime_rs::Service for RegisterQuery {
    type Request = RegisterQuery_Request;
    type Response = RegisterQuery_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RegisterQuery() }
    }
}




#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RequestChanges() -> *const std::ffi::c_void;
}

// Corresponds to rmf_traffic_msgs__srv__RequestChanges
#[allow(missing_docs, non_camel_case_types)]
pub struct RequestChanges;

impl rosidl_runtime_rs::Service for RequestChanges {
    type Request = RequestChanges_Request;
    type Response = RequestChanges_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RequestChanges() }
    }
}




#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RegisterParticipant() -> *const std::ffi::c_void;
}

// Corresponds to rmf_traffic_msgs__srv__RegisterParticipant
#[allow(missing_docs, non_camel_case_types)]
pub struct RegisterParticipant;

impl rosidl_runtime_rs::Service for RegisterParticipant {
    type Request = RegisterParticipant_Request;
    type Response = RegisterParticipant_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RegisterParticipant() }
    }
}




#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__UnregisterParticipant() -> *const std::ffi::c_void;
}

// Corresponds to rmf_traffic_msgs__srv__UnregisterParticipant
#[allow(missing_docs, non_camel_case_types)]
pub struct UnregisterParticipant;

impl rosidl_runtime_rs::Service for UnregisterParticipant {
    type Request = UnregisterParticipant_Request;
    type Response = UnregisterParticipant_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__UnregisterParticipant() }
    }
}


