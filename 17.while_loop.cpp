// 2:10:49
// while Loop
// do while (will run at least once)

#include <iostream>
using namespace std;

int main() {
    
    int index = 1;
    
    // while(index < 10) {
    //     cout << index << endl;
    //     index++;
    // }

    do {
        cout << index << endl;
        index++;
    }while(index < 10);

    return 0;
}