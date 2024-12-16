// Header Files and Operators
  
/*
Two Types of Header Files:
1. System Header Files: These come with the compiler (e.g., #include <iostream>).
2. User-Defined Header Files: These are written by the user (e.g., #include "file_name").

C++ References:
- Depreciated: Features that will not be used in future versions of the language.

*/

/*
Operators in C++:
1. Arithmetic Operators (+, -, *, /, %, ++, --)
   Note: int / int = int 
   Increment (++) and decrement (--) operators also modify the operand.

2. Assignment Operator (=)
3. Comparison Operators (<=, >=, <, >, !=, ==)
   () -> Parentheses (Round Brackets)
   {} -> Curly Braces (Curly Brackets)
   [] -> Square Brackets (Brackets)

4. Logical Operators (&& (and), || (or))
5. Bitwise Operators (&, |, ^, ~, <<, >>)

*/

#include <iostream>
using namespace std;

int main() {
    int a = 4;
    // cout << ++4; // This will throw an error because you cannot increment a constant.
    cout << a++ << endl; // Outputs 4, then increments a to 5
    cout << a << endl;   // Outputs 5
    cout << ++a << endl; // Increments a to 6, then outputs 6
    cout << a << endl;   // Outputs 6

    return 0;
}


