#include <iostream>
#include <string>

/* In general, functions must be defined before the main function. To improve readibility, we can
   move them to another script.

   To do so, we must do a forward declaration to let C++ know that the functions will be defined, 
   i.e. we write the first line of each function without the braces. 

    Then, we must compile the script with main and the one with the function simultaneously. For 
    example: % c++ function_out_1.cpp function_out_2.cpp functions_out.cpp -o functions

    Notice that when compiling, the order does not matter because we did a forward declaration.
*/

std::string sign_function(int n);
int absolute_value(int n);

/* Call the functions in main */

int main(){

    int n;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    std::cout << "The number is " << sign_function(n) << std::endl; 
    std::cout << "The absolute value is " << absolute_value(n) << std::endl; 

    return 0; 
}                                                                  


