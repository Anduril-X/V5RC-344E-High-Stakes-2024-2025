#include "vex.h"
#include "robot-config.h"

using namespace vex;

//Initialize Devices
motor frontLeft = motor(PORT1, ratio6_1, false);
motor middleLeft = motor(PORT2, ratio6_1, false);
motor backLeft = motor(PORT3, ratio6_1, false);
motor frontRight = motor(PORT4, ratio6_1, false);
motor middleRight = motor(PORT5, ratio6_1, false);
motor backRight = motor(PORT6, ratio6_1, false);