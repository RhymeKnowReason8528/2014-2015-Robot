#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     touch,          sensorNone)
#pragma config(Sensor, S2,     armInternal,    sensorTouch)
#pragma config(Sensor, S4,     armExternal,    sensorTouch)
#pragma config(Motor,  mtr_S1_C1_1,     belt,          tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     harvester,     tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_1,     rightDrive,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     leftDrive,     tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     arm,           tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorI,        tmotorTetrix, openLoop)
#pragma config(MotorPidSetting,  motorA,  255, 255, 65535, 255, 255,   65535, 65535, 65535)
#pragma config(MotorPidSetting,  motorB,  255, 255, 65535, 255, 255,   65535, 65535, 65535)
#pragma config(MotorPidSetting,  motorC,  255, 255, 65535, 255, 255,   65535, 65535, 65535)
#pragma config(Servo,  srvo_S1_C4_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c" //Include file to "handle" the Bluetooth messages.
#include "library\armControls.c"

void initializeRobot()
{
	return;
}

const int CENTER_GOAL_BELT_SPEED = 80;
const int TALL_GOAL_BELT_SPEED = 25;
const int MIDDLE_GOAL_BELT_SPEED = 20;
const int SHORT_GOAL_BELT_SPEED = 25;

task main()
{
	initializeRobot();
	waitForStart(); // wait for start of tele-op phase
	while (true)
	{
		getJoystickSettings(joystick);
		//drive code (right or left?)
		if(abs(joystick.joy1_y1) < 15)//if joysticks are near center power is 0
		{
			motor[leftDrive] = 0;
		}
		else
		{
			motor[leftDrive] = joystick.joy1_y1*0.25;//otherwise power is half of the joystick value
		}
		//same for other drive wheels (right or left?)
		if(abs(joystick.joy1_y2) < 15)
		{
			motor[rightDrive] = 0;
		}
		else
		{
			motor[rightDrive] = joystick.joy1_y2*0.5;
		}

		//Harvester controls (button 6 is high speed, button 8 is low speed)
		if(joy2Btn(6) == 1)
		{
			motor[harvester] = 100;
		}
		else if(joy2Btn(8) == 1)
		{
			motor[harvester] = 40;
		}
		else
		{
			motor[harvester] = 0;
		}

		//Conveyor belt controls (btn 7 high speed, btn 9 low speed, btn 1 reverse high speed)

		if(joy2Btn(2) == 1)
		{
			motor[belt] = TALL_GOAL_BELT_SPEED;
		}
		else if(joy2Btn(3) == 1)
		{
			motor[belt] = MIDDLE_GOAL_BELT_SPEED;
		}
		else if(joy2Btn(4) == 1)
		{
			motor[belt] = CENTER_GOAL_BELT_SPEED;
		}
		else if(joy2Btn(1) == 1)
		{
			motor[belt] = SHORT_GOAL_BELT_SPEED;
		}
		else
		{
			motor[belt] = 0;
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
	}//end while
}
