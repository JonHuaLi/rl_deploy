cmake_minimum_required(VERSION 3.8)
project(node_app_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED) 
find_package(std_msgs REQUIRED)
find_package(node_control_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME} 
  "msg/IotCmdMsg.msg"
  "msg/LrsCmdAction.msg"
  "msg/LrsCmdActionFeedback.msg"
  "msg/LrsCmdState.msg"
  "msg/LrsCmdStateFeedback.msg"
  "msg/LrsState.msg"
  DEPENDENCIES builtin_interfaces std_msgs node_control_msgs
)

ament_export_dependencies(rosidl_default_runtime)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()