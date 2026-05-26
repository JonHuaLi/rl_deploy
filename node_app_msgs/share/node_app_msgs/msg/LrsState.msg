std_msgs/Header header

string current_state  # 失能，待机，预备，运行,转换
string current_mode # 无，舞蹈，其他
string current_action  # 电机恢复，升级，跳舞，其他

string running_status # 成功，失败，进行中，未开始
string motor_health   #健康，警告，错误，致命错误

node_control_msgs/MotorHealthState[] motor_health_states
