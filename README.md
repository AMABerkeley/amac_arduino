# amac_arduino

This code is useful for talking over radio to a servo, motor contorller, and aux channel. It listens for a trigger on a remote to turn on/off in order to enable autonomous mode/remote control mode. It heavily utilized infrastructure from: http://rcarduino.blogspot.com/2012/04/how-to-read-multiple-rc-channels-draft.html

Must have: <PinChangeInt.h> and <Servo.h>


Inside ard_ws I created another ros_workspace in oder to set up an arduino package for trigger_auto. used this as a guide: http://wiki.ros.org/rosserial_arduino/Tutorials/CMake 

# TODO 

Update code for PWM values to be sent to ros topic.
