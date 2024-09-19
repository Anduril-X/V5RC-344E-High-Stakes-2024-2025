#include "vex.h"
#include "robot-config.h"

using namespace vex;

// A global instance of competition
competition Competition;


void pre_auton(void) {

}


void autonomous(void) {
  
}


void usercontrol(void) {
  while (1) {
    int axis1 = controller1.axis1.position(percent);
    int axis2 = controller1.axis2.position(percent);
    int axis3 = controller1.axis3.position(percent);
    int axis4 = controller1.axis4.position(percent);
    leftSide.set_velocity((0.0001 * (((axis3 + axis3) * (axis3 + axis3)) * (axis3 + axis3))), percent);
    rightSide.set_velocity((0.0001 * (((axis3 - axis3) * (axis3 - axis3)) * (axis3 - axis3))), percent);
    wait(20, msec);
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
