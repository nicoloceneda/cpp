#include <iostream>
#include <cmath>

int main(){
    
    int n = 10;
    int square_numbers[10];                                                     // Initialize an array that contains 10 int (note: do not specify size of array using variable)
    int favourite_numbers[10] = {3, 1, -4, 1};                                  // Define only some elements during initialization
    int magic_square[3][3] = {{4,9,2},{3,5,7},{8,1,6}};                         // Define all the elements

    for(int i = 0; i < n; i++){

        square_numbers[i] = pow(i,2);
    }

    for(int i = 0; i < n; i++){

        std::cout << square_numbers[i] << std::endl;
    }

    for(int i = 0; i < n; i++){

        std::cout << favourite_numbers[i] << std::endl;                          // The undefined elemets contain values that were last stored in memory
    }

    std::cout << magic_square[0][1] << std::endl;

    return 0; 
}                                                                  