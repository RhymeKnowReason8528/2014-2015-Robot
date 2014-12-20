
#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S1,     Controller,     sensorNone)
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


///////////////////////////////////
//															 //
//       foward functions				 //
//															 //
///////////////////////////////////
void forwardFast (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 100;
		motor[rightDrive] = 100;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void forwardMedium (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 75;
		motor[rightDrive] = 75;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void forwardSlow (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 50;
		motor[rightDrive] = 50;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}




///////////////////////////////////
//															 //
//       backward functions			 //
//															 //
///////////////////////////////////
void backwardFast (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = -100;
		motor[rightDrive] = -100;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void backwardMedium (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = -75;
		motor[rightDrive] = -75;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void backwardSlow (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = -50;
		motor[rightDrive] = -50;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}


///////////////////////////////////
//															 //
//   right point turn functions	 //
//															 //
///////////////////////////////////
void fastRightPointTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = -100;
		motor[rightDrive] = 100;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void mediumRightPointTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = -75;
		motor[rightDrive] = 75;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void slowRightPointTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = -50;
		motor[rightDrive] = 50;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}


///////////////////////////////////
//															 //
//   left point turn functions	 //
//															 //
///////////////////////////////////
void fastLeftPointTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 100;
		motor[rightDrive] = -100;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void mediumLeftPointTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 75;
		motor[rightDrive] = -75;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void slowLeftPointTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 50;
		motor[rightDrive] = -50;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}


///////////////////////////////////
//															 //
//   right swing turn functions	 //
//															 //
///////////////////////////////////
void fastRightSwingTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[rightDrive] = 100;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void mediumRightSwingTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[rightDrive] = 75;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void slowRightSwingTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[rightDrive] = 50;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}


///////////////////////////////////
//															 //
//   left swing turn functions	 //
//															 //
///////////////////////////////////
void fastLeftSwingTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 100;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void mediumLeftSwingTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 75;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void slowLeftSwingTurn (int duration)
{
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 50;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}

task main()
{


}
