#include <iostream>
#include <fstream>
#include <cmath>

int main(){
    
    std::ofstream myfile;                                                       // Declare output file stream
    myfile.open ("write_square.txt", std::ios_base::app);                       // C++ overwrites the file every time, the block after the comma allows to append

    for(int i = 0; i < 10; i++){

        myfile << pow(i,2) << std::endl;
    }

    myfile.close();

    return 0; 
}                                                                  