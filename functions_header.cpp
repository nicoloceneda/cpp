/* If there are a lot of functions to include in the forward declaration, it is better to put 
   them in a header file (with extension .hpp where h stands for header) and then include the 
   header file (using double quotes). 
*/

#include <iostream>
#include <string>
#include "functions_header_file.hpp" 

/* Call the functions in main */

int main(){

    int n;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    std::cout << "The number is " << sign_function(n) << std::endl; 
    std::cout << "The absolute value is " << absolute_value(n) << std::endl; 

    return 0; 
}                                                                  