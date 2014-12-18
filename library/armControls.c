#pragma systemfile

const int ARM_FOLDED = -1;
const int ARM_MIDDLE = 0;
const int ARM_EXTENDED = 1;

int getArmPosition(){
	if(SensorValue(armExternal) < 500){
		return ARM_FOLDED;
	}
	else if(SensorValue(armInternal) < 500){
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
