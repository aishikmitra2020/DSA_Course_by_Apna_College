#include <iostream>
using namespace std;

// Pass by Reference using pointers
void changeA(int* ptr){ // accepting pointers
    *ptr = 20; // dereferencing and changing the value at the given memeory location
}

// Pass by Reference using References(Alias)
void changeA2(int &a){
    a = 17;
}

int main() {
    int a = 10;

    // Pass by Reference using Pointers
    changeA(&a);
    cout << a << endl;

    // Pass by Reference using References
    changeA2(a);
    cout << a << endl;
    
    return 0;
}