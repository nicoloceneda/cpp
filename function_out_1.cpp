/* Function to return Positive if the number is positive, Zero if it is zero, Negative otherwise:
   - It takes an int as input
   - It returns a string as output 
*/

#include <iostream>
#include <string>

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