//  Friend function of one class is to be friend of another class
//  -> one function of a class can be the friend of another class
//  Forward declaration -> to give assurance that it will be there in the program

#include<iostream>
using namespace std;

class calculator;
class complex;

class calculator {
    public:
    int sum (complex c1, complex c2);
};

class complex {
    int a, b;

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void print() {
        cout << a << "+" << b << "i" << endl;
    }

    friend int calculator::sum(complex c1, complex c2);
};

int calculator::sum(complex c1, complex c2) {
    return (c1.a + c2.a);
}

int main() {
    complex c1, c2;
    c1.setNumber(2, 4);
    c2.setNumber(3, 4);
    c1.print();
    c2.print();
    calculator cal;
    int real = cal.sum(c1, c2);
    cout << "The real answer is " << real << endl;

    return 0; 
}

// Friend class: declaring the entire class as friend

/*
class complex;

class cal {
};

class complex {
    friend class cal;
}
*/

