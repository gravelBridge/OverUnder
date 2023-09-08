#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor L1 = motor(PORT9, ratio18_1, false);
motor L2 = motor(PORT8, ratio18_1, false);
motor L3 = motor(PORT10, ratio18_1, false);
motor R1 = motor(PORT16, ratio18_1, false);
motor R2 = motor(PORT14, ratio18_1, false);
motor R3 = motor(PORT17, ratio18_1, false);
inertial Inertial = inertial(PORT15);
controller Controller1 = controller(primary);
motor Slap = motor(PORT7, ratio36_1, false);
limit LimitSwitch = limit(Brain.ThreeWirePort.A);
motor Intake = motor(PORT21, ratio18_1, false);
motor Clocker = motor(PORT18, ratio36_1, true);
digital_out Intake_Lift = digital_out(Brain.ThreeWirePort.C);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}