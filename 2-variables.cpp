#include <iostream>

using namespace std;

int main()
{
    string name = "Steve";                                                                          // Create a string variable and assign value
    int age = 35;                                                                                   // Create an integer variable and assign value

    cout << "My name is " << name << " and I am " << age << " old." << endl;

    name = "John";                                                                                 // Reassign value to variable
    age = 25;
    
    cout << "My name is " << name << " and I am " << age << " old." << endl;

    return 0;
}