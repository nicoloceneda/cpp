// Working with strings

#include <iostream>
using namespace std;

int main() {
    
    string phrase = "My number is 0123456789";
    cout << "String: " << phrase << endl;

    phrase[13] = 'A';                                                                               // Replace a character
    cout << "Modified string: " << phrase << endl;

    cout << "Length of the string: " << phrase.length() << endl;                                    // Length of string

    string phrasesub = phrase.substr(3, 6);                                                         // Slice a string
    cout << "Sliced string: " << phrasesub << endl;                                                 // - First argument is strting index
                                                                                                    // - Second argument is length

    string word = "number";                                                                         // Check for character/string:
    cout << "Index where " << word << " apprears: " << phrase.find(word, 0) << endl;                // - Second argument is index were it start looking                
                                                                                                    // - Output is index were character/string appears

    return 0;
}