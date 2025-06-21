#include <iostream>
using namespace std;

int main() {
    // Memory Address, Pointers
    // & - address of operator
    int a = 10;
    int* ptr = &a;
    // OR
    // int *ptr = &a;

    cout << ptr << endl;
    cout << &a << endl;
    cout << &ptr << endl; // It is diff. from above, because pointer itself gets stored elsewhere but contains the memeory address of other variables

    // Pointer to Pointer
    float price = 100.25f;
    float* ptr2 = &price;
    float** parPtr2 = &ptr2;

    cout << &ptr2 << endl;
    cout << parPtr2 << endl;

    // Dereferencing (*)
    cout << *(&a) << endl; // It will return the value at the given memeory address

    cout << *(ptr) << endl;

    cout << ptr2 << endl;
    cout << *(parPtr2) << endl;

    cout << **(parPtr2) << endl;


    // NULL Pointer - It doesn't point to a valid memory location
    int* x;
    cout << x << endl; // It returns a garbage val and to resolve this, NULL pointer has been introduced

    int* ptr3 = NULL;
    cout << ptr3 << endl;

    
    return 0;
}