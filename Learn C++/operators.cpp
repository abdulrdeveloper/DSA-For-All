#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // // increment and decrement operators
    // cout << "a++ = " << a++ << endl; // Post-increment
    // cout << "++a = " << ++a << endl; // Pre-increment
    // cout << "b++ = " << b++ << endl; // Post-increment
    // cout << "++b = " << ++b << endl; // Pre-increment

    // // Arithmetic Operators
    // cout << "a + b = " << a + b << endl; // Addition
    // cout << "a - b = " << a - b << endl; // Subtraction
    // cout << "a * b = " << a * b << endl; // Multiplication
    // cout << "a / b = " << a / b << endl; // Division
    // cout << "a % b = " << a % b << endl; // Modulus

    // // Relational Operators
    // cout << "a == b: " << (a == b) << endl; // Equal to
    // cout << "a != b: " << (a != b) << endl; // Not equal to
    // cout << "a > b: " << (a > b) << endl;   // Greater than
    // cout << "a < b: " << (a < b) << endl;   // Less than
    // cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    // cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // // Logical Operators
    // bool x = true;
    // bool y = false;
    // cout << "x && y: " << (x && y) << endl; // Logical AND
    // cout << "x || y: " << (x || y) << endl; // Logical OR
    // cout << "!x: " << (!x) << endl;         // Logical NOT

    // Bitwise Operators
    cout << "a & b = " << (a & b) << endl; // Bitwise AND
    cout << "a | b = " << (a | b) << endl; // Bitwise OR
    cout << "a ^ b = " << (a ^ b) << endl; // Bitwise XOR
    cout << "~a = " << (~a) << endl; // Bitwise NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift

    return 0;
}