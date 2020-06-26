//2:29:17  For Loops

#include <iostream>

using namespace std;

int main() {

  // for (int i = 1; i <=5; i++) {
  //   cout << i << endl;
  // }

  int nums[] = { 1,2,5,7,3 };
  int arrSize = sizeof(nums)/sizeof(nums[0]);

  for (int i = 0; i < arrSize; i++){
    cout << nums[i] << endl;
  }
}

