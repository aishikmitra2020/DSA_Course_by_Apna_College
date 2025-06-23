#include <iostream>
using namespace std;

int main() {
    // Pointer - Pointer
    int* ptr2; // a garbage value will be stored in this pointer
    int* ptr1 = ptr2 + 2;

    cout << (ptr1 - ptr2) << endl;

    // Comparing Pointers
    // >, >=, <, <=, ==, !=   ---> Relational Operators
    int* ptr3;
    int* ptr4;

    cout << ptr3 << endl;
    cout << ptr4 << endl;

    cout << (ptr3 < ptr4) << endl;
    
    return 0;
}