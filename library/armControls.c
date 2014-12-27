#pragma systemfile
//constants returned when it finds arm position
const int ARM_FOLDED = -1;
const int ARM_MIDDLE = 0;
const int ARM_EXTENDED = 1;

int getArmPosition(){//finds position of arm
	if(SensorValue(armExternal) == 1){	//checks if arm is pressing external touch sensor
		clearTimer(T3);
		return ARM_FOLDED;
	}
	else if(SensorValue(armInternal) == 1 && time1[T3] > 1000){
		return ARM_EXTENDED;
	}
	else{
		return ARM_MIDDLE;
	}
}

void extendArm(){//ONLY USE IN AUTONOMOUS
	motor[arm] = 100;//starts raising
	while(SensorValue(armInternal) < 500)//waits in loop until arm is extended
	{}
	motor[arm] = 0;
}
