/* ------------------------  Type Casting in C++  ------------------------

// ------------------------  Implicit Type Casting in C++  ------------------------


#include <iostream>
using namespace std;

int main() {

    // 1. float -> int
    float num1 = 13.456f;
    int num2 = 4;
    int result = num1 + num2;                      // Implicit type casting from float to int
    cout << result << endl;                        // Output: 17


    // 2. int -> float
    float num1 = 13.456f;
    int num2 = 4;
    float result = num1 + num2;                     // Implicit type casting from int to float
    cout << result << endl;                        // Output: 17.456


    // 3. int -> char
    int num = 65;                                  // 'A'
    char c = num;                                 // Implicit type casting from int to char
    cout << c << endl;                            // Output: A


    // 4. char -> int
    char c = 'A';
    int num = c;                                  // Implicit type casting from char to int
    cout << num << endl;                          // Output: 65
  
    return 0;
}


// ------------------------  Explicit Type Casting in C++  ------------------------


#include <iostream>
using namespace std;
int main() {
    double pi = 3.14159;
    int answer = (int)pi;
    cout << answer << endl;
    return 0;
}


// Explicit type cast means you convert any data type into another without touching their real data types like in this int num1 = 29 and int num2 = 4 are in integar but we are converting them into float by using (float)num1 , so the result will be in float data type and the output will be 7.25 because 29/4 = 7.25
#include <iostream>
using namespace std;
int main() {
    int num1 = 29;
    int num2 = 4;
    float result = (float)num1 / num2;
    cout << result << endl;                                // Output: 7.25
    return 0;
}


*/
