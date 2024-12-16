// C++ Basic Input/Output 

/*

If we write this without #include<iostream>, it will not throw any error because it doesn't involve input/output operations:

int main() {
   int a;
   a = 2 * 3;
}

*/

/*
<< -> Insertion operator (used with cout)
>> -> Extraction operator (used with cin)
cin -> Used for taking input
cout -> Used for giving output
*/

/*
To compile and execute a C++ program:

Step 1: Compile the program
g++ .\filename.cpp (write g++ then press tab)

Step 2: Run the compiled program
.\a.exe (write a then press tab)

*/

#include <iostream>  // This is necessary for input and output operations
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "You entered: " << a << endl;
    return 0;
}

/*
Reserved Keywords in C++

alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break, case, catch, char, char16_t, char32_t, class, compl, const, constexpr, const_cast, continue, decltype, default, delete, do, double, dynamic_cast, else, enum, explicit, export, extern, false, float, for, friend, goto, if, inline, int, long, mutable, namespace, new, noexcept, not, not_eq, nullptr, operator, or, or_eq, private, protected, public, register, reinterpret_cast, return, short, signed, sizeof, static, static_assert, static_cast, struct, switch, template, this, thread_local, throw, true, try, typedef, typeid, typename, union, unsigned, using, virtual, void, volatile, wchar_t, while, xor, xor_eq

Data Types, Their Sizes, and Ranges

| Data Type        | Size (bytes) | Range                                 |
|------------------|--------------|---------------------------------------|
| bool             | 1            | true or false                         |
| char             | 1            | -128 to 127 or 0 to 255               |
| unsigned char    | 1            | 0 to 255                              |
| short            | 2            | -32,768 to 32,767                     |
| unsigned short   | 2            | 0 to 65,535                           |
| int              | 4            | -2,147,483,648 to 2,147,483,647       |
| unsigned int     | 4            | 0 to 4,294,967,295                    |
| long             | 4 or 8       | -2,147,483,648 to 2,147,483,647 (4 bytes) or larger for 8 bytes |
| unsigned long    | 4 or 8       | 0 to 4,294,967,295 (4 bytes) or larger for 8 bytes |
| float            | 4            | Approx 3.4E-38 to 3.4E+38             |
| double           | 8            | Approx 1.7E-308 to 1.7E+308           |
| long double      | 8, 12, or 16 | Very large range                      |



New Line Character: \n
*/
