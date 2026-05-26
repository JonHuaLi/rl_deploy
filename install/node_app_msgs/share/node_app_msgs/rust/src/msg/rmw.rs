#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "node_app_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__IotCmdMsg() -> *const std::ffi::c_void;
}

#[link(name = "node_app_msgs__rosidl_generator_c")]
extern "C" {
    fn node_app_msgs__msg__IotCmdMsg__init(msg: *mut IotCmdMsg) -> bool;
    fn node_app_msgs__msg__IotCmdMsg__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IotCmdMsg>, size: usize) -> bool;
    fn node_app_msgs__msg__IotCmdMsg__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IotCmdMsg>);
    fn node_app_msgs__msg__IotCmdMsg__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IotCmdMsg>, out_seq: *mut rosidl_runtime_rs::Sequence<IotCmdMsg>) -> bool;
}

// Corresponds to node_app_msgs__msg__IotCmdMsg
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IotCmdMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 分类
    pub category: rosidl_runtime_rs::String,

    /// 功能名称
    pub fun_name: rosidl_runtime_rs::String,

    /// 附加信息
    pub sub: rosidl_runtime_rs::String,

    /// 参数
    pub param: rosidl_runtime_rs::String,

}



impl Default for IotCmdMsg {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_app_msgs__msg__IotCmdMsg__init(&mut msg as *mut _) {
        panic!("Call to node_app_msgs__msg__IotCmdMsg__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IotCmdMsg {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__IotCmdMsg__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__IotCmdMsg__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__IotCmdMsg__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IotCmdMsg {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IotCmdMsg where Self: Sized {
  const TYPE_NAME: &'static str = "node_app_msgs/msg/IotCmdMsg";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__IotCmdMsg() }
  }
}


#[link(name = "node_app_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsCmdAction() -> *const std::ffi::c_void;
}

#[link(name = "node_app_msgs__rosidl_generator_c")]
extern "C" {
    fn node_app_msgs__msg__LrsCmdAction__init(msg: *mut LrsCmdAction) -> bool;
    fn node_app_msgs__msg__LrsCmdAction__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LrsCmdAction>, size: usize) -> bool;
    fn node_app_msgs__msg__LrsCmdAction__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LrsCmdAction>);
    fn node_app_msgs__msg__LrsCmdAction__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LrsCmdAction>, out_seq: *mut rosidl_runtime_rs::Sequence<LrsCmdAction>) -> bool;
}

// Corresponds to node_app_msgs__msg__LrsCmdAction
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsCmdAction {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action: u32,

    /// 参数
    pub param: rosidl_runtime_rs::String,

}

impl LrsCmdAction {
    ///  普通命令
    /// 机器电机状态恢复
    pub const ACTION_MOTOR_RECOVER: u32 = 0;

    /// 机器人升级
    pub const ACTION_UPGRADE: u32 = 1;

    /// 舞蹈命令
    pub const ACTION_DANCE_1: u32 = 10;

    /// 其他命令
    pub const ACTION_WAVE: u32 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_CLASP: u32 = 21;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_HEART: u32 = 22;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SHAKE: u32 = 23;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_CLAP: u32 = 24;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_KISS: u32 = 25;

}


impl Default for LrsCmdAction {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_app_msgs__msg__LrsCmdAction__init(&mut msg as *mut _) {
        panic!("Call to node_app_msgs__msg__LrsCmdAction__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LrsCmdAction {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdAction__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdAction__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdAction__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LrsCmdAction {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LrsCmdAction where Self: Sized {
  const TYPE_NAME: &'static str = "node_app_msgs/msg/LrsCmdAction";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsCmdAction() }
  }
}


#[link(name = "node_app_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsCmdActionFeedback() -> *const std::ffi::c_void;
}

#[link(name = "node_app_msgs__rosidl_generator_c")]
extern "C" {
    fn node_app_msgs__msg__LrsCmdActionFeedback__init(msg: *mut LrsCmdActionFeedback) -> bool;
    fn node_app_msgs__msg__LrsCmdActionFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LrsCmdActionFeedback>, size: usize) -> bool;
    fn node_app_msgs__msg__LrsCmdActionFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LrsCmdActionFeedback>);
    fn node_app_msgs__msg__LrsCmdActionFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LrsCmdActionFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<LrsCmdActionFeedback>) -> bool;
}

// Corresponds to node_app_msgs__msg__LrsCmdActionFeedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsCmdActionFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action_type: u32,

    /// 运行结果
    pub action_result: u32,

}

impl LrsCmdActionFeedback {
    ///  普通命令
    /// 机器电机状态恢复
    pub const ACTION_MOTOR_RECOVER: u32 = 0;

    /// 机器人升级
    pub const ACTION_UPGRADE: u32 = 1;

    /// 舞蹈命令
    pub const ACTION_DANCE_1: u32 = 10;

    /// 其他命令
    pub const ACTION_WAVE: u32 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_CLASP: u32 = 21;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_HEART: u32 = 22;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SHAKE: u32 = 23;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_CLAP: u32 = 24;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_KISS: u32 = 25;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_RUNNING: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SUCCESS: u32 = 1;

}


