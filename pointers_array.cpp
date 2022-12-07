#include <iostream>

int main(){
    
    int primes[3] = {2, 3, 5};
    int *p;
    p = primes;                                                             // Set the pointer to point at the start of the arrray

    for(int i = 0; i < 3; i++){

        std::cout << "Address of primes [" << i << "] is " << p << std::endl; 
        std::cout << "Value of primes [" << i << "] is " << *p << std::endl; 
        ++p;
    }
    
    return 0; 
}                                                                  