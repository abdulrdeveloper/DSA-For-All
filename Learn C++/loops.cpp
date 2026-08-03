/* ------------------------  For Loop in C++  ------------------------


#include <iostream>
using namespace std;
int main() {
for (int i = 0; i < 5; i++) {
    cout << "Iteration: " << i << std::endl;
}
    return 0;
}



// ------------------------  For Loop in C++ with Break ------------------------



#include <iostream>
using namespace std;
int main() {
for (int i = 0; i < 5; i++) {
    if(i == 4) {
        break;
    }
    cout << "Iteration: " << i << std::endl;
}
    return 0;
}



// ------------------------  For Loop in C++ with Continue ------------------------


#include <iostream>
using namespace std;
int main() {
for (int i = 0; i < 5; i++) {
    if(i == 2) {
        continue;
    }
    cout << "Iteration: " << i << std::endl;
}
    return 0;
}


// ------------------------  While Loop in C++  ------------------------




#include <iostream>
using namespace std;
int main() {
    int i = 0;
    while (i < 5) {
        cout << "Iteration: " << i << std::endl;
        i++;
    }
    return 0;
}



*/