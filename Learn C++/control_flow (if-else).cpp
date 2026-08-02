#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "You passed." << endl;
    } else {
        cout << "You failed." << endl;
    }

    return 0;
}
