#include <iostream>
#include <string>

/* In general, functions must be defined before the main function. To improve readibility, we can
   move them to after the main function.

   To do so, we must do a forward declaration to let C++ know that the functions will be defined, 
   i.e. we write the first line of each function without the braces. 
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

/* Function to return Positive if the number is positive, Zero if it is zero, Negative otherwise:
   - It takes an int as input
   - It returns a string as output 
*/

std::string sign_function(int n){

    std::string sign;

    if(n > 0){

        sign = "Positive";

    } else if(n == 0){

        sign = "Zero";
    
    } else{

        sign = "Negative";
    } 
    return sign;
}

/* Function to return the absolute value of a number:
   - It takes an int as input
   - It returns an int as output 
*/

int absolute_value(int n){

    return abs(n);
}