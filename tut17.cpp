// inline function, default argument, and constant argument

/*
inline function -> the special function that consists of four or five lines 
                   and is replaced at the time of calling.

default argument -> the argument that we don't need to pass at the time of calling,
                    but if we do pass, then it will be overwritten.

const argument -> whenever we want the value to not change inside the function,
                  then we write it at the time of declaration fun(const int a){}

# For detailed notes, go to the written notes
*/

#include <iostream>
using namespace std;

// inline function
inline int product(int a, int b) {
    return a * b;
}

// default argument
int totalmoney(int price, int duration, int rate = 1.08) {
    return ((price * duration * rate) / 100);
}

// const argument
int fixed(const int a) {
    // a = a * 10; // it will throw an error
    return a;
}

int main() {
    cout << "The answer of product is " << product(2, 89) << endl;
    cout << "The answer of totalmoney is " << totalmoney(10000, 2) << endl;
    cout << "The answer of fixed is " << fixed(123) << endl;

    return 0;
}
