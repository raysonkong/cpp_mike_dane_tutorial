// 2:59:13 Pointers

#include <iostream>

using namespace std;

int main() {

    int age = 19;
    // now create a container(variable) to store the pointer (memory address)
    int *pAge = &age;
    double gpa = 2.7;
    string name = "Mike";

    cout << "Address: " << &age << " pointer: " << pAge << endl;
    cout << "Deference a pointer: " << *pAge << endl;


    return 0;
}