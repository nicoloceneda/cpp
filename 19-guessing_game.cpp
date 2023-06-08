#include <iostream>

using namespace std;

int main()                                                                                          
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (guess != secretNum && outOfGuesses == false) {

        if (guessCount < guessLimit) {

            cout << "Guess the number" << endl;
            cin >> guess; 
            guessCount++;

        } else {

            outOfGuesses = true;
        }
    }
    if (outOfGuesses) {

        cout << "You loose" << endl;

    } else {

        cout << "You guessed right" << endl;   
    }                     
    return 0;
}