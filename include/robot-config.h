using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor L1;
extern motor L2;
extern motor L3;
extern motor R1;
extern motor R2;
extern motor R3;
extern inertial Inertial;
extern controller Controller1;
extern motor Slap;
extern limit LimitSwitch;
extern motor Intake;
extern motor Clocker;
extern digital_out Intake_Lift;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );