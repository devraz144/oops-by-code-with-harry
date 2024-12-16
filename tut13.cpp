// Array and Pointer 

/*
Array: A collection of items of similar data type stored in contiguous memory. It is a data structure 
that starts from index 0.

# First way to declare an array:
int marks[4] = {23, 25, 54, 34};
cout << marks[0];

# Second way to declare an array:
int realmarks[3];
realmarks[0] = 12;
realmarks[1] = 44;
realmarks[2] = 87;

Values in an array can be changed.

The name of the array is a pointer to the array.
p = arr;
p++; // It will point to the second element in the array.

Pointer Arithmetic:
Address(new) = Address(old) + i * (sizeof(data_type))
*/

#include <iostream>
using namespace std;

int main() {
    int marks[4] = {23, 25, 54, 34};
    cout << marks[0] << endl;

    int realmarks[3];
    realmarks[0] = 12;
    realmarks[1] = 44;
    realmarks[2] = 87;

    return 0; 
}
