#include <iostream>
#include <fstream>
#include <string>

int main(){
    
    std::string line;
    std::ifstream myfile;        
    myfile.open ("write_square.txt");                                           // C++ overwrites the file every time

    while(getline(myfile,line)){                                                // Read line by line the file and input it in line

        std::cout << line << std::endl;
    }                                               
    
    myfile.close();

    return 0; 
}                                                                  