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
        cout << "Iteration: " << i << endl;
        i++;
    }
    return 0;
}



//------------------------ Do-While Loop in C++ ------------------------



#include <iostream>
using namespace std;
int main() {
    int i = 30;
    do {
        cout << "Iteration: " << i << endl;
        i++;
    } while (i <= 5);
    return 0;
}




// ------------------------  Nested Loop in C++ ------------------------



#include <iostream>
using namespace std;
int main() {
for (int i = 0; i < 4; i++) {
    for (int j = 0; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
    return 0;
}

*/