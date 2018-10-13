cmake_minimum_required(VERSION 2.8.3)

include_directories(${ROS_LIB_DIR})


generate_arduino_firmware(trigger_auto
  SRCS drive_main.cpp ${ROS_LIB_DIR}/time.cpp
  BOARD leonardo
  PORT /dev/ttyACM0
)