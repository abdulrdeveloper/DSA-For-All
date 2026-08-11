#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "The sum is: " << a + b << endl;
}

int main() {
    add(5, 10);
    add(3.5, 2.5);
    add(7.2f, 4.8f);
    add(1, 6);
    return 0;
}