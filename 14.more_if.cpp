// 1:35:28
// if statements

// Compare three numbers 1:52:45

// compare numbers
#include <iostream>
using namespace std;

int getMax(int, int, int);


int main() {
    int num1, num2, num3, result;
    cout << "Enter num1: "; 
    cin >> num1;
    cout << endl;

    cout << "Enter num2: " ;
    cin >> num2;
    cout << endl;

    cout << "Enter num3: ";
    cin >> num3;
    cout << endl;

    result = getMax(num1, num2, num3);

    cout << result << " is the largest num " << endl;
    return 0;
}

int getMax(int num1, int num2, int num3) {
    int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3; // same num
    }

    return result;
}