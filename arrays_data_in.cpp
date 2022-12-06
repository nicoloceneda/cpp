#include <iostream>
#include <fstream>
#include <string>

int main(){
    
    std::string line;
    std::ifstream myfile;        
    myfile.open ("list_numbers.txt");                                           
    int number;
    int array_numbers[10];
    int i = 0;

    while(getline(myfile,line)){                                                // We read numbers as string

        number = stoi(line);                                                    // We convert them to int (cannot read in int)
        array_numbers[i] = number;
        std::cout << i << std::endl;
        ++i;
    }                                               
    
    myfile.close();       

    int total = 0;

    for(int j = 0; j < i; ++j){

        total = total + array_numbers[j];
    }
                                               
    std::cout << "Mean is " << (double)total / i << std::endl;                   // Remember: total / i gives an int as both are int, so we need to cast

    return 0; 
}                                                                  