#ifndef drivefunctions
#define drivefunctions

#pragma SystemFile


///////////////////////////////////
//															 //
//       forward functions			 //
//															 //
///////////////////////////////////
void forwardFast (int duration)
{
	nMotorEncoder[leftDrive] = 0;
	nMotorEncoder[rightDrive] = 0;
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
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
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
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
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
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
	while(nMotorEncoder[leftDrive] > -1* duration)
	{
		motor[leftDrive] = -100;
		motor[rightDrive] = -100;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void backwardMedium (int duration)
{
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
	while(nMotorEncoder[leftDrive] > -1* duration)
	{
		motor[leftDrive] = -75;
		motor[rightDrive] = -75;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void backwardSlow (int duration)
{
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
	while(nMotorEncoder[leftDrive] > -1* duration)
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
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
	while(-nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = -100;
		motor[rightDrive] = 100;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void mediumRightPointTurn (int duration)
{
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
	while(-nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = -75;
		motor[rightDrive] = 75;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void slowRightPointTurn (int duration)
{
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
	while(-nMotorEncoder[leftDrive] < duration)
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
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
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
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
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
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
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
	//nMotorEncoder[rightDrive] = 0;
	//nMotorEncoder[leftDrive] = 0;
	//while(-nMotorEncoder[leftDrive] < duration)
	//{
	//	motor[rightDrive] = 100;
	//}
	//motor[rightDrive] = 0;
	//motor[leftDrive] = 0;
}

//The right swing functions move only the right motor, but measure the left encoder
void mediumRightSwingTurn (int duration)
{
//	nMotorEncoder[rightDrive] = 0;
//	nMotorEncoder[leftDrive] = 0;
//	while(-nMotorEncoder[leftDrive] < duration)
//	{
//		motor[rightDrive] = 75;
//	}
//	motor[rightDrive] = 0;
//	motor[leftDrive] = 0;
}
void slowRightSwingTurn (int duration)
{
//	nMotorEncoder[rightDrive] = 0;
//	nMotorEncoder[leftDrive] = 0;
//	while(nMotorEncoder[leftDrive] < duration)
//	{
//		motor[rightDrive] = 50;
//	}
//	motor[rightDrive] = 0;
//	motor[leftDrive] = 0;
}


///////////////////////////////////
//															 //
//   left swing turn functions	 //
//															 //
///////////////////////////////////
void fastLeftSwingTurn (int duration)
{
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 100;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void mediumLeftSwingTurn (int duration)
{
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 75;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}
void slowLeftSwingTurn (int duration)
{
	nMotorEncoder[rightDrive] = 0;
	nMotorEncoder[leftDrive] = 0;
	while(nMotorEncoder[leftDrive] < duration)
	{
		motor[leftDrive] = 50;
	}
	motor[rightDrive] = 0;
	motor[leftDrive] = 0;
}

#endif
