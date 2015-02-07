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
	else if(SensorValue(armInternal) == 1 && time1[T3] > 3000){
		return ARM_EXTENDED;
	}
	else{
		return ARM_MIDDLE;
	}
}

void extendArm(){//ONLY USE IN AUTONOMOUS
		while(getArmPosition() != ARM_EXTENDED)
		{
			motor[arm] = 100;
		}
		motor[arm] = 0;
}