impl Default for LrsCmdActionFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_app_msgs__msg__LrsCmdActionFeedback__init(&mut msg as *mut _) {
        panic!("Call to node_app_msgs__msg__LrsCmdActionFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LrsCmdActionFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdActionFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdActionFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdActionFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LrsCmdActionFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LrsCmdActionFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "node_app_msgs/msg/LrsCmdActionFeedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsCmdActionFeedback() }
  }
}


#[link(name = "node_app_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsCmdState() -> *const std::ffi::c_void;
}

#[link(name = "node_app_msgs__rosidl_generator_c")]
extern "C" {
    fn node_app_msgs__msg__LrsCmdState__init(msg: *mut LrsCmdState) -> bool;
    fn node_app_msgs__msg__LrsCmdState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LrsCmdState>, size: usize) -> bool;
    fn node_app_msgs__msg__LrsCmdState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LrsCmdState>);
    fn node_app_msgs__msg__LrsCmdState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LrsCmdState>, out_seq: *mut rosidl_runtime_rs::Sequence<LrsCmdState>) -> bool;
}

// Corresponds to node_app_msgs__msg__LrsCmdState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsCmdState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd_type: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_state: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_state: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mode: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_mode: u32,

}

impl LrsCmdState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_TYPE_STATE_CHANGE: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_TYPE_MODE_CHANGE: u32 = 1;

    /// 状态命令
    pub const STATE_DISABLED: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_DAMPING: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_READY: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_RUNNING: u32 = 3;

    /// 各个状态下的运行模式
    pub const MODE_DEFAULT: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_DANCE: u32 = 1;

}


impl Default for LrsCmdState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_app_msgs__msg__LrsCmdState__init(&mut msg as *mut _) {
        panic!("Call to node_app_msgs__msg__LrsCmdState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LrsCmdState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LrsCmdState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LrsCmdState where Self: Sized {
  const TYPE_NAME: &'static str = "node_app_msgs/msg/LrsCmdState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsCmdState() }
  }
}


#[link(name = "node_app_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsCmdStateFeedback() -> *const std::ffi::c_void;
}

#[link(name = "node_app_msgs__rosidl_generator_c")]
extern "C" {
    fn node_app_msgs__msg__LrsCmdStateFeedback__init(msg: *mut LrsCmdStateFeedback) -> bool;
    fn node_app_msgs__msg__LrsCmdStateFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LrsCmdStateFeedback>, size: usize) -> bool;
    fn node_app_msgs__msg__LrsCmdStateFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LrsCmdStateFeedback>);
    fn node_app_msgs__msg__LrsCmdStateFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LrsCmdStateFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<LrsCmdStateFeedback>) -> bool;
}

// Corresponds to node_app_msgs__msg__LrsCmdStateFeedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsCmdStateFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_state: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mode: u32,

}

impl LrsCmdStateFeedback {
    /// 状态命令
    pub const STATE_DISABLED: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_DAMPING: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_READY: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_RUNNING: u32 = 3;

    /// 各个状态下的运行模式
    pub const MODE_DEFAULT: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_DANCE: u32 = 1;

}


impl Default for LrsCmdStateFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_app_msgs__msg__LrsCmdStateFeedback__init(&mut msg as *mut _) {
        panic!("Call to node_app_msgs__msg__LrsCmdStateFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LrsCmdStateFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdStateFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdStateFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsCmdStateFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LrsCmdStateFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LrsCmdStateFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "node_app_msgs/msg/LrsCmdStateFeedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsCmdStateFeedback() }
  }
}


#[link(name = "node_app_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsState() -> *const std::ffi::c_void;
}

#[link(name = "node_app_msgs__rosidl_generator_c")]
extern "C" {
    fn node_app_msgs__msg__LrsState__init(msg: *mut LrsState) -> bool;
    fn node_app_msgs__msg__LrsState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LrsState>, size: usize) -> bool;
    fn node_app_msgs__msg__LrsState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LrsState>);
    fn node_app_msgs__msg__LrsState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LrsState>, out_seq: *mut rosidl_runtime_rs::Sequence<LrsState>) -> bool;
}

// Corresponds to node_app_msgs__msg__LrsState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 失能，待机，预备，运行,转换
    pub current_state: rosidl_runtime_rs::String,

    /// 无，舞蹈，其他
    pub current_mode: rosidl_runtime_rs::String,

    /// 电机恢复，升级，跳舞，其他
    pub current_action: rosidl_runtime_rs::String,

    /// 成功，失败，进行中，未开始
    pub running_status: rosidl_runtime_rs::String,

    /// 健康，警告，错误，致命错误
    pub motor_health: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_health_states: rosidl_runtime_rs::Sequence<node_control_msgs::msg::rmw::MotorHealthState>,

}



impl Default for LrsState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !node_app_msgs__msg__LrsState__init(&mut msg as *mut _) {
        panic!("Call to node_app_msgs__msg__LrsState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LrsState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { node_app_msgs__msg__LrsState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LrsState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LrsState where Self: Sized {
  const TYPE_NAME: &'static str = "node_app_msgs/msg/LrsState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__node_app_msgs__msg__LrsState() }
  }
}


