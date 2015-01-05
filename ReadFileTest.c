TFileHandle myfile;
TFileIOResult result;
string filename = "test3.txt";
short fileSize = 100;

void initialize(){
	OpenRead(myfile, result, filename, filesize);
}

void teardown(){
	close(myfile, result);
}

task main(){
	long longResult = 0;
	initialize();
	ReadLong(myfile,result, longResult);
	teardown();
	nxtDisplayCenteredTextLine(4,"value: %d", longResult);
	nxtDisplayCenteredTextLine(5,"result: %d", result);
	while(true){}
}
