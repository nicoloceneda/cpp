#include <iostream>

using namespace std;

int main()                                                                                          
{

    int age;
    cout << "Enter your age: " << endl;
    cin >> age;                                                                                     // cin (oppositve of cout)                                                                                
    cout << "You are " << age << " years old" << endl;

    cin.ignore();                                                                                  

    char letter;
    cout << "Enter your favorite letter: " << endl;
    cin >> letter;                                                                                                                                                 
    cout << "Your favorite letter is " << letter << endl;

    cin.ignore(); 

    string name;
    cout << "Enter your full name: " << endl;
    getline(cin, name);                                                                             // getline for strings                                                                                                        
    cout << "Your full name is " << name << endl;

    return 0;
}

// When you input a character or integer with cin >>, it reads the input until it hits a whitespace 
// or newline ('\n') character, but it doesn't consume that character. So, the newline character is 
// still in the buffer. When getline(cin, name) executes, it reads until it hits a newline character, 
// which is the first thing it encounters in the buffer, so it reads in an empty string. To fix this, 
// you can use cin.ignore(), which will ignore or discard characters in the input buffer. 