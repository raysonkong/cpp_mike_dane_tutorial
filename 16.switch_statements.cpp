// switch Statements
// 2:02:20

#include <iostream>
using namespace std;

string getDayOfWeek(int);

int main() {
    string result;
    int input;
    cout << "Enter a number between 0 and 6: ";
    cin >> input;

    result = getDayOfWeek(input);

    cout << "Day of the week is: " << result << endl;
    return 0;
}

string getDayOfWeek(int dayNum) {
  string dayName;
  switch(dayNum){
    case 0:
      dayName = "Sunday";
      break;
    case 1: 
      dayName = "Monday";
      break;
    case 2:
      dayName = "Tuesday";
      break;
    default: 
      dayName = "Does not exist";
  }

  return dayName;
}