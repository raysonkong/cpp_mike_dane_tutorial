// 39.18
// working with Strings

#include <iostream>

using namespace std;

int main() {
    string phrase = "Giraffe Academy";

    // endl and \n to print new line
    cout << phrase << endl; // endl prints a new line
    cout << "Print a new line after this line \n";


    // string functions

    // .length
    cout << phrase.length() << endl;


    // Access a particular char in a string
    cout << phrase[2] << endl;

    // Assign new value to a particular char in a string

    phrase[0] = 'R';

    cout << phrase << endl;

    
    // 44:52
    return 0;
}