// if elseif & control structure 

/*
Control Structure 

Basic types of structures:
1. Sequence Structure (entry -> action 1 -> action 2 -> exit)
2. Selection Structure (entry -> two choices -> exit)
3. Loop Structure (entry -> loop -> condition -> loop -> exit)

*/

// switch case 
#include <iostream>
using namespace std;

int main() {
    int age = 24;
    switch (age) {
        case 18:
            cout << "You may come to us ";
            break;
        case 24:
            cout << "You must come ";
            break; 
        default:
            break;
    }
    return 0;
}
