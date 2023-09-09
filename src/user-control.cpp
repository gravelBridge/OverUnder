#include "vex.h"
using namespace vex;

bool slapperToggled = false;

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

  if(!Controller1.ButtonR2.pressing()) {
    Intake_Lift.set(!Intake_Lift.value());
  }
  while(Controller1.ButtonL1.pressing()) {
    if(Controller1.ButtonR2.pressing()) {
      Clocker.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
    }
    else{
      Clocker.stop();
      Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
    }
  }
  Clocker.stop();
  Intake.stop();
  
  if(!Controller1.ButtonR2.pressing()) {
    Intake_Lift.set(!Intake_Lift.value());
  }
}

void run_intake_in() {
  while(Controller1.ButtonL2.pressing()) {
    if(Controller1.ButtonR2.pressing()) {
      Clocker.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
    }
    else {
      Clocker.stop();
      Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
    }
  }
  Clocker.stop();
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

void doinker() {
  Doinker.set(!Doinker.value());
}

void toggleSlap() {
  if(slapperToggled) {
    Slap.stop();
    slapperToggled = false;
  }
  else {
    Slap.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
    slapperToggled = true;
  }
}