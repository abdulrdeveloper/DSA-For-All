/*---------------- If-Else Statement Example in C++ --------------------



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



//-------------- If-Else-If Statement Example in C++ --------------------

#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13) {
        cout << "You are a child." << endl;
    } else if (age < 20) {
        cout << "You are a teenager." << endl;
    } else {
        cout << "You are an adult." << endl;
    }
    return 0;
}



// ---------------- Nested If-Else Statement Example in C++ ----------------------



#include <iostream>
using namespace std;
int main() {
int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        if (number % 2 == 0) {
            cout << "Positive even number." << endl;
        } else {
            cout << "Positive odd number." << endl;
        }
    } else {
        cout << "Number is not positive." << endl;
    }

    return 0;
}



// ---------------- Switch Example in C++ ----------------------



#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    switch (number) {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        default:
            cout << "Number is not between 1 and 3." << endl;
    }
    return 0;
}



// ---------------- Ternary Operator Example in C++ (use for short tricks programs only) ----------------------



#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    (age > 5) ? cout << "You Can Vote" << endl : cout << "You Cannot Vote" << endl;
    return 0;
}


*/