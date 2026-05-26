#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "node_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_driver_msgs__msg__Sensormsgcontrol() -> *const std::ffi::c_void;
}

#[link(name = "node_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn node_driver_msgs__msg__Sensormsgcontrol__init(msg: *mut Sensormsgcontrol) -> bool;
    fn node_driver_msgs__msg__Sensormsgcontrol__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Sensormsgcontrol>, size: usize) -> bool;
    fn node_driver_msgs__msg__Sensormsgcontrol__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Sensormsgcontrol>);
    fn node_driver_msgs__msg__Sensormsgcontrol__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Sensormsgcontrol>, out_seq: *mut rosidl_runtime_rs::Sequence<Sensormsgcontrol>) -> bool;
}

// Corresponds to node_driver_msgs__msg__Sensormsgcontrol
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Sensormsgcontrol {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 传感器类型，例如 0:IMU, 1:激光, 2:超声波等
    pub sensor_type: i8,

    /// 控制内容，0:关闭，1:开启，2:状态查询等
    pub control_command: i8,

}



impl Default for Sensormsgcontrol {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_driver_msgs__msg__Sensormsgcontrol__init(&mut msg as *mut _) {
        panic!("Call to node_driver_msgs__msg__Sensormsgcontrol__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Sensormsgcontrol {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_driver_msgs__msg__Sensormsgcontrol__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_driver_msgs__msg__Sensormsgcontrol__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_driver_msgs__msg__Sensormsgcontrol__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Sensormsgcontrol {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Sensormsgcontrol where Self: Sized {
  const TYPE_NAME: &'static str = "node_driver_msgs/msg/Sensormsgcontrol";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_driver_msgs__msg__Sensormsgcontrol() }
  }
}


#[link(name = "node_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_driver_msgs__msg__Sensormsgstate() -> *const std::ffi::c_void;
}

#[link(name = "node_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn node_driver_msgs__msg__Sensormsgstate__init(msg: *mut Sensormsgstate) -> bool;
    fn node_driver_msgs__msg__Sensormsgstate__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Sensormsgstate>, size: usize) -> bool;
    fn node_driver_msgs__msg__Sensormsgstate__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Sensormsgstate>);
    fn node_driver_msgs__msg__Sensormsgstate__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Sensormsgstate>, out_seq: *mut rosidl_runtime_rs::Sequence<Sensormsgstate>) -> bool;
}

// Corresponds to node_driver_msgs__msg__Sensormsgstate
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Sensormsgstate {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 传感器类型，例如 0:IMU, 1:激光, 2:超声波等
    pub sensor_type: i8,

    /// 传感器状态，例如 0:关闭, 1:开启,
    pub sensor_state: i8,

    /// 错误信息，例如 "IMU 异常"
    pub error_message: rosidl_runtime_rs::String,

}



impl Default for Sensormsgstate {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_driver_msgs__msg__Sensormsgstate__init(&mut msg as *mut _) {
        panic!("Call to node_driver_msgs__msg__Sensormsgstate__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Sensormsgstate {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_driver_msgs__msg__Sensormsgstate__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_driver_msgs__msg__Sensormsgstate__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_driver_msgs__msg__Sensormsgstate__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Sensormsgstate {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Sensormsgstate where Self: Sized {
  const TYPE_NAME: &'static str = "node_driver_msgs/msg/Sensormsgstate";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_driver_msgs__msg__Sensormsgstate() }
  }
}


