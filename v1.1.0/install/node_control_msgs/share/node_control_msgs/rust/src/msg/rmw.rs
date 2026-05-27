#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorCommandFeedback() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorCommandFeedback__init(msg: *mut MotorCommandFeedback) -> bool;
    fn node_control_msgs__msg__MotorCommandFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorCommandFeedback>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorCommandFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorCommandFeedback>);
    fn node_control_msgs__msg__MotorCommandFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorCommandFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorCommandFeedback>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorCommandFeedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCommandFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub seq: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MotorFeedback>,

}



impl Default for MotorCommandFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorCommandFeedback__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorCommandFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorCommandFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorCommandFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorCommandFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorCommandFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorCommandFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorCommandFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorCommandFeedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorCommandFeedback() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorCommand() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorCommand__init(msg: *mut MotorCommand) -> bool;
    fn node_control_msgs__msg__MotorCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorCommand>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorCommand>);
    fn node_control_msgs__msg__MotorCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorCommand>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCommand {
    /// 比例系数
    pub kp: u16,

    /// 微分系数
    pub kd: u16,

    /// rad
    pub position_des: f32,

    /// rad/s
    pub omega_des: f32,

    /// Nm
    pub torque_des: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: u16,

}



impl Default for MotorCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorCommand__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorCommand where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorCommand() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorConfig() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorConfig__init(msg: *mut MotorConfig) -> bool;
    fn node_control_msgs__msg__MotorConfig__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorConfig>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorConfig__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorConfig>);
    fn node_control_msgs__msg__MotorConfig__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorConfig>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorConfig>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorConfig
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorConfig {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 0-25   ff 全配
    pub motor_id: u32,

    /// 各个关节电机配置
    pub config: super::super::msg::rmw::MotorConfigDev,

}



impl Default for MotorConfig {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorConfig__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorConfig__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorConfig {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorConfig__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorConfig__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorConfig__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorConfig {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorConfig where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorConfig";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorConfig() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorConfigDev() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorConfigDev__init(msg: *mut MotorConfigDev) -> bool;
    fn node_control_msgs__msg__MotorConfigDev__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorConfigDev>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorConfigDev__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorConfigDev>);
    fn node_control_msgs__msg__MotorConfigDev__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorConfigDev>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorConfigDev>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorConfigDev
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorConfigDev {

    // This member is not documented.
    #[allow(missing_docs)]
    pub parameter_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameter_value: f32,

}

impl MotorConfigDev {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARAMETER_ID_MOTOR_DIRECTION: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARAMETER_ID_MOTOR_STATUS: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARAMETER_ID_ZERO_POSITION: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARAMETER_ID_CLEAR_ERROR: u32 = 3;

}


impl Default for MotorConfigDev {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorConfigDev__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorConfigDev__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorConfigDev {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorConfigDev__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorConfigDev__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorConfigDev__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorConfigDev {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorConfigDev where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorConfigDev";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorConfigDev() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorControl() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorControl__init(msg: *mut MotorControl) -> bool;
    fn node_control_msgs__msg__MotorControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorControl>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorControl>);
    fn node_control_msgs__msg__MotorControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorControl>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorControl>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorControl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub seq_num: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MotorCommand>,

}



impl Default for MotorControl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorControl__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorControl where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorControl() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorFeedback() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorFeedback__init(msg: *mut MotorFeedback) -> bool;
    fn node_control_msgs__msg__MotorFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorFeedback>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorFeedback>);
    fn node_control_msgs__msg__MotorFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorFeedback>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorFeedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorFeedback {
    /// rad
    pub position: f32,

    /// rad/s
    pub omega: f32,

    /// Nm
    pub torque: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: u16,

}



impl Default for MotorFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorFeedback__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorFeedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorFeedback() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorHealth() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorHealth__init(msg: *mut MotorHealth) -> bool;
    fn node_control_msgs__msg__MotorHealth__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorHealth>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorHealth__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorHealth>);
    fn node_control_msgs__msg__MotorHealth__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorHealth>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorHealth>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorHealth
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorHealth {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 各个关节电机状态
    pub state: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MotorHealthState>,

    /// 所有关节电机状态
    pub state_all: super::super::msg::rmw::MotorHealthState,

}



impl Default for MotorHealth {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorHealth__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorHealth__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorHealth {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorHealth__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorHealth__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorHealth__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorHealth {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorHealth where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorHealth";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorHealth() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorHealthState() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorHealthState__init(msg: *mut MotorHealthState) -> bool;
    fn node_control_msgs__msg__MotorHealthState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorHealthState>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorHealthState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorHealthState>);
    fn node_control_msgs__msg__MotorHealthState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorHealthState>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorHealthState>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorHealthState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorHealthState {
    /// 0-3 表示4种健康状态
    pub health: u16,

    /// 电机方向
    pub motor_direction: u8,

    /// 电机温度
    pub motor_temperature: u8,

    /// mos温度
    pub mos_temperature: u8,

    /// 母线电压
    pub bus_voltage: u8,

    /// 电机在线状态
    pub u1_online: u8,

    /// 电机位置零点
    pub position_zero: f32,

}



impl Default for MotorHealthState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorHealthState__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorHealthState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorHealthState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorHealthState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorHealthState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorHealthState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorHealthState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorHealthState where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorHealthState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorHealthState() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorInfo() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorInfo__init(msg: *mut MotorInfo) -> bool;
    fn node_control_msgs__msg__MotorInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorInfo>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorInfo>);
    fn node_control_msgs__msg__MotorInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorInfo>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 两个关节板的电机信息
    pub info: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MotorInfoValue>,

}



impl Default for MotorInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorInfo__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorInfo where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorInfo() }
  }
}


#[link(name = "node_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorInfoValue() -> *const std::ffi::c_void;
}

#[link(name = "node_control_msgs__rosidl_generator_c")]
extern "C" {
    fn node_control_msgs__msg__MotorInfoValue__init(msg: *mut MotorInfoValue) -> bool;
    fn node_control_msgs__msg__MotorInfoValue__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorInfoValue>, size: usize) -> bool;
    fn node_control_msgs__msg__MotorInfoValue__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorInfoValue>);
    fn node_control_msgs__msg__MotorInfoValue__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorInfoValue>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorInfoValue>) -> bool;
}

// Corresponds to node_control_msgs__msg__MotorInfoValue
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorInfoValue {
    /// 开机时间
    pub startup_time_ms: u64,

    /// CANFD板软件版本
    pub sw_version: [u8; 3],

    /// CANFD板硬件版本
    pub hw_version: [u8; 3],

    /// 关节软件版本
    pub joint_version: [u8; 3],

    /// CANFD板状态
    pub state: u16,

    /// 关节批次号
    pub serial_num: u64,

}



impl Default for MotorInfoValue {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_control_msgs__msg__MotorInfoValue__init(&mut msg as *mut _) {
        panic!("Call to node_control_msgs__msg__MotorInfoValue__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorInfoValue {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorInfoValue__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorInfoValue__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_control_msgs__msg__MotorInfoValue__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorInfoValue {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorInfoValue where Self: Sized {
  const TYPE_NAME: &'static str = "node_control_msgs/msg/MotorInfoValue";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_control_msgs__msg__MotorInfoValue() }
  }
}


