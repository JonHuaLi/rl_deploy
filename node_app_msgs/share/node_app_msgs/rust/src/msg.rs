#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to node_app_msgs__msg__IotCmdMsg

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IotCmdMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 分类
    pub category: std::string::String,

    /// 功能名称
    pub fun_name: std::string::String,

    /// 附加信息
    pub sub: std::string::String,

    /// 参数
    pub param: std::string::String,

}



impl Default for IotCmdMsg {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IotCmdMsg::default())
  }
}

impl rosidl_runtime_rs::Message for IotCmdMsg {
  type RmwMsg = super::msg::rmw::IotCmdMsg;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        category: msg.category.as_str().into(),
        fun_name: msg.fun_name.as_str().into(),
        sub: msg.sub.as_str().into(),
        param: msg.param.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        category: msg.category.as_str().into(),
        fun_name: msg.fun_name.as_str().into(),
        sub: msg.sub.as_str().into(),
        param: msg.param.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      category: msg.category.to_string(),
      fun_name: msg.fun_name.to_string(),
      sub: msg.sub.to_string(),
      param: msg.param.to_string(),
    }
  }
}


// Corresponds to node_app_msgs__msg__LrsCmdAction

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsCmdAction {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action: u32,

    /// 参数
    pub param: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LrsCmdAction::default())
  }
}

impl rosidl_runtime_rs::Message for LrsCmdAction {
  type RmwMsg = super::msg::rmw::LrsCmdAction;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        action: msg.action,
        param: msg.param.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      action: msg.action,
        param: msg.param.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      action: msg.action,
      param: msg.param.to_string(),
    }
  }
}


// Corresponds to node_app_msgs__msg__LrsCmdActionFeedback

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsCmdActionFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LrsCmdActionFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for LrsCmdActionFeedback {
  type RmwMsg = super::msg::rmw::LrsCmdActionFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        action_type: msg.action_type,
        action_result: msg.action_result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      action_type: msg.action_type,
      action_result: msg.action_result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      action_type: msg.action_type,
      action_result: msg.action_result,
    }
  }
}


// Corresponds to node_app_msgs__msg__LrsCmdState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsCmdState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LrsCmdState::default())
  }
}

impl rosidl_runtime_rs::Message for LrsCmdState {
  type RmwMsg = super::msg::rmw::LrsCmdState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cmd_type: msg.cmd_type,
        current_state: msg.current_state,
        target_state: msg.target_state,
        current_mode: msg.current_mode,
        target_mode: msg.target_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cmd_type: msg.cmd_type,
      current_state: msg.current_state,
      target_state: msg.target_state,
      current_mode: msg.current_mode,
      target_mode: msg.target_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cmd_type: msg.cmd_type,
      current_state: msg.current_state,
      target_state: msg.target_state,
      current_mode: msg.current_mode,
      target_mode: msg.target_mode,
    }
  }
}


// Corresponds to node_app_msgs__msg__LrsCmdStateFeedback

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsCmdStateFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LrsCmdStateFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for LrsCmdStateFeedback {
  type RmwMsg = super::msg::rmw::LrsCmdStateFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        current_state: msg.current_state,
        current_mode: msg.current_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      current_state: msg.current_state,
      current_mode: msg.current_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      current_state: msg.current_state,
      current_mode: msg.current_mode,
    }
  }
}


// Corresponds to node_app_msgs__msg__LrsState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LrsState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 失能，待机，预备，运行,转换
    pub current_state: std::string::String,

    /// 无，舞蹈，其他
    pub current_mode: std::string::String,

    /// 电机恢复，升级，跳舞，其他
    pub current_action: std::string::String,

    /// 成功，失败，进行中，未开始
    pub running_status: std::string::String,

    /// 健康，警告，错误，致命错误
    pub motor_health: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_health_states: Vec<node_control_msgs::msg::MotorHealthState>,

}



impl Default for LrsState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LrsState::default())
  }
}

impl rosidl_runtime_rs::Message for LrsState {
  type RmwMsg = super::msg::rmw::LrsState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        current_state: msg.current_state.as_str().into(),
        current_mode: msg.current_mode.as_str().into(),
        current_action: msg.current_action.as_str().into(),
        running_status: msg.running_status.as_str().into(),
        motor_health: msg.motor_health.as_str().into(),
        motor_health_states: msg.motor_health_states
          .into_iter()
          .map(|elem| node_control_msgs::msg::MotorHealthState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        current_state: msg.current_state.as_str().into(),
        current_mode: msg.current_mode.as_str().into(),
        current_action: msg.current_action.as_str().into(),
        running_status: msg.running_status.as_str().into(),
        motor_health: msg.motor_health.as_str().into(),
        motor_health_states: msg.motor_health_states
          .iter()
          .map(|elem| node_control_msgs::msg::MotorHealthState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      current_state: msg.current_state.to_string(),
      current_mode: msg.current_mode.to_string(),
      current_action: msg.current_action.to_string(),
      running_status: msg.running_status.to_string(),
      motor_health: msg.motor_health.to_string(),
      motor_health_states: msg.motor_health_states
          .into_iter()
          .map(node_control_msgs::msg::MotorHealthState::from_rmw_message)
          .collect(),
    }
  }
}


