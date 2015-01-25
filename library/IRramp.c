#pragma SystemFile

#include "C:\Users\Emma\Documents\GitHub\robotcdriversuite\include\hitechnic-irseeker-v2.h"
#include "driveFunctions.c"
#include "library\display.h"

int IRrampScan1 ()
{
	tHTIRS2 IRseeker;
	initSensor(&IRseeker, S3);
	IRseeker.mode = DSP_1200;
	wait1Msec(500);
	readSensor(&IRseeker);
	int read1 = IRseeker.acDirection;//tells the initial zone
	backwardSlow(6511);
	fastLeftPointTurn(2100);
	wait1Msec(500);
	readSensor(&IRseeker);
	int read2 = IRseeker.acDirection;//tells the zone at bottom of ramp
	eraseDisplay();
	displayTextLine(2, "First Reading %d", read1);
	displayTextLine(5, "Second reading %d", read2);
	return 0;
}

int chooseWait ()
{
	int howLong = 0;
	int howLongSec = howLong/1000;
	while(nNxtButtonPressed != ORANGE_BUTTON)
	{
		wait1Msec(100);
		eraseDisplay();
		displayStringAt(LEFT_X, BOTTOM_Y, "Less");
		displayStringAt(RIGHT_X - 10, BOTTOM_Y, "More");
		displayCenteredTextLine(2, "Wait %d", howLongSec);
		switch((int)nNxtButtonPressed){
		case LEFT_BUTTON://if the left button is pressed to raise arm
		while(nNxtButtonPressed == LEFT_BUTTON)
		{
		}
			howLong -= 1000;
			break;
		case RIGHT_BUTTON://if the right button is pressed to lower the arm
		while(nNxtButtonPressed == RIGHT_BUTTON)
		{
		}
			howLong += 1000;
			break;
		}
	}
	eraseDisplay();
	return howLong;
}
