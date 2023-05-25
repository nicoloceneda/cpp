#include <iostream>

using namespace std;

void sayHello(string name, int age);                                                                // Instead of putting the function before the main function, we can create 
                                                                                                    // a function stub, i.e. we write a function signature in the same way as 
                                                                                                    // we can declare a variable and then assign the value: int num; num=5; 
int main()
{
    sayHello("Nicolo", 60);

    return 0;
}

void sayHello(string name, int age)                                                                 // Return type void for functions that do not return anything
{
    cout << "Hello " << name << " you are " << age << " years old" << endl;
} 