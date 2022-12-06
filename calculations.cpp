#include <iostream>
#include <cmath>

int main(){
    
    int x;
    int y;

    std::cout << "Enter a number" << std::endl;
    std::cin >> x;

    std::cout << "If x = " << x << " then:" << std::endl;
    std::cout << " x^2 = " << pow(x,2) << std::endl;
    std::cout << " sqrt(x) = " << sqrt(x) << std::endl;
    std::cout << " sin(x) = " << sin(x) << std::endl;

    std::cout << "Enter another number" << std::endl;
    std::cin >> y;

    std::cout << "If y = " << y << " then:" << std::endl;
    std::cout << " x/y = " << (double)x / y << std::endl;                       // Cast x to double             

    return 0;
}