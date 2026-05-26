#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__srv__MotorConfigStatus_Request() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__srv__MotorConfigStatus_Request__init(msg: *mut MotorConfigStatus_Request) -> bool;
    fn node_control_msgs__srv__MotorConfigStatus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorConfigStatus_Request>, size: usize) -> bool;
    fn node_control_msgs__srv__MotorConfigStatus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorConfigStatus_Request>);
    fn node_control_msgs__srv__MotorConfigStatus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorConfigStatus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorConfigStatus_Request>) -> bool;
}

// Corresponds to node_control_msgs__srv__MotorConfigStatus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorConfigStatus_Request {
    /// 0-25   ff 全配
    pub motor_id: u32,

}



impl Default for MotorConfigStatus_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__srv__MotorConfigStatus_Request__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__srv__MotorConfigStatus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorConfigStatus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__srv__MotorConfigStatus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__srv__MotorConfigStatus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__srv__MotorConfigStatus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorConfigStatus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorConfigStatus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/srv/MotorConfigStatus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__srv__MotorConfigStatus_Request() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__srv__MotorConfigStatus_Response() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__srv__MotorConfigStatus_Response__init(msg: *mut MotorConfigStatus_Response) -> bool;
    fn node_control_msgs__srv__MotorConfigStatus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorConfigStatus_Response>, size: usize) -> bool;
    fn node_control_msgs__srv__MotorConfigStatus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorConfigStatus_Response>);
    fn node_control_msgs__srv__MotorConfigStatus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorConfigStatus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorConfigStatus_Response>) -> bool;
}

// Corresponds to node_control_msgs__srv__MotorConfigStatus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorConfigStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub config: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MotorConfigDev>,

}



impl Default for MotorConfigStatus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__srv__MotorConfigStatus_Response__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__srv__MotorConfigStatus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorConfigStatus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__srv__MotorConfigStatus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__srv__MotorConfigStatus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__srv__MotorConfigStatus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorConfigStatus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorConfigStatus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/srv/MotorConfigStatus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__srv__MotorConfigStatus_Response() }
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


