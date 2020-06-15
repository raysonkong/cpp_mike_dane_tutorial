// 1:20:03
// Functions

#include <iostream>

using namespace std;

void sayHi(string, int);

int main() {
    cout << "Top" << endl;
    sayHi("Rayson", 33);
    cout << "Bottom" << endl;
    return 0;
} 

void sayHi(string name, int age) {
  
  cout << "Hello " << name << endl;
  cout << "You are " << age << " years old" << endl;
}