#pragma SystemFile

#include "C:\Users\Emma\Documents\GitHub\robotcdriversuite\include\hitechnic-irseeker-v2.h"
#include "driveFunctions.c"

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
