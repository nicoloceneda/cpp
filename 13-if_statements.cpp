#include <iostream>

using namespace std;

int main()                                                                                          
{
    bool isTall = true; 
    bool isMale = true;    

    if (isTall && isMale) {

        cout << "You are a tall male" << endl;  
    
    } else if (!isTall && isMale) {

        cout << "You are short male" << endl;
    
    } else if (isTall && !isMale) {

        cout << "You are tall but not male" << endl;
    
    } else {

        cout << "You are neither tall nor male" << endl;        
    }     

    return 0;
}