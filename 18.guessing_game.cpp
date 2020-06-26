// Guessing Game
// 2:18:56


#include <iostream>
using namespace std;

int main() {
    int secretNum = 50;
    int guess;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (guess != secretNum && guessLimit > 0) {
        cout << "Guess left: " << guessLimit << endl;
        cout << "Guess a number: ";
        cin >> guess;
        guessLimit -= 1;
    } 
    
    if (guessLimit >= 0 && guess == secretNum) {
      cout << "You won! " << endl;
    } else {
        cout << "You Lost! " << endl;
    }

    return 0;
}