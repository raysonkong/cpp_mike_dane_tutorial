// 1:29:48
// Return statements
// return terminates the function

#include <iostream>
using namespace std;


double cube(double);

int main() {
    double output = cube(3);
    cout << "3 cubed is: " << output << endl;
    return 0;
    cout <<" Hello " << endl;  // never run
}

double cube(double num) {

    return num * num * num;
}