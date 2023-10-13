#include "vex.h"
using namespace vex;

void lift_clocker()
{
    Clocker.spinTo(-30, degrees, true);
    Clocker.spinTo(0, degrees, true);
    Clocker.stop();
    return;
}

void lift_clocker_skills()
{
    Clocker.spinTo(-335, degrees, false);
    // Clocker.stop();
    return;
}

void close_clocker_skills()
{
    Clocker.spinTo(31.5, degrees, false);
    return;
}
void intake_in()
{
    Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
    return;
}

void intake_stop()
{
    Intake.stop();
    return;
}

void intake_out()
{
    Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
    return;
}