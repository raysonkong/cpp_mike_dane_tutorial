#include <iostream>
#include <cmath>
using namespace std;

double calculate(double, double, char);

int main() {
    char op;

    double result, num1, num2;

    cout << "Welcome to calculator! " << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << endl;

    cout << "Enter the second number: ";
    cin >> num2;
    cout << endl;

    cout << "Enter the operation: ";
    cin >> op;
    cout << endl;

    result = calculate(num1, num2, op);

    if (op == '+' || op == '-' || op == '*' || op == '/') {
    } else {
        cout << "Wrong operator! " << endl;
        return 0;
    }

    cout << "Result is: " << result << endl;
    return 0;
}

double calculate(double num1, double num2, char op) {
    double result;
    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    }

    return result;
}