/* A pointer is a variable whose value is the addess of another variable: p = &x
   Equivalently, the value at p is x: *p = x 
*/

#include <iostream>

int main(){
    
    int x = 5;
    int *p;
    p = &x;

    std::cout << "Value of x is " << x << std::endl;
    std::cout << "Address of x is " << &x << std::endl;                     // Address of x in memory
    std::cout << "Addressed stored in p is " << p << std::endl;
    std::cout << "Value of *p variable is " << *p << std::endl;
    
    return 0; 
}                                                                  