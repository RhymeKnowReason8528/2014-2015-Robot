#pragma SystemFile

#include "C:\Users\Emma\Documents\GitHub\robotcdriversuite\include\hitechnic-irseeker-v2.h"
#include "driveFunctions.c"
#include "display.h"
#include "armControls.c"

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
	return read1 + read2;
}

int chooseWait ()
{
	//int howLong = 0;
	//int howLongSec = howLong/1000;
	int howLongSec = 0;
	disableDiagnosticsDisplay();
	eraseDisplay();
	displayStringAt(LEFT_X, BOTTOM_Y, "Less");
	displayStringAt(RIGHT_X - 10, BOTTOM_Y, "More");
	while(nNxtButtonPressed == ORANGE_BUTTON){}
	while(nNxtButtonPressed != ORANGE_BUTTON)
	{
		wait1Msec(50);
		eraseDisplay();
		displayCenteredTextLine(2, "Wait %d", howLongSec);
		switch((int)nNxtButtonPressed){
		case LEFT_BUTTON://if the left button is pressed to raise arm
			while(nNxtButtonPressed == LEFT_BUTTON){}
			if(howLongSec > 0){
				howLongSec -= 1;
			}
			break;
		case RIGHT_BUTTON://if the right button is pressed to lower the arm
			while(nNxtButtonPressed == RIGHT_BUTTON){}
			howLongSec += 1;
			break;
		}
	}
	eraseDisplay();
	bDisplayDiagnostics = true;
	return howLongSec;
}
