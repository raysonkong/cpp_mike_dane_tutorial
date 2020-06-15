#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int luckyNums[20] = {4,8,15,16,23,42};

    luckyNums[5] = 999;
    cout << luckyNums[5] << endl;; 
    return 0;
}