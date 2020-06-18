// 1:35:28
// if statements

#include <iostream>
using namespace std;

int main() {
    bool isMale = true;
    bool isTall = true;


    if (isMale && isTall) {   // try or ||
        cout << "You are a man and you are tall. " << endl;;
    } else if (isMale && !isTall) {
        cout << "you are a short male " << endl;
    } else if (!isMale && isTall) {
        cout << "You are a tall woman." << endl;
    } else {
        cout << "You are a short Femaile" << endl;
    }


    return 0;
}