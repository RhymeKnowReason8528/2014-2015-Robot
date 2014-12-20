


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
