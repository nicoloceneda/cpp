#include <iostream>

int main(){
    
    int n;
    int f;

    std::cout << "Input a number" << std::endl;
    std::cin >> n;

    while(n != 1){

        if(n % 2 == 0){

            f = n / 2;
        }             

        else{

            f = 3 * n + 1;
        }             
        n = f;
        std::cout << n << std::endl;
    }              

    return 0;
}