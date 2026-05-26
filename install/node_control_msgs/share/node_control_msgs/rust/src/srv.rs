#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to node_control_msgs__srv__MotorConfigStatus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorConfigStatus_Request {
    /// 0-25   ff 全配
    pub motor_id: u32,

}



impl Default for MotorConfigStatus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MotorConfigStatus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MotorConfigStatus_Request {
  type RmwMsg = super::srv::rmw::MotorConfigStatus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_id: msg.motor_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_id: msg.motor_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_id: msg.motor_id,
    }
  }
}


// Corresponds to node_control_msgs__srv__MotorConfigStatus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorConfigStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub config: Vec<super::msg::MotorConfigDev>,

}



impl Default for MotorConfigStatus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MotorConfigStatus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MotorConfigStatus_Response {
  type RmwMsg = super::srv::rmw::MotorConfigStatus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        config: msg.config
          .into_iter()
          .map(|elem| super::msg::MotorConfigDev::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        config: msg.config
          .iter()
          .map(|elem| super::msg::MotorConfigDev::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      config: msg.config
          .into_iter()
          .map(super::msg::MotorConfigDev::from_rmw_message)
          .collect(),
    }
  }
}






#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__node_control_msgs__srv__MotorConfigStatus() -> *const std::ffi::c_void;
}

// Corresponds to node_control_msgs__srv__MotorConfigStatus
#[allow(missing_docs, non_camel_case_types)]
pub struct MotorConfigStatus;

impl rosidl_runtime_rs::Service for MotorConfigStatus {
    type Request = MotorConfigStatus_Request;
    type Response = MotorConfigStatus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__node_control_msgs__srv__MotorConfigStatus() }
    }
}


