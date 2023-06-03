#include <iostream>

using namespace std;

double cube(double num);                                                                

int main()
{
    double answer = cube(2.0);
    cout << answer << endl;    

    return 0;
}

double cube(double num)                                                                
{
    double result = num * num * num;
    return result;
} 