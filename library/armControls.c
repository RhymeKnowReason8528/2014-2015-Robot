#pragma systemfile

const int ARM_FOLDED = -1;
const int ARM_MIDDLE = 0;
const int ARM_EXTENDED = 1;

int getArmPosition(){
	if(armInternal == 1){
		if(armExternal == 1){
			return ARM_FOLDED;
		}
		else{
			return ARM_EXTENDED;
		}
	}
	else{
		return ARM_MIDDLE;
	}
}

void extendArm(){//ONLY USE IN AUTONOMOUS
	motor[arm] = 100;//starts raising
	while(sensorValue(armInternal) == 0)//waits in loop until arm is extended
	{}
	motor[arm] = 0;
}
