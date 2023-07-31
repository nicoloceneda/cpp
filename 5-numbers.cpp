// Oerations with numbers

#include <iostream>
using namespace std;

int main()
{
    cout << 7+5 << endl;                                                                            // Addition
    cout << 7-5 << endl;                                                                            // Subtraction
    cout << 7*5 << endl;                                                                            // Multiplication
    cout << 10/5 << endl;                                                                           // Division
    cout << 10%3 << endl;                                                                           // Remainder

    int num1 = 5;                                                                                   // Add (subtract, multiply by, divide by) 1 to a number
    num1++;
    cout << num1 << endl;         

    int num2 = 5;                                                                                   // Add (subtract, multiply by, divide by) number to number
    num2 += 2;
    cout << num2 << endl;    

    cout << 10/3 << endl;                                                                           // int op int returns int
    cout << 10.0/3.0 << endl;                                                                       // double op double returns double
    cout << 10.0/3 << endl;                                                                         // double op int returns double

    return 0;
}