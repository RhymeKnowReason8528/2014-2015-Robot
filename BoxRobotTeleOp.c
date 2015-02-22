#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTServo,  none)
#pragma config(Sensor, S1,     touch,          sensorI2CMuxController)
#pragma config(Sensor, S2,     armInternal,    sensorTouch)
#pragma config(Sensor, S4,     armExternal,    sensorTouch)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  mtr_S1_C1_1,     arm,           tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     harvester,     tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_1,     rightDrive,    tmotorTetrix, PIDControl, reversed)
#pragma config(Motor,  mtr_S1_C2_2,     leftDrive,     tmotorTetrix, PIDControl)
#pragma config(Servo,  srvo_S1_C3_1,    flipperServo,         tServoStandard)
#pragma config(Servo,  srvo_S1_C3_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_4,    lidServo,             tServoStandard)
#pragma config(Servo,  srvo_S1_C3_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_6,    goalServo,            tServoStandard)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//harvester is the back of the robot.

#include "JoystickDriver.c" //Include file to "handle" the Bluetooth messages.
#include "library\armControls.c"

void initializeRobot()
{
	servo[lidServo] = 180;//inits box lid to 'closed' position
	servo[flipperServo] = 10;
	return;
}

task main()
{
	initializeRobot();
	waitForStart(); // wait for start of tele-op phase
	while (true)
	{
		getJoystickSettings(joystick);
		//drive code (right or left?)
		if(joystick.joy1_y2 > -15 && joystick.joy1_y2 < 15)//if joysticks are near center power is 0
		{
			motor[leftDrive] = 0;
		}
		else if(joy1Btn(1) == 1){//extra control to go straight forward
			motor[leftDrive] = 50;
		}
		else
		{
			motor[leftDrive] = joystick.joy1_y2*04;//otherwise power is half of the joystick value
		}
		//same for other drive wheels (right or left?)
		if(joystick.joy1_y1 > -15 && joystick.joy1_y1 < 15)
		{
			motor[rightDrive] = 0;
		}
		else if(joy1Btn(1) == 1){//extra control to go straight forward
			motor[rightDrive] = 70;
		}
		else
		{
			motor[rightDrive] = joystick.joy1_y1*0.65;
		}


		//lid controls
		if(joy2Btn(5) == 1){//servo is almost all the way down to help with positioning (prev. 32)
			servo[lidServo] = 223;
		}
		else if(joy2Btn(7) == 1){//
			servo[lidServo] = 200;
		}
		else if(joy2Btn(6) == 1){//lid is shut
			servo[lidServo] = 180;
		}

		//flipper servo controls
		if(joy2Btn(1) == 1){
			servo[flipperServo] = 255;//flips the box over to score in the center goal.
		}
		else if(joy2Btn(3) == 1){
			servo[flipperServo] = 0;//moves the box so it is on the flat of the gear, so it can be folded into the arm.
		}
		else if(joy2Btn(2) == 1){
			servo[flipperServo] = 100;//moves the box in position to score in the highest rolling goal.

		}

		//Harvester controls (button 6 is high speed, button 8 is low speed)
		if(joy1Btn(6) == 1)//harvester only runs when arm is down
		{
			motor[harvester] = 40;
		}
		else if(joy1Btn(8) == 1)//reverses harvester
		{
			motor[harvester] = -40;
		}
		else
		{
			motor[harvester] = 0;
		}

		//arm controls (btn 10 up, btn 9 down)

		if(joy2Btn(10) == 1 && getArmPosition() != ARM_EXTENDED)//when the arm isn't up it can go up
		{
			motor[arm] = 100;
		}
		else if(joy2Btn(9) == 1 && getArmPosition() != ARM_FOLDED)//when arm isn't down it can go down
		{
			motor[arm] = -80;
		}
		else
		{
			motor[arm] = 0;
		}

		//goal grabber controls
		if(joy1Btn(7) == 1){
			servo[goalServo] = 100;
		}
		else if(joy1Btn(5) == 1){
			servo[goalServo] = 64;
		}
		//else{

		//}
	}//end while
}
