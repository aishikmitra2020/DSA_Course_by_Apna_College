#include <iostream>
using namespace std;

void changeA(int* ptr){ // accepting pointers
    *ptr = 20; // dereferencing and changing the value at the given memeory location
}

int main() {
    int a = 10;

    changeA(&a);

    cout << a << endl;
    
    return 0;
}