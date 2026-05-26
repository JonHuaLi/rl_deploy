std_msgs/Header header

uint32 CMD_TYPE_STATE_CHANGE = 0
uint32 CMD_TYPE_MODE_CHANGE = 1
uint32 cmd_type 

# 状态命令

uint32 STATE_DISABLED = 0
uint32 STATE_DAMPING = 1
uint32 STATE_READY = 2
uint32 STATE_RUNNING = 3

uint32  current_state
uint32 target_state

# 各个状态下的运行模式
uint32 MODE_DEFAULT = 0
uint32 MODE_DANCE = 1


uint32  current_mode
uint32 target_mode





