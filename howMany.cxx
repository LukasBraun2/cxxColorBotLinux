#include <iostream>
#include <cstdlib>
#include <thread>
#include <fstream>
#include <chrono>
#include <unistd.h>

using namespace std;
using namespace std::chrono;
int imgDump(void){
	int i = 0;
	string cmd = "xwd -id 0x06400002 > xwdImgs/imgDat";
	string fileNum = "";
	string endFileName = ".xwd";
	string fullCmd = "";
	while(i < 180){
		usleep(75);
//                i++;
//                cout << i << endl;
                //get dump of screen then convert to>
		fileNum = to_string(i);
		fullCmd = cmd + fileNum + endFileName;
		cout << fullCmd << endl;
                system(fullCmd.c_str());
//              system("convert imgDat.xwd imgDat.pp>
//              system("xwd -root > img2.xwd");
//              system("xwdtopnm img2.xwd > img2.ppm>
                //convert ppm to raw rgb data
//              system("ppmhist imgDat.ppm"
		i++;
        }
return 0;
}
/*
int imgConvert(void){
//	this_thread::sleep_for(chrono::milliseconds(1));
	int i = 0;
	int b = 0;
	//for file.open
	string fileName = "xwdImgs/imgDat";
	string fileNum = "";
	string fileType = ".xwd";
	string fullFileName = "";
	//break up convert command into two parts
	string strtCmd0 = "convert xwdImgs/imgDat";
	string imgNum0;
	string imgType0 = ".xwd";
	string strtCmd1 = " xwdImgs/imgDat";
	string imgNum1;
	string cmdFileType = ".bmp";
	string fullCmd;
	ifstream file;
	string fileName1 = "xwdImgs/imgDat";
	string fileNum1;
	string fileType1 = ".bmp";
	string fullFileName1;
	ifstream file1;
	i = 0;
		while(i < 300){
			usleep(1000);
//			fileNum1 = to_string(i);
//			fullFileName1 = fileName1 + fileNum1 + fileType;
			fileNum = to_string(i);
			fullFileName = fileName + fileNum + fileType;
//			cout << fullFileName << endl;
/*			file1.open(fullFileName1.c_str());
		        if(file1){
        		        i+=2;
		                if(file1.is_open()){
	                	      file1.close();
                		}
		        } else {*//*
				file.open(fullFileName.c_str());
//			}
			if(file){
				imgNum0 = to_string(i);
				imgNum1 = to_string(i);
				fullCmd = strtCmd0 + imgNum0 + imgType0 + strtCmd1 + imgNum1 + cmdFileType;
				cout << fullCmd << endl;	
				system(fullCmd.c_str());
				i+=3;
			}
			if(file.is_open()){
				file.close();
			}
			cout << i << endl;
		}
return 0;
}
int imgConvert2(void){
//      this_thread::sleep_for(chrono::milliseconds(1));
        int i = 0;
        int b = 0;//for file.open
        string fileName = "xwdImgs/imgDat";
        string fileNum = "";
        string fileType = ".xwd";
        string fullFileName = "";
        //break up convert command into two parts
        string strtCmd0 = "convert xwdImgs/imgDat";
        string imgNum0;
        string imgType0 = ".xwd";
        string strtCmd1 = " xwdImgs/imgDat";
        string imgNum1;
        string cmdFileType = ".bmp";
        string fullCmd;
        ifstream file;
        string fileName1 = "xwdImgs/imgDat";
        string fileNum1;
	string fileType1 = ".bmp";
        string fullFileName1;
        ifstream file1;
        i = 1;
                while(i < 298){
			usleep(1000);
                        fileNum1 = to_string(i);
                        fullFileName1 = fileName1 + fileNum1 + fileType;
                        fileNum = to_string(i);
                        fullFileName = fileName + fileNum + fileType;
//                        cout << fullFileName << endl;
//                        file1.open(fullFileName1.c_str());
//                        if(file1){
//                                i--;
//                                if(file1.is_open()){
//        	                              file1.close();
//				}
//                                } else {
                                file.open(fullFileName.c_str());
//                        }
                        if(file){
                                imgNum0 = to_string(i);
                                imgNum1 = to_string(i);
                                fullCmd = strtCmd0 + imgNum0 + imgType0 + strtCmd1 + imgNum1 + cmdFileType;
                                cout << fullCmd << endl;
                                system(fullCmd.c_str());
                                i+=3;
                        }
                        if(file.is_open()){
                                file.close();
                        }
                        cout << i << endl;
                }
return 0;
}

int imgConvert3(void){
//      this_thread::sleep_for(chrono::milliseconds(1));
        int i = 0;
        int b = 0;//for file.open
        string fileName = "xwdImgs/imgDat";
        string fileNum = "";
        string fileType = ".xwd";
	string fullFileName = "";
//break up convert command into two parts
        string strtCmd0 = "convert xwdImgs/imgDat";
        string imgNum0;
        string imgType0 = ".xwd";
        string strtCmd1 = " xwdImgs/imgDat";
        string imgNum1;
        string cmdFileType = ".bmp";
        string fullCmd;
        ifstream file;
        string fileName1 = "xwdImgs/imgDat";
        string fileNum1;
        string fileType1 = ".bmp";
        string fullFileName1;
        ifstream file1;
        i = 2;
                while(i < 299){
			usleep(1000);
			fileNum1 = to_string(i);
                        fullFileName1 = fileName1 + fileNum1 + fileType;
                        fileNum = to_string(i);
                        fullFileName = fileName + fileNum + fileType;
//                        cout << fullFileName << endl;
//                        file1.open(fullFileName1.c_str());
//                        if(file1){
//                                i--;
//                                if(file1.is_open()){
//                                            file1.close();
//                              }
//                                } else {
                                file.open(fullFileName.c_str());
//                        }
                        if(file){
                                imgNum0 = to_string(i);
				imgNum1 = to_string(i);
                                fullCmd = strtCmd0 + imgNum0 + imgType0 + strtCmd1 + imgNum1 + cmdFileType;
                                cout << fullCmd << endl;
                                system(fullCmd.c_str());
                                i+=3;
                        }
                        if(file.is_open()){
                                file.close();
                        }
                        cout << i << endl;
                }
return 0;
}
*/
int imgConvertPL0(void){
//	#pragma acc parallel loop
//	for(int i = 0; i < 15; i++){
//		system("parallel perl parse1.pl image5.xwd");		
	system("seq 180 | parallel perl \"parse1.pl massParallel/image{1}.xwd\"");
//		usleep(75);
//	}
return 0;
}

