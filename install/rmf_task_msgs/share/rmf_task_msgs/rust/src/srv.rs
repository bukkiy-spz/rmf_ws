#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to rmf_task_msgs__srv__ApiService_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApiService_Request {
    /// The JSON message that represents the request
    pub json_msg: std::string::String,

}



impl Default for ApiService_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ApiService_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ApiService_Request {
  type RmwMsg = super::srv::rmw::ApiService_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        json_msg: msg.json_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        json_msg: msg.json_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      json_msg: msg.json_msg.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__srv__ApiService_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApiService_Response {
    /// The JSON message that represents the response
    pub json_msg: std::string::String,

}



impl Default for ApiService_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ApiService_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ApiService_Response {
  type RmwMsg = super::srv::rmw::ApiService_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        json_msg: msg.json_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        json_msg: msg.json_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      json_msg: msg.json_msg.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__srv__SubmitTask_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SubmitTask_Request {
    /// Identifier for who is requesting the service
    pub requester: std::string::String,

    /// desciption of task
    pub description: super::msg::TaskDescription,

}



impl Default for SubmitTask_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SubmitTask_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SubmitTask_Request {
  type RmwMsg = super::srv::rmw::SubmitTask_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        requester: msg.requester.as_str().into(),
        description: super::msg::TaskDescription::into_rmw_message(std::borrow::Cow::Owned(msg.description)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        requester: msg.requester.as_str().into(),
        description: super::msg::TaskDescription::into_rmw_message(std::borrow::Cow::Borrowed(&msg.description)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      requester: msg.requester.to_string(),
      description: super::msg::TaskDescription::from_rmw_message(msg.description),
    }
  }
}


// Corresponds to rmf_task_msgs__srv__SubmitTask_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SubmitTask_Response {
    /// Confirmation that this service call is processed
    pub success: bool,

    /// generated task ID by dispatcher node
    pub task_id: std::string::String,

    /// This will provide a verbose message regarding task submission
    pub message: std::string::String,

}



impl Default for SubmitTask_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SubmitTask_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SubmitTask_Response {
  type RmwMsg = super::srv::rmw::SubmitTask_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        task_id: msg.task_id.as_str().into(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        task_id: msg.task_id.as_str().into(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      task_id: msg.task_id.to_string(),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__srv__CancelTask_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTask_Request {
    /// Identifier for who is requesting the service
    pub requester: std::string::String,

    /// generated task ID by dispatcher node
    pub task_id: std::string::String,

}



impl Default for CancelTask_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelTask_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CancelTask_Request {
  type RmwMsg = super::srv::rmw::CancelTask_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        requester: msg.requester.as_str().into(),
        task_id: msg.task_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        requester: msg.requester.as_str().into(),
        task_id: msg.task_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      requester: msg.requester.to_string(),
      task_id: msg.task_id.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__srv__CancelTask_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTask_Response {
    /// Confirmation that this service call is processed
    pub success: bool,

    /// This will provide a verbose message regarding task cancellation
    pub message: std::string::String,

}



impl Default for CancelTask_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelTask_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CancelTask_Response {
  type RmwMsg = super::srv::rmw::CancelTask_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__srv__ReviveTask_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReviveTask_Request {
    /// Identifier for who is requesting the service
    pub requester: std::string::String,

    /// task that was previously cancelled or failed
    pub task_id: std::string::String,

}



impl Default for ReviveTask_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ReviveTask_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ReviveTask_Request {
  type RmwMsg = super::srv::rmw::ReviveTask_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        requester: msg.requester.as_str().into(),
        task_id: msg.task_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        requester: msg.requester.as_str().into(),
        task_id: msg.task_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      requester: msg.requester.to_string(),
      task_id: msg.task_id.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__srv__ReviveTask_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReviveTask_Response {
    /// Confirmation that this service call is processed
    pub success: bool,

}



impl Default for ReviveTask_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ReviveTask_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ReviveTask_Response {
  type RmwMsg = super::srv::rmw::ReviveTask_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to rmf_task_msgs__srv__GetDispatchStates_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDispatchStates_Request {
    /// Input the generated task ID during submission
    /// if empty, provide all Submitted Tasks
    pub task_ids: Vec<std::string::String>,

}



impl Default for GetDispatchStates_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDispatchStates_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetDispatchStates_Request {
  type RmwMsg = super::srv::rmw::GetDispatchStates_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_ids: msg.task_ids
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_ids: msg.task_ids
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_ids: msg.task_ids
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to rmf_task_msgs__srv__GetDispatchStates_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDispatchStates_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: super::msg::DispatchStates,

}



impl Default for GetDispatchStates_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDispatchStates_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetDispatchStates_Response {
  type RmwMsg = super::srv::rmw::GetDispatchStates_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        states: super::msg::DispatchStates::into_rmw_message(std::borrow::Cow::Owned(msg.states)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        states: super::msg::DispatchStates::into_rmw_message(std::borrow::Cow::Borrowed(&msg.states)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      states: super::msg::DispatchStates::from_rmw_message(msg.states),
    }
  }
}






#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__ApiService() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__ApiService
#[allow(missing_docs, non_camel_case_types)]
pub struct ApiService;

impl rosidl_runtime_rs::Service for ApiService {
    type Request = ApiService_Request;
    type Response = ApiService_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__ApiService() }
    }
}




#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__SubmitTask() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__SubmitTask
#[allow(missing_docs, non_camel_case_types)]
pub struct SubmitTask;

impl rosidl_runtime_rs::Service for SubmitTask {
    type Request = SubmitTask_Request;
    type Response = SubmitTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__SubmitTask() }
    }
}




#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__CancelTask() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__CancelTask
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelTask;

impl rosidl_runtime_rs::Service for CancelTask {
    type Request = CancelTask_Request;
    type Response = CancelTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__CancelTask() }
    }
}




#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__ReviveTask() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__ReviveTask
#[allow(missing_docs, non_camel_case_types)]
pub struct ReviveTask;

impl rosidl_runtime_rs::Service for ReviveTask {
    type Request = ReviveTask_Request;
    type Response = ReviveTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__ReviveTask() }
    }
}




#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__GetDispatchStates() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__GetDispatchStates
#[allow(missing_docs, non_camel_case_types)]
pub struct GetDispatchStates;

impl rosidl_runtime_rs::Service for GetDispatchStates {
    type Request = GetDispatchStates_Request;
    type Response = GetDispatchStates_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__GetDispatchStates() }
    }
}


