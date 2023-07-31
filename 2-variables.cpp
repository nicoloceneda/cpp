// Declare and initialize variables

#include <iostream>
using namespace std;

int main() {

    string name = "Steve";                                                                          // Declare a variable type and initialize its value
    int age = 35;                                                                                   

    cout << "My name is " << name << " and I am " << age << " old." << endl;

    name = "John";                                                                                  // Reinitialize the value of a variable
    age = 25;
    
    cout << "My name is " << name << " and I am " << age << " old." << endl;

    return 0;
}