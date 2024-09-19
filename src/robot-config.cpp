#include "vex.h"
#include "robot-config.h"

using namespace vex;


//Global instance of brain
brain Brain;


//Initialize Devices
controller controller1;
motor frontLeft = motor(PORT1, ratio6_1, false);
motor middleLeft = motor(PORT2, ratio6_1, false);
motor backLeft = motor(PORT3, ratio6_1, false);
motor frontRight = motor(PORT4, ratio6_1, false);
motor middleRight = motor(PORT5, ratio6_1, false);
motor backRight = motor(PORT6, ratio6_1, false);
motor_group leftSide = motor_group(frontLeft, middleLeft, backLeft);
motor_group rightSide = motor_group(frontRight, middleRight, backRight);
motor_group drivetrain = motor_group(frontLeft, middleLeft, backLeft, frontRight, middleRight, backRight);