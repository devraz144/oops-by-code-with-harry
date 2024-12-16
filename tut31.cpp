// Constructor overloading -> when there are many constructors but the match will be invoked 
// One object can invoke one constructor

#include<iostream>
using namespace std;

class Complex {
    int a, b;

public:
    Complex(int x, int y) {
        a = x;
        b = y;
        cout << a << " + " << b << "i" << endl;
    }

    Complex(int x) {
        a = x;
        b = 0;
        cout << a << " + " << b << "i" << endl;
    }

    Complex() {
        a = 0;
        b = 0;
        cout << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex c1 = Complex(34, 5); // All are explicit calls
    Complex c2 = Complex(90);
    Complex c3 = Complex();

    return 0;
}
