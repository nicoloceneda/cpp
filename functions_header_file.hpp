#include <iostream>
#include <string>

/* Function to return the absolute value of the number:
   - It takes an int as input
   - It returns a in as output 
*/

int absolute_value(int n){

    return abs(n);
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