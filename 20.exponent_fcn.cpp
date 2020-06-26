// 2:39:32 Exponent function

#include <iostream>

using namespace std;

int power(int baseNum, int powNum) {
    int result = 1;
    for (int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }
    return result;
}

int main(){

    int result = power(3,3);
    cout << result << endl;
    
    return 0;
}