int imgConvertPL1 (void){
//	#pragma acc parallel loop
        for(int i = 15; i < 30; i++){
                system("parallel perl parse2.pl image6.xwd");
		usleep(75);
        }
return 0;
}
/*
int imgConvertPL2(void){
        for(int i = 20; i < 30; i++){
                system("perl parse3.pl image7.xwd");
        }
return 0;
}

imgConvertPL3{
        for(int i = 12; i < 16; i++){
                system("parse4.pl image8.xwd");
        }
}

imgConvertPL4{
        for(int i = 16; i < 20; i++){
                system("parse5.pl image9.xwd");
        }
}

imgConvertPL5{
        for(int i = 20; i < 24; i++){
                system("parse6.pl image10.xwd");
        }
}

imgConvertPL6{
        for(int i = 24; i < 30; i++){
                system("parse7.pl image11.xwd");
        }
}*/
int main(int argc, char *argv[]){
	auto start = high_resolution_clock::now();
	thread t0(imgDump);
//	auto start = high_resolution_clock::now();
//	thread t1(imgConvert);	
//	thread t2(imgConvert2);
//	thread t3(imgConvert3);
//	thread t4(imgConvert);
//	thread t5(imgConvert);

//	system("seq 300 | parallel perl \"massParallel/parse{1}.pl massParallel/image{1}.xwd\"");
	thread t1(imgConvertPL0);
//	thread t2(imgConvertPL1);
//	thread t3(imgConvertPL2);
//	thread t4(imgConvertPL3);
//	thread t5(imgConvertPL4);
//	thread t6(imgConvertPL5);
//	thread t7(imgConvertPL6);

	t0.join();
//	auto stop = high_resolution_clock::now();
	t1.join();
//	t2.join();
//	t3.join();
//	t4.join();
//	t5.join();
//	t6.join();
//	t7.join();

//	t4.join();
//	t5.join();

	auto stop = high_resolution_clock::now();
	/*auto start = high_resolution_clock::now();
	system("convert xwdImgs/imgDat1.xwd -format '%[pixel:p{0,0}]' info:");
	auto stop = high_resolution_clock::now(); */
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() << endl;
return 0;
}
