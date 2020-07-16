// Object functions (instance function/method )

#include <iostream>
using namespace std;

class Student {
  public: 
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa) {
      name = aName;
      major = aMajor;
      gpa = aGpa;
    }
    bool hasHonors() {
      if (gpa >= 3.5) {
        return true;   // print 1
      }

      return false; // print zero
    }
};


int main() {
  Student student1("Jim", "Business", 2.4);
  Student student2("Pam", "Art", 3.6);

  cout << student1.name << " has honor? " << student1.hasHonors() << endl;

  return 0;
}