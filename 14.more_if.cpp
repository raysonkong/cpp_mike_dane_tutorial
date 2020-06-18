// 1:35:28
// if statements

// Compare three numbers 1:52:45

// compare numbers
#include <iostream>
using namespace std;

int getMax(int, int);


int main() {
    int num1, num2, result;
    cout << "Enter num1: "; 
    cin >> num1;
    cout << endl;

    cout << "Enter num2: " ;
    cin >> num2;
    cout << endl;

    result = getMax(num1, num2);

    cout << result << " is the larger num " << endl;
    return 0;
}

int getMax(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else if (num2 > num1) {
        result = num2;
    } else {
        result = num1; // same num
    }

    return result;
}