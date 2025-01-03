#include <iostream>
#include <fstream>
#include <vector>
int maxArray[4096*768];
int main() {
    std::ifstream file("imageRGB.xwd", std::ios::binary);

    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    //52 bits = 7 bytes
    char buffer[7];
//    file.read(buffer, 7);

    if (!file) {
        std::cerr << "Error reading file!" << std::endl;
        return 1;
    }

    // Print the 52 bits as a readable int
    int result = 0;
    for (int i = 0; i < 7; ++i) {
        //result <<= 8;
        result |= (unsigned char)buffer[i];
    }
    for(int i = 0; i < 4096*768; i++){
	maxArray[i] = 0;
    }
//    std::cout << "header size in bits: " << result << std::endl;

    //read (const header size) bytes
    int numBytesToRead = 4096;
    char buffer2[numBytesToRead];
//    int buffer3[maxArray];
//    std::vector<char> data;
    int result2 = 0;
    std::vector<int> vecArray;
    int intArray[4096];
    for(int i = 0; i < 4096; i++){
	intArray[i] = 0;
    }
    
    std::ofstream outfile("output.txt");
//    for(int i = 0; i < 4096; i++){
//	buffer2[i] = 0;
//    }
/*    for(int i = 0; i < 24; i++){
//        for(int b = 0; b < 100; b++){
            result2[i] = 0;
//        }
    }*/
    file.seekg(107, std::ios::beg);
//    file.read(buffer2, 4096);
//    std::cout << buffer2 << '\n';
//    int result3[4096];
    int c = 0;
    for(int i = 0; i < 767; i++){
        file.read(buffer2, 4096);
	for(int b = 0; b < 4096; b++){
            maxArray[c] = static_cast<int>(buffer2[b]);
	    //vecArray.push_back(intArray[b]);
	    c++;
        }
/*	for (char c : buffer2) {
         //   intArray.push_back(static_cast<int>(c));
	}*/
    }
    for(int i = 0; i < 4096*767; i++){
        //outfile.write(reinterpret_cast<char *>(&val), s>
        if(maxArray[i] == 999){
            //do something
        }
        outfile << maxArray[i] << '\n';
//      std::cout << val << '\n';
    }
//	outfile << buffer3 <<'\n';
//        data.push_back(buffer2);
//        for(int b = 0; b < 24; b++){
//	    result2 <<= 8;
//            result2 |= (unsigned char)buffer2[i];
//	    std::cout << static_cast<int>(buffer2[i]) << '\n';
    //       std::cout << result2[i] << '\n';
	    
//	}
/*    for(auto val : vecArray){
            //outfile.write(reinterpret_cast<char *>(&val), s>
	    if(val == 999){
	    	//do something
	    }
            outfile << val << '\n';
//          std::cout << val << '\n';
    }*/
/*    for(int i = 0; i < 4096; i++){
            buffer3[i] = buffer2[i];
    }*/
    for(int i = 0; i < 0; i++){
//	std::cout << buffer3 << '\n';
/*        if(i%4 == 0){
            if(static_cast<int>(buffer2[i-3])){
               if(static_cast<int>(buffer2[i-2])){
	           if(static_cast<int>(buffer2[i-1])){
 	               //rgb compared
		       std::cout << "found\n";
		   }
	       }
	    }
        }*/
    }
//    std::cout << result2 << '\n';
            file.close();
    return 0;
}
