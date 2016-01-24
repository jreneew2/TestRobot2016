#include "IntakePneumaticsControl.h"

IntakePneumaticsControl::IntakePneumaticsControl(bool inputDir)
{
	Requires(Robot::intakeSubsystem.get());
	direction = inputDir;
}

// Called just before this Command runs the first time
void IntakePneumaticsControl::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void IntakePneumaticsControl::Execute()
{
	if(direction == true) {
		Robot::intakeSubsystem->SolenoidForward();
	}
	if(direction == false) {
		Robot::intakeSubsystem->SolenoidBackwards();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool IntakePneumaticsControl::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void IntakePneumaticsControl::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakePneumaticsControl::Interrupted()
{

}
