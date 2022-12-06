#include <iostream>
#include <cmath>                                                             

int main(){
    
    int i = 3;
    int n = 10;

    while(i < n){

        std::cout << pow(i,3) << std::endl;   
        i = i + 2;                              
    }                                      

    return 0; 
}                                                                  