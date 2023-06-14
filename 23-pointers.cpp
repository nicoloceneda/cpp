#include <iostream>

using namespace std;                                                               

int main()
{
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";   

    /* Variable values are stored inside the physical memory (RAM) of the computer at a specific 
       memory adress */       

    cout << "age: " << &age << endl;                                                                // Access the memory adress (pointer) of a variable using &
    cout << "gpa: "<< &gpa << endl; 
    cout << "name: "<< &name << endl; 

    int *pAge = &age;                                                                               // Create a pointer variable using *p[NameOfVariable] and the same data type as the variable
    double *pGpa = &gpa;
    string *pName = &name;

    cout << "pAge: " << &pAge << endl;                                                               
    cout << "pGpa: "<< &pGpa << endl; 
    cout << "pName: "<< &pName << endl; 

    /* Dreferencing a pointer means grabbing the value that is inside a memory adress */

    cout << "age: " << *pAge << endl;                                                               // Dreference a pointer using *
    cout << "gpa: "<< *pGpa << endl; 
    cout << "name: "<< *pName << endl;

    return 0;
}