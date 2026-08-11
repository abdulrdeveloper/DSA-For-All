#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "The sum is: " << a + b << endl;
}

int multiply(int a, int b) {
    return (a * b);
}

int main() {

    add(5, 10);
    add(3.5, 2.5);
    add(7.2f, 4.8f);
    add(1, 6);

    cout << "The product is: " << multiply(5, 10) << endl;
    cout << "The product is: " << multiply(3, 2) << endl;
    return 0;
}