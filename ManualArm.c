#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
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

#include "library\display.h"
#include "library\armControls.c"
task main()
{
	displayStringAt(LEFT_X, BOTTOM_Y, "Up");//displays the user promps
	displayStringAt(RIGHT_X, BOTTOM_Y, "Down");

	while(true){
		switch((int)nNxtButtonPressed){
		case LEFT_BUTTON://if the left button is pressed to raise arm
				if(getArmPosition() == ARM_EXTENDED){//it checks if the arm is already all the way up
					motor[arm] = 0;//stops arm if it is up to prevent it from burning out motor
				}
				else{
					motor[arm] = 100;//if the arm in not in up position it allows the arm to move (in this case up)
				}
			break;
		case RIGHT_BUTTON://if the right button is pressed to lower the arm
			if(getArmPosition() == ARM_FOLDED){//checks if the arm is already all the way down
					motor[arm] = 0;//stops the arm if it is down to prevent it from burning out motor
				}
				else{
					motor[arm] = -90;//if the arm is not down it allows the arm go down
				}
			break;
		case NO_BUTTON://when nothing is pressed it stops
				motor[arm] = 0;
			break;
		}//end switch
	}//end while
}
