// Constructor -> is a special member function with the same name as the class 
// Used to initialize the object of the class 
// Runs automatically (invoked) whenever an object is created 
// Default constructor -> the constructor that takes no arguments

#include <iostream>
using namespace std;

class Complex {
    int a, b;

public:
    Complex(void); // Constructor declaration

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
    // cout << "Hello world";
}

int main() {
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
