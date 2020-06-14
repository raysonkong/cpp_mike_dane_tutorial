// 59:46
// Getting user input
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Example 1: cin => for int, char
    // string age;  // or int or char
    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "You are " << age << " years old. "<< endl;


    

    // Example 2 : getline()  => string of text
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name << endl;
    return 0;
}