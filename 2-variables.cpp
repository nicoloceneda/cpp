// Declare and initialize variables

#include <iostream>
using namespace std;

int main() {

    string name = "Steve";                                                                          // Declare a variable type and initialize its value
    int age = 35;                                                                                   

    cout << "My name is " << name << " and I am " << age << " years old." << endl;

    name = "John";                                                                                  // Reinitialize the value of a variable
    age = 25;
    
    cout << "My name is " << name << " and I am " << age << " years old." << endl;

    string first = "Michelle", last = "Gerry";                                                      // Declare and initialize multiple variables
    cout << "My first name is " << first << " and my last name is " << last << endl;     

    return 0;
}