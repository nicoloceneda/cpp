#include <iostream>

using namespace std;

int main()
{
    cout << 7+5 << endl;                                                                            // Addition
    cout << 7-5 << endl;                                                                            // Subtraction
    cout << 7*5 << endl;                                                                            // Multiplication
    cout << 10/5 << endl;                                                                           // Division
    cout << 10%3 << endl;                                                                           // Remainder

    int nump = 5;                                                                                   // Add (subtract, multiply, divide) 1 to a number
    nump++;
    cout << nump << endl;         

    int numpv = 5;                                                                                  // Add (subtract, multiply, divide) number to number
    numpv += 2;
    cout << numpv << endl;    

    cout << 10/3 << endl;                                                                           // int op int returns int
    cout << 10.0/3.0 << endl;                                                                       // double op double returns double
    cout << 10.0/3 << endl;                                                                         // double op int returns double

    return 0;
}