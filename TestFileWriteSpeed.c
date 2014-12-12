
TFileHandle myfile;
TFileIOResult result;
string filename = "test3.txt";
short fileSize = 100;

void initialize(){
	OpenWrite(myfile, result, filename, filesize);
}

void teardown(){
	Close(myfile, result);
}

task main(){
	initialize();
	clearTimer(timer1);
	WriteLong(myfile, result, 8528);
	nxtDisplayCenteredTextLine(2,"ms: %d",time1[timer1]);
	teardown();
	while(true){}

}

