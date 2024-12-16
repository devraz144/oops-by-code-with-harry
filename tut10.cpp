// Loops 

/*
Three types of loops in C++:

1. For Loop
2. While Loop
3. Do-While Loop

*/

#include <iostream>
using namespace std;

int main() {
    // For Loop: Initialization; Condition; Update
    // The sequence: Initialization -> Condition -> Loop Body -> Update
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    // While Loop
    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
    }

    // Do-While Loop
    do {
        cout << i << endl;
        i++;
    } while (i < 20);

    return 0;
}
