#include "vex.h"
using namespace vex;

void run_slapper() {

  while(!LimitSwitch.pressing()) {
    Slap.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
  }

  while(Controller1.ButtonR1.pressing()) {
    Slap.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
  }
  
  Slap.stop();
}

void run_intake_out() {

  Intake_Lift.set(!Intake_Lift.value());

  while(Controller1.ButtonL1.pressing()) {
    Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
  }
  Intake.stop();
  
  Intake_Lift.set(!Intake_Lift.value());
}

void run_intake_in() {
  while(Controller1.ButtonL2.pressing()) {
    Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
  }
  Intake.stop();
}

void run_clocker_up() {
  while(Controller1.ButtonB.pressing()) {
    Clocker.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
  }
  Clocker.stop();
}

void run_clocker_down() {
  while(Controller1.ButtonX.pressing()) {
    Clocker.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
  }
  Clocker.stop();
}

void hold_ball() {
  Brain.Screen.print("Pressed");
}