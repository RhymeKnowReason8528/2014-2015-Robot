#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     touch,          sensorNone)
#pragma config(Sensor, S2,     armInternal,    sensorTouch)
#pragma config(Sensor, S3,     seek,           sensorI2CCustom)
#pragma config(Sensor, S4,     armExternal,    sensorTouch)
#pragma config(Motor,  mtr_S1_C1_1,     belt,          tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     harvester,     tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_1,     rightDrive,    tmotorTetrix, PIDControl, reversed)
#pragma config(Motor,  mtr_S1_C2_2,     leftDrive,     tmotorTetrix, PIDControl)
#pragma config(Motor,  mtr_S1_C3_1,     arm,           tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorI,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C4_1,    goalGrabber,          tServoStandard)
#pragma config(Servo,  srvo_S1_C4_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "library\IRramp.c"
task main()
{
	chooseWait();
	wait1Msec(chooseWait());
	IRrampScan1();
	//fastLeftPointTurn(1700);
	//fastLeftPointTurn(2100);
	while(true)
	{

	}
}